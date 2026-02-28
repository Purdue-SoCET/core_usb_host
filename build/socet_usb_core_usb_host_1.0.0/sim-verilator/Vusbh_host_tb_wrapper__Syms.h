// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUSBH_HOST_TB_WRAPPER__SYMS_H_
#define VERILATED_VUSBH_HOST_TB_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vusbh_host_tb_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vusbh_host_tb_wrapper___024root.h"
#include "Vusbh_host_tb_wrapper_ahb_if.h"
#include "Vusbh_host_tb_wrapper_bus_protocol_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vusbh_host_tb_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vusbh_host_tb_wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vusbh_host_tb_wrapper___024root TOP;
    Vusbh_host_tb_wrapper_ahb_if   TOP__usbh_host_tb_wrapper__DOT__ahb;
    Vusbh_host_tb_wrapper_bus_protocol_if TOP__usbh_host_tb_wrapper__DOT__busif;

    // CONSTRUCTORS
    Vusbh_host_tb_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vusbh_host_tb_wrapper* modelp);
    ~Vusbh_host_tb_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
