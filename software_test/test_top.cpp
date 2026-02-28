#include <verilated.h>
#include "Vusbh_host_tb_wrapper.h"
#include <iostream>
#include <verilated_fst_c.h>
#include "tusb.h"

Vusbh_host_tb_wrapper* top;
vluint64_t main_time = 0;

VerilatedFstC *tracep = nullptr;

extern "C" int app_main(void);

// Change this:
// void tick() {
// To this:
extern "C" void tick() {
    top->clk_i = 0;
    main_time += 5;
    top->eval();
    tracep->dump(main_time);
    top->clk_i = 1;
    main_time += 5;
    top->eval();
    tracep->dump(main_time);

    // If hardware interrupt is high, tell TinyUSB to check status registers
    if (top->intr_o) {
        hcd_int_handler(0, true); 
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
    app_main();

    tracep->close();
    delete top;
    return 0;
}