// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vusbh_host_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VUSBH_HOST_TB_WRAPPER_AHB_IF_H_
#define VERILATED_VUSBH_HOST_TB_WRAPPER_AHB_IF_H_  // guard

#include "verilated.h"


class Vusbh_host_tb_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vusbh_host_tb_wrapper_ahb_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(HCLK,0,0);
    VL_IN8(HRESETn,0,0);
    CData/*0:0*/ __PVT__HMASTLOCK;
    CData/*0:0*/ __PVT__HRESP;
    CData/*2:0*/ __PVT__HBURST;
    CData/*3:0*/ __PVT__HWSTRB;

    // INTERNAL VARIABLES
    Vusbh_host_tb_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vusbh_host_tb_wrapper_ahb_if(Vusbh_host_tb_wrapper__Syms* symsp, const char* v__name);
    ~Vusbh_host_tb_wrapper_ahb_if();
    VL_UNCOPYABLE(Vusbh_host_tb_wrapper_ahb_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vusbh_host_tb_wrapper_ahb_if* obj);

#endif  // guard
