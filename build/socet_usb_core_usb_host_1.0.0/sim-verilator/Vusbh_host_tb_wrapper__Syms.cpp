// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper.h"
#include "Vusbh_host_tb_wrapper___024root.h"
#include "Vusbh_host_tb_wrapper_ahb_if.h"
#include "Vusbh_host_tb_wrapper_bus_protocol_if.h"

// FUNCTIONS
Vusbh_host_tb_wrapper__Syms::~Vusbh_host_tb_wrapper__Syms()
{
}

Vusbh_host_tb_wrapper__Syms::Vusbh_host_tb_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vusbh_host_tb_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__usbh_host_tb_wrapper__DOT__ahb{this, Verilated::catName(namep, "usbh_host_tb_wrapper.ahb")}
    , TOP__usbh_host_tb_wrapper__DOT__busif{this, Verilated::catName(namep, "usbh_host_tb_wrapper.busif")}
{
        // Check resources
        Verilated::stackCheck(135);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__usbh_host_tb_wrapper__DOT__ahb = &TOP__usbh_host_tb_wrapper__DOT__ahb;
    TOP.__PVT__usbh_host_tb_wrapper__DOT__busif = &TOP__usbh_host_tb_wrapper__DOT__busif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__usbh_host_tb_wrapper__DOT__ahb.__Vconfigure(true);
    TOP__usbh_host_tb_wrapper__DOT__busif.__Vconfigure(true);
}
