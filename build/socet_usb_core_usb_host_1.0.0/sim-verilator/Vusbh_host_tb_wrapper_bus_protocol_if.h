// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vusbh_host_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VUSBH_HOST_TB_WRAPPER_BUS_PROTOCOL_IF_H_
#define VERILATED_VUSBH_HOST_TB_WRAPPER_BUS_PROTOCOL_IF_H_  // guard

#include "verilated.h"


class Vusbh_host_tb_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vusbh_host_tb_wrapper_bus_protocol_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ wen;
    CData/*0:0*/ ren;
    CData/*0:0*/ error;
    CData/*3:0*/ __PVT__strobe;
    CData/*0:0*/ __PVT__is_burst;
    CData/*1:0*/ __PVT__burst_type;
    CData/*7:0*/ __PVT__burst_length;
    CData/*0:0*/ __PVT__secure_transfer;

    // INTERNAL VARIABLES
    Vusbh_host_tb_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vusbh_host_tb_wrapper_bus_protocol_if(Vusbh_host_tb_wrapper__Syms* symsp, const char* v__name);
    ~Vusbh_host_tb_wrapper_bus_protocol_if();
    VL_UNCOPYABLE(Vusbh_host_tb_wrapper_bus_protocol_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vusbh_host_tb_wrapper_bus_protocol_if* obj);

#endif  // guard
