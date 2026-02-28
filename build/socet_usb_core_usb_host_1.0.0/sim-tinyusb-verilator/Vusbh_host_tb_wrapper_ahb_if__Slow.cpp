// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper__Syms.h"
#include "Vusbh_host_tb_wrapper_ahb_if.h"

void Vusbh_host_tb_wrapper_ahb_if___ctor_var_reset(Vusbh_host_tb_wrapper_ahb_if* vlSelf);

Vusbh_host_tb_wrapper_ahb_if::Vusbh_host_tb_wrapper_ahb_if(Vusbh_host_tb_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vusbh_host_tb_wrapper_ahb_if___ctor_var_reset(this);
}

void Vusbh_host_tb_wrapper_ahb_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vusbh_host_tb_wrapper_ahb_if::~Vusbh_host_tb_wrapper_ahb_if() {
}
