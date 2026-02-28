// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper___024root.h"

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_static(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_static\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__n_rst_i__0 = vlSelfRef.n_rst_i;
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_initial__TOP(Vusbh_host_tb_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root____Vm_traceActivitySetAll(Vusbh_host_tb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_initial(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_initial\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vusbh_host_tb_wrapper___024root___eval_initial__TOP(vlSelf);
    Vusbh_host_tb_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_final(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_final\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__stl(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vusbh_host_tb_wrapper___024root___eval_phase__stl(Vusbh_host_tb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_settle(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_settle\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vusbh_host_tb_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/socet_usb_core_usb_host_1.0.0/src_v/usbh_host_tb_wrapper.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vusbh_host_tb_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__stl(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___dump_triggers__stl\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___stl_sequent__TOP__0(Vusbh_host_tb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_stl(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_stl\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vusbh_host_tb_wrapper___024root___stl_sequent__TOP__0(vlSelf);
        Vusbh_host_tb_wrapper___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_triggers__stl(Vusbh_host_tb_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vusbh_host_tb_wrapper___024root___eval_phase__stl(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_phase__stl\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vusbh_host_tb_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vusbh_host_tb_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__ico(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___dump_triggers__ico\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__act(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___dump_triggers__act\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge n_rst_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__nba(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___dump_triggers__nba\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge n_rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root____Vm_traceActivitySetAll(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root____Vm_traceActivitySetAll\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___ctor_var_reset(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___ctor_var_reset\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->n_rst_i = VL_RAND_RESET_I(1);
    vlSelf->hsel_i = VL_RAND_RESET_I(1);
    vlSelf->haddr_i = VL_RAND_RESET_I(32);
    vlSelf->hwrite_i = VL_RAND_RESET_I(1);
    vlSelf->htrans_i = VL_RAND_RESET_I(2);
    vlSelf->hsize_i = VL_RAND_RESET_I(3);
    vlSelf->hwdata_i = VL_RAND_RESET_I(32);
    vlSelf->hrdata_o = VL_RAND_RESET_I(32);
    vlSelf->hready_o = VL_RAND_RESET_I(1);
    vlSelf->utmi_data_in_i = VL_RAND_RESET_I(8);
    vlSelf->utmi_txready_i = VL_RAND_RESET_I(1);
    vlSelf->utmi_rxvalid_i = VL_RAND_RESET_I(1);
    vlSelf->utmi_rxactive_i = VL_RAND_RESET_I(1);
    vlSelf->utmi_rxerror_i = VL_RAND_RESET_I(1);
    vlSelf->utmi_linestate_i = VL_RAND_RESET_I(2);
    vlSelf->intr_o = VL_RAND_RESET_I(1);
    vlSelf->utmi_data_out_o = VL_RAND_RESET_I(8);
    vlSelf->utmi_txvalid_o = VL_RAND_RESET_I(1);
    vlSelf->utmi_op_mode_o = VL_RAND_RESET_I(2);
    vlSelf->utmi_xcvrselect_o = VL_RAND_RESET_I(2);
    vlSelf->utmi_termselect_o = VL_RAND_RESET_I(1);
    vlSelf->utmi_dppulldown_o = VL_RAND_RESET_I(1);
    vlSelf->utmi_dmpulldown_o = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__ahb_valid = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q = VL_RAND_RESET_I(32);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_tx_flush_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q = VL_RAND_RESET_I(2);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q = VL_RAND_RESET_I(2);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_status_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_device_detect_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_err_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_done_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_sof_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_sts_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_device_detect_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_err_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_done_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_sof_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_tx_len_q = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_start_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_in_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ack_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_datax_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q = VL_RAND_RESET_I(8);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q = VL_RAND_RESET_I(7);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_rx_stat_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_wr_data_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_wr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__data_r = VL_RAND_RESET_I(32);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__rd_data_q = VL_RAND_RESET_I(32);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_rd_req_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q = VL_RAND_RESET_I(11);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__sof_irq_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__transfer_req_ack_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__fifo_tx_pop_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__fifo_rx_push_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__fifo_flush_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__transfer_start_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__in_transfer_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__resp_expected_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__send_sof_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__usb_err_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__intr_done_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__intr_sof_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__intr_err_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__err_cond_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__intr_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__device_det_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__start_ack_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_tx_done_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_rx_done_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_crc_err_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_timeout_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q = VL_RAND_RESET_I(8);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__last_tx_time_q = VL_RAND_RESET_I(9);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_data1_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_out_w = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w = VL_RAND_RESET_I(8);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w = VL_RAND_RESET_I(5);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q = VL_RAND_RESET_I(2);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__se0_detect_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__eop_detected_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q = VL_RAND_RESET_I(32);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q = VL_RAND_RESET_I(4);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__shift_en_w = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q = VL_RAND_RESET_I(2);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w = VL_RAND_RESET_I(16);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__empty_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__full_o = VL_RAND_RESET_I(1);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__empty_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr = VL_RAND_RESET_I(6);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__wr_ptr = VL_RAND_RESET_I(6);
    vlSelf->usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__n_rst_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
