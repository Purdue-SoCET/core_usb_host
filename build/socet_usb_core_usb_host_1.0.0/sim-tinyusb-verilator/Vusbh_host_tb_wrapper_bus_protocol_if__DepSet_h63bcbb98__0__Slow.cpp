// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper_bus_protocol_if.h"

VL_ATTR_COLD void Vusbh_host_tb_wrapper_bus_protocol_if___ctor_var_reset(Vusbh_host_tb_wrapper_bus_protocol_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vusbh_host_tb_wrapper_bus_protocol_if___ctor_var_reset\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->ren = VL_RAND_RESET_I(1);
    vlSelf->error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__strobe = VL_RAND_RESET_I(4);
    vlSelf->__PVT__is_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__burst_type = VL_RAND_RESET_I(2);
    vlSelf->__PVT__burst_length = VL_RAND_RESET_I(8);
    vlSelf->__PVT__secure_transfer = VL_RAND_RESET_I(1);
}
