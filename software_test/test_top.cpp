#include <verilated.h>
#include "Vusbh_host_tb_wrapper.h"
#include <iostream>
#include <verilated_fst_c.h>
#include "tusb.h"

Vusbh_host_tb_wrapper* top;
vluint64_t main_time = 0;

VerilatedFstC *tracep = nullptr;

extern "C" int app_main(void);

extern "C" void tick() {
    static bool in_interrupt = false;
    static int response_delay = 0;
    static bool last_tx_valid = false; // Track previous state

    // Advance Clock
    top->clk_i = 0; main_time += 5; top->eval();
    if (tracep) tracep->dump(main_time);
    top->clk_i = 1; main_time += 5; top->eval();
    if (tracep) tracep->dump(main_time);

    // 1. Dummy Device Logic: Only respond after the host finishes a transmission
    if (last_tx_valid && top->utmi_txvalid_o == 0) {
        response_delay = 20; // Wait 20 cycles after host stops
    }
    last_tx_valid = top->utmi_txvalid_o;

    if (response_delay > 1) {
        response_delay--;
    } else if (response_delay == 1) {
        top->utmi_rxactive_i = 1;
        top->utmi_rxvalid_i = 1;
        top->utmi_data_in_i = 0xD2; // PID_ACK
        response_delay = 0;
    } else {
        top->utmi_rxactive_i = 0;
        top->utmi_rxvalid_i = 0;
    }

    // 2. Re-entry guard for Interrupts
    if (top->intr_o && !in_interrupt) {
        in_interrupt = true;
        hcd_int_handler(0, true); 
        in_interrupt = false;
    }
}

void reset_ip() {
    top->n_rst_i = 0;
    for (int i = 0; i < 10; i++) tick();
    top->n_rst_i = 1;
    tick();
}

extern "C" void usbhw_reg_write(uint32_t addr, uint32_t data) {
    // AHB Address Phase
    top->hsel_i = 1;
    top->haddr_i = addr;
    top->hwrite_i = 1; 
    top->htrans_i = 2; // NONSEQ
    top->hsize_i = 2;  // 32-bit
    tick();

    // AHB Data Phase
    top->hwdata_i = data;
    top->htrans_i = 0; // Drop to IDLE immediately
    top->hsel_i = 0;

    do {
        tick(); 
    } while (!top->hready_o);
}

extern "C" uint32_t usbhw_reg_read(uint32_t addr) {
    // AHB Address Phase
    top->hsel_i = 1;
    top->haddr_i = addr;
    top->hwrite_i = 0; 
    top->htrans_i = 2; // NONSEQ
    top->hsize_i = 2;  // 32-bit
    tick();

    // AHB Data Phase
    top->htrans_i = 0; // Drop to IDLE
    top->hsel_i = 0;

    do {
        tick();
    } while (!top->hready_o);
    
    return top->hrdata_o;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    top = new Vusbh_host_tb_wrapper;
    tracep = new VerilatedFstC;
    top->trace(tracep, 99);
    tracep->open("waveform.fst");

    reset_ip();
    // Simulate a Full-Speed device being plugged in (D+ pulled high)
    // UTMI Linestate: 01 = FS (D+ high), 10 = LS (D- high)
    top->utmi_linestate_i = 1; 
    for (int i = 0; i < 100; i++) tick(); // Give the host time to see it

    app_main();

    tracep->close();
    delete top;
    return 0;
}