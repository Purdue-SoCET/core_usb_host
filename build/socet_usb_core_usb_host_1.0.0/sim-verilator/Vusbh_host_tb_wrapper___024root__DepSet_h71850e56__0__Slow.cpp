// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusbh_host_tb_wrapper.h for the primary calling header

#include "Vusbh_host_tb_wrapper__pch.h"
#include "Vusbh_host_tb_wrapper__Syms.h"
#include "Vusbh_host_tb_wrapper___024root.h"

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_initial__TOP(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_initial__TOP\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hready_o = 1U;
    vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.error = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___dump_triggers__stl(Vusbh_host_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___eval_triggers__stl(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___eval_triggers__stl\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vusbh_host_tb_wrapper___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root___stl_sequent__TOP__0(Vusbh_host_tb_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_2;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_2 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_9;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_9 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_17;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_17 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_18;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_18 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_21;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_21 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_22;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_22 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_23;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_23 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_24;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_24 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_1;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_1 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_12;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_12 = 0;
    CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_13;
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_13 = 0;
    // Body
    vlSelfRef.hrdata_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__rd_data_q;
    vlSelfRef.intr_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_q;
    vlSelfRef.utmi_op_mode_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q;
    vlSelfRef.utmi_xcvrselect_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q;
    vlSelfRef.utmi_termselect_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q;
    vlSelfRef.utmi_dppulldown_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q;
    vlSelfRef.utmi_dmpulldown_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q;
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__full_o 
        = (0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__full_o 
        = (0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_tx_pop_w 
        = ((3U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
           & (IData)(vlSelfRef.utmi_txready_i));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__shift_en_w 
        = (1U & ((~ (IData)(vlSelfRef.utmi_rxactive_i)) 
                 | ((IData)(vlSelfRef.utmi_rxactive_i) 
                    & (IData)(vlSelfRef.utmi_rxvalid_i))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__eop_detected_w 
        = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__se0_detect_q) 
           & (0U != (IData)(vlSelfRef.utmi_linestate_i)));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__send_sof_w 
        = ((0xbb7fU == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)) 
           & ((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
              & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q)));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_rx_push_w 
        = ((0U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
           & ((0xbU != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
              & ((~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q)) 
                 & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r 
        = ((4U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
           || ((5U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
               || ((6U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                   || ((7U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                       || ((8U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                           || ((2U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                               || ((9U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                                   || (3U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)))))))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w 
        = (((((0x8000U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                          << 0xfU)) | (0x4000U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                                  << 0xdU))) 
             | ((0x2000U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                            << 0xbU)) | (0x1000U & 
                                         ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                          << 9U)))) 
            | (((0x800U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                           << 7U)) | (0x400U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                                << 5U))) 
               | ((0x200U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                             << 3U)) | (0x100U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                                  << 1U))))) 
           | ((((0x80U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                          >> 1U)) | (0x40U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                              >> 3U))) 
               | ((0x20U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                            >> 5U)) | (0x10U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                                >> 7U)))) 
              | (((8U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                         >> 9U)) | (4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                          >> 0xbU))) 
                 | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                           >> 0xdU)) | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                              >> 0xfU))))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__ahb_valid 
        = ((IData)(vlSelfRef.hsel_i) & ((2U == (IData)(vlSelfRef.htrans_i)) 
                                        | (3U == (IData)(vlSelfRef.htrans_i))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20 
        = (1U & VL_REDXOR_8((0xc0U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w 
        = ((0xffU <= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__last_tx_time_q)) 
           & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w 
        = ((1U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
           & ((~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q)) 
              & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q) 
                 & (((0xc3U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q)) 
                     | (0x4bU == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q))) 
                    & (0xb001U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_1 
        = (1U & VL_REDXOR_16((0xc000U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r = 0U;
    if (((((((((0U == (0xffU & vlSelfRef.haddr_i)) 
               | (4U == (0xffU & vlSelfRef.haddr_i))) 
              | (0xcU == (0xffU & vlSelfRef.haddr_i))) 
             | (0x10U == (0xffU & vlSelfRef.haddr_i))) 
            | (0x14U == (0xffU & vlSelfRef.haddr_i))) 
           | (0x18U == (0xffU & vlSelfRef.haddr_i))) 
          | (0x1cU == (0xffU & vlSelfRef.haddr_i))) 
         | (0x20U == (0xffU & vlSelfRef.haddr_i)))) {
        if ((0U == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xffffff07U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q) 
                       << 7U) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q) 
                                  << 6U) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q) 
                                               << 3U)))));
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xfffffff8U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q) 
                       << 1U) | (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q)));
        } else if ((4U == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xffffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q) 
                      << 0x10U));
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xfffffff8U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_err_q) 
                       << 2U) | (IData)(vlSelfRef.utmi_linestate_i)));
        } else if ((0xcU == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xfffffff0U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_err_q) 
                       << 2U) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_done_q) 
                                  << 1U) | (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_sof_q))));
        } else if ((0x10U == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xfffffff0U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | ((((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_device_detect_q) 
                        << 3U) | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_err_q) 
                                  << 2U)) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_done_q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_sof_q))));
        } else if ((0x14U == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xffff0000U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_tx_len_q));
        } else if ((0x18U == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0x8fffffffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_in_q) 
                       << 0x1eU) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ack_q) 
                                     << 0x1dU) | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_datax_q) 
                                                  << 0x1cU))));
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xff00001fU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q) 
                       << 0x10U) | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                     << 9U) | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                               << 5U))));
        } else if ((0x1cU == (0xffU & vlSelfRef.haddr_i))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xfffffffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | ((((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_start_q) 
                        << 0x1fU) | ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_crc_err_q) 
                                     << 0x1eU)) | (
                                                   ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_timeout_q) 
                                                    << 0x1dU) 
                                                   | ((0U 
                                                       == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)) 
                                                      << 0x1cU))));
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xff000000U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q) 
                       << 0x10U) | (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q)));
        } else {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r 
                = ((0xffffff00U & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r) 
                   | vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__ram
                   [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr]);
        }
    } else {
        vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r = 0U;
    }
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_22 
        = (1U & VL_REDXOR_8((0x30U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_21 
        = (1U & VL_REDXOR_4((0xcU & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19 
        = (1U & (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                  >> 1U) ^ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q)));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w 
        = (0xffU & ((1U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                     ? vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q
                     : vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram
                    [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr]));
    vlSelfRef.utmi_txvalid_o = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r;
    vlSelfRef.utmi_data_out_o = (0xffU & ((4U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                           ? (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))
                                           : ((5U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                               ? (~ 
                                                  ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                                                   >> 8U))
                                               : ((6U 
                                                   == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                   ? 
                                                  ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                                                    ? 0xa5U
                                                    : (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                    ? (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                     ? 
                                                    ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w) 
                                                     >> 8U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                      ? 
                                                     ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_data1_q)
                                                       ? 0x4bU
                                                       : 0xc3U)
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                       ? 0xd2U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                        ? 
                                                       vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram
                                                       [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr]
                                                        : 0U)))))))));
    vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.wen 
        = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__ahb_valid) 
           & (IData)(vlSelfRef.hwrite_i));
    vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.ren 
        = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__ahb_valid) 
           & (~ (IData)(vlSelfRef.hwrite_i)));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r 
        = vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q;
    if ((8U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q) 
                                  | (0U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q)))))) {
                        vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r 
                            = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q)
                                ? 0U : 2U);
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q))) {
                    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 1U;
                } else if (vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w) {
                    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q) 
                                 | (0U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q)))))) {
                vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 9U;
            }
        } else if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if (vlSelfRef.utmi_txready_i) {
                vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 0U;
            }
        } else if (vlSelfRef.utmi_txready_i) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r 
                = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q)
                    ? 0xcU : ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q)
                               ? 0xbU : 0xcU));
        }
    } else if ((4U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
                if (vlSelfRef.utmi_txready_i) {
                    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 8U;
                }
            } else if (vlSelfRef.utmi_txready_i) {
                vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if (vlSelfRef.utmi_txready_i) {
                vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r 
                    = ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q)
                        ? 0xbU : 0U);
            }
        } else if (vlSelfRef.utmi_txready_i) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
            if (((IData)(vlSelfRef.utmi_txready_i) 
                 & (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q)))) {
                vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 4U;
            }
        } else if (((IData)(vlSelfRef.utmi_txready_i) 
                    & (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q)))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 4U;
        } else if (vlSelfRef.utmi_txready_i) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q)))) {
            vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r 
                = (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q) 
                    & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w))
                    ? 0U : (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q) 
                             & ((0xc3U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q)) 
                                | (0x4bU == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q))))
                             ? 0xaU : 0U));
        }
    } else if (vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__transfer_start_q) {
        vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r = 6U;
    }
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_12 
        = (1U & ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_1) 
                 ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                    >> 0xdU)));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_23 
        = ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_22) 
           ^ ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_21) 
              ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19)));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_17 
        = (1U & VL_REDXOR_8((0x60U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_18 
        = (1U & VL_REDXOR_8((0x18U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_2 
        = (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w) 
                 ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w) 
                    >> 1U)));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_rd_req_w 
        = ((IData)(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.ren) 
           & (0x20U == (0xffU & vlSelfRef.haddr_i)));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_13 
        = (1U & ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_12) 
                 ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                    >> 0xcU)));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_24 
        = (1U & ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_2) 
                 ^ (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w) 
                     >> 2U) ^ ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_18) 
                               ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_17)))));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w 
        = (((0x10U & ((~ ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_12) 
                          ^ VL_REDXOR_16((0x680U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q))))) 
                      << 4U)) | ((8U & (((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_13) 
                                         ^ VL_REDXOR_16(
                                                        (0x340U 
                                                         & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q)))) 
                                        << 3U)) | (4U 
                                                   & ((~ 
                                                       ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_13) 
                                                        ^ 
                                                        VL_REDXOR_16(
                                                                     (0x9a0U 
                                                                      & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q))))) 
                                                      << 2U)))) 
           | ((2U & ((~ VL_REDXOR_16((0x9a40U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q)))) 
                     << 1U)) | (1U & (~ ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc5__DOT____VdfgRegularize_hc01f1cff_0_1) 
                                         ^ VL_REDXOR_16(
                                                        (0xd20U 
                                                         & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q))))))));
    usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_9 
        = ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_24) 
           ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w) 
              >> 7U));
    vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_out_w 
        = (((((((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_9) 
                ^ ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20) 
                   ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_23))) 
               << 0xfU) | (0x4000U & (((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_24) 
                                       << 0xeU) ^ (
                                                   (0xffffc000U 
                                                    & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                                                       << 8U)) 
                                                   ^ 
                                                   ((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_23) 
                                                    << 0xeU))))) 
             | ((0x2000U & ((VL_REDXOR_8((0xc0U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))) 
                             ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20)) 
                            << 0xdU)) | (0x1000U & 
                                         (((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_17) 
                                           ^ VL_REDXOR_8(
                                                         (0x60U 
                                                          & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q)))) 
                                          << 0xcU)))) 
            | (((0x800U & ((VL_REDXOR_8((0x30U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))) 
                            ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_22)) 
                           << 0xbU)) | (0x400U & (((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_18) 
                                                   ^ 
                                                   VL_REDXOR_8(
                                                               (0x18U 
                                                                & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q)))) 
                                                  << 0xaU))) 
               | ((0x200U & ((VL_REDXOR_4((0xcU & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))) 
                              ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_21)) 
                             << 9U)) | (0x100U & ((
                                                   VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w))) 
                                                   ^ 
                                                   VL_REDXOR_4(
                                                               (6U 
                                                                & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q)))) 
                                                  << 8U))))) 
           | ((((((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_2) 
                  ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                     >> 0xfU)) ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19)) 
                << 7U) | (0x40U & (((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w) 
                                    << 6U) ^ ((0xffffc0U 
                                               & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                                                  >> 8U)) 
                                              ^ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                                                 << 6U))))) 
              | ((0x3eU & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                           >> 8U)) | (1U & ((((IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_9) 
                                              ^ VL_REDXOR_16(
                                                             (0x13cU 
                                                              & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q)))) 
                                             ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_20)) 
                                            ^ (IData)(usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__u_crc16__DOT____VdfgRegularize_hde0c190e_0_19))))));
}
