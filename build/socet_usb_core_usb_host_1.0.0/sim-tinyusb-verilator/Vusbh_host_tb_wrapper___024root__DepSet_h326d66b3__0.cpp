// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper___024root.h"

void Vusbh_host_tb_wrapper___024root___ico_sequent__TOP__0(Vusbh_host_tb_wrapper___024root* vlSelf);

void Vusbh_host_tb_wrapper___024root___eval_ico(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_ico\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vusbh_host_tb_wrapper___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vusbh_host_tb_wrapper___024root___eval_triggers__ico(Vusbh_host_tb_wrapper___024root* vlSelf);

bool Vusbh_host_tb_wrapper___024root___eval_phase__ico(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_phase__ico\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vusbh_host_tb_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vusbh_host_tb_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vusbh_host_tb_wrapper___024root___eval_act(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_act\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vusbh_host_tb_wrapper___024root___nba_sequent__TOP__0(Vusbh_host_tb_wrapper___024root* vlSelf);

void Vusbh_host_tb_wrapper___024root___eval_nba(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_nba\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vusbh_host_tb_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vusbh_host_tb_wrapper___024root___eval_triggers__act(Vusbh_host_tb_wrapper___024root* vlSelf);

bool Vusbh_host_tb_wrapper___024root___eval_phase__act(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_phase__act\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vusbh_host_tb_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vusbh_host_tb_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vusbh_host_tb_wrapper___024root___eval_phase__nba(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_phase__nba\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vusbh_host_tb_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__ico(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__nba(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__act(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vusbh_host_tb_wrapper___024root___eval(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vusbh_host_tb_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/socet_usb_core_usb_host_1.0.0/src_v/usbh_host_tb_wrapper.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vusbh_host_tb_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vusbh_host_tb_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/socet_usb_core_usb_host_1.0.0/src_v/usbh_host_tb_wrapper.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vusbh_host_tb_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/socet_usb_core_usb_host_1.0.0/src_v/usbh_host_tb_wrapper.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vusbh_host_tb_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vusbh_host_tb_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vusbh_host_tb_wrapper___024root___eval_debug_assertions(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_debug_assertions\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.n_rst_i & 0xfeU)))) {
        Verilated::overWidthError("n_rst_i");}
    if (VL_UNLIKELY(((vlSelfRef.hsel_i & 0xfeU)))) {
        Verilated::overWidthError("hsel_i");}
    if (VL_UNLIKELY(((vlSelfRef.hwrite_i & 0xfeU)))) {
        Verilated::overWidthError("hwrite_i");}
    if (VL_UNLIKELY(((vlSelfRef.htrans_i & 0xfcU)))) {
        Verilated::overWidthError("htrans_i");}
    if (VL_UNLIKELY(((vlSelfRef.hsize_i & 0xf8U)))) {
        Verilated::overWidthError("hsize_i");}
    if (VL_UNLIKELY(((vlSelfRef.utmi_txready_i & 0xfeU)))) {
        Verilated::overWidthError("utmi_txready_i");}
    if (VL_UNLIKELY(((vlSelfRef.utmi_rxvalid_i & 0xfeU)))) {
        Verilated::overWidthError("utmi_rxvalid_i");}
    if (VL_UNLIKELY(((vlSelfRef.utmi_rxactive_i & 0xfeU)))) {
        Verilated::overWidthError("utmi_rxactive_i");}
    if (VL_UNLIKELY(((vlSelfRef.utmi_rxerror_i & 0xfeU)))) {
        Verilated::overWidthError("utmi_rxerror_i");}
    if (VL_UNLIKELY(((vlSelfRef.utmi_linestate_i & 0xfcU)))) {
        Verilated::overWidthError("utmi_linestate_i");}
}
#endif  // VL_DEBUG
