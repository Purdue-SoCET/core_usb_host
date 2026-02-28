// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper_ahb_if.h"

VL_ATTR_COLD void Vusbh_host_tb_wrapper_ahb_if___ctor_var_reset(Vusbh_host_tb_wrapper_ahb_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vusbh_host_tb_wrapper_ahb_if___ctor_var_reset\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->HCLK = VL_RAND_RESET_I(1);
    vlSelf->HRESETn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HMASTLOCK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HRESP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HBURST = VL_RAND_RESET_I(3);
    vlSelf->__PVT__HWSTRB = VL_RAND_RESET_I(4);
}
