// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper_ahb_if.h"

std::string VL_TO_STRING(const Vusbh_host_tb_wrapper_ahb_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vusbh_host_tb_wrapper_ahb_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
