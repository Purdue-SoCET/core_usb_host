// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vusbh_host_tb_wrapper__Syms.h"


void Vusbh_host_tb_wrapper___024root__trace_chg_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vusbh_host_tb_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_chg_0\n"); );
    // Init
    Vusbh_host_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vusbh_host_tb_wrapper___024root*>(voidSelf);
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vusbh_host_tb_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vusbh_host_tb_wrapper___024root__trace_chg_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_chg_0_sub_0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.error));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.usbh_host_tb_wrapper__DOT__ahb_valid));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.ren));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.wen));
        bufp->chgBit(oldp+4,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_rd_req_w));
        bufp->chgBit(oldp+5,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__shift_en_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q),32);
        bufp->chgBit(oldp+7,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_wr_q));
        bufp->chgBit(oldp+8,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_tx_flush_q));
        bufp->chgBit(oldp+9,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q));
        bufp->chgBit(oldp+10,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q));
        bufp->chgBit(oldp+11,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q));
        bufp->chgCData(oldp+12,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q),2);
        bufp->chgCData(oldp+13,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q),2);
        bufp->chgBit(oldp+14,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q));
        bufp->chgBit(oldp+15,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_status_wr_q));
        bufp->chgBit(oldp+16,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_wr_q));
        bufp->chgBit(oldp+17,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_device_detect_q));
        bufp->chgBit(oldp+18,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_err_q));
        bufp->chgBit(oldp+19,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_done_q));
        bufp->chgBit(oldp+20,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_sof_q));
        bufp->chgBit(oldp+21,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_sts_wr_q));
        bufp->chgBit(oldp+22,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_wr_q));
        bufp->chgBit(oldp+23,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_device_detect_q));
        bufp->chgBit(oldp+24,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_err_q));
        bufp->chgBit(oldp+25,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_done_q));
        bufp->chgBit(oldp+26,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_sof_q));
        bufp->chgBit(oldp+27,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_wr_q));
        bufp->chgSData(oldp+28,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_tx_len_q),16);
        bufp->chgBit(oldp+29,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_wr_q));
        bufp->chgBit(oldp+30,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_start_q));
        bufp->chgBit(oldp+31,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__transfer_req_ack_q));
        bufp->chgBit(oldp+32,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_in_q));
        bufp->chgBit(oldp+33,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ack_q));
        bufp->chgBit(oldp+34,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_datax_q));
        bufp->chgCData(oldp+35,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q),8);
        bufp->chgCData(oldp+36,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q),7);
        bufp->chgCData(oldp+37,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q),4);
        bufp->chgBit(oldp+38,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rx_stat_wr_q));
        bufp->chgBit(oldp+39,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_wr_data_wr_q));
        bufp->chgCData(oldp+40,((0xffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q)),8);
        bufp->chgBit(oldp+41,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_wr_q));
        bufp->chgSData(oldp+42,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q),16);
        bufp->chgBit(oldp+43,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_err_q));
        bufp->chgBit(oldp+44,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_err_q));
        bufp->chgBit(oldp+45,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_done_q));
        bufp->chgBit(oldp+46,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_sof_q));
        bufp->chgBit(oldp+47,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_crc_err_q));
        bufp->chgBit(oldp+48,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_timeout_q));
        bufp->chgBit(oldp+49,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))));
        bufp->chgCData(oldp+50,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q),8);
        bufp->chgSData(oldp+51,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q),16);
        bufp->chgCData(oldp+52,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__ram
                                [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr]),8);
        bufp->chgIData(oldp+53,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__rd_data_q),32);
        bufp->chgSData(oldp+54,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q),11);
        bufp->chgBit(oldp+55,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_irq_q));
        bufp->chgCData(oldp+56,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram
                                [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr]),8);
        bufp->chgCData(oldp+57,((0xffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q)),8);
        bufp->chgBit(oldp+58,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_rx_push_w));
        bufp->chgBit(oldp+59,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_flush_q));
        bufp->chgCData(oldp+60,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                                  ? 0xa5U : (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q))),8);
        bufp->chgCData(oldp+61,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                                  ? ((((0x40U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                                 << 6U)) 
                                       | (0x20U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                                   << 4U))) 
                                      | ((0x10U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                                   << 2U)) 
                                         | (8U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q)))) 
                                     | ((4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                               >> 2U)) 
                                        | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                                  >> 4U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                               >> 6U)))))
                                  : ((((0x40U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                                 << 6U)) 
                                       | (0x20U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                                   << 4U))) 
                                      | ((0x10U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                                   << 2U)) 
                                         | (8U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q)))) 
                                     | ((4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                               >> 2U)) 
                                        | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                                  >> 4U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                               >> 6U))))))),7);
        bufp->chgCData(oldp+62,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                                  ? (((8U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                             >> 4U)) 
                                      | (4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                               >> 6U))) 
                                     | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                               >> 8U)) 
                                        | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                                 >> 0xaU))))
                                  : (((8U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                             << 3U)) 
                                      | (4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                               << 1U))) 
                                     | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                                 >> 3U)))))),4);
        bufp->chgBit(oldp+63,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__transfer_start_q));
        bufp->chgBit(oldp+64,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__in_transfer_q));
        bufp->chgBit(oldp+65,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q));
        bufp->chgBit(oldp+66,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__resp_expected_q));
        bufp->chgBit(oldp+67,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__start_ack_q));
        bufp->chgBit(oldp+68,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_tx_done_q));
        bufp->chgBit(oldp+69,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_rx_done_q));
        bufp->chgBit(oldp+70,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__send_sof_w));
        bufp->chgBit(oldp+71,(((0x50U >= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)) 
                               | (0xafc7U <= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)))));
        bufp->chgBit(oldp+72,(((~ (((0x50U >= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)) 
                                    | (0xafc7U <= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q))) 
                                   & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q))) 
                               & (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)))));
        bufp->chgBit(oldp+73,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__err_cond_q));
        bufp->chgBit(oldp+74,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_q));
        bufp->chgBit(oldp+75,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__device_det_q));
        bufp->chgBit(oldp+76,((0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count))));
        bufp->chgBit(oldp+77,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count))));
        bufp->chgCData(oldp+78,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr),6);
        bufp->chgCData(oldp+79,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__wr_ptr),6);
        bufp->chgCData(oldp+80,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count),7);
        bufp->chgBit(oldp+81,((0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count))));
        bufp->chgBit(oldp+82,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count))));
        bufp->chgCData(oldp+83,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr),6);
        bufp->chgCData(oldp+84,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__wr_ptr),6);
        bufp->chgCData(oldp+85,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count),7);
        bufp->chgBit(oldp+86,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q));
        bufp->chgSData(oldp+87,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__last_tx_time_q),9);
        bufp->chgBit(oldp+88,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_data1_q));
        bufp->chgBit(oldp+89,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q));
        bufp->chgBit(oldp+90,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q));
        bufp->chgSData(oldp+91,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q),16);
        bufp->chgSData(oldp+92,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_out_w),16);
        bufp->chgCData(oldp+93,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w),8);
        bufp->chgCData(oldp+94,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w),5);
        bufp->chgCData(oldp+95,((0x1fU & (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w)))),5);
        bufp->chgSData(oldp+96,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q),16);
        bufp->chgBit(oldp+97,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q));
        bufp->chgCData(oldp+98,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q),4);
        bufp->chgBit(oldp+99,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q))));
        bufp->chgBit(oldp+100,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q))));
        bufp->chgBit(oldp+101,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q))));
        bufp->chgBit(oldp+102,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q) 
                                | (0U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q)))));
        bufp->chgBit(oldp+103,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w));
        bufp->chgBit(oldp+104,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w));
        bufp->chgCData(oldp+105,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q),2);
        bufp->chgBit(oldp+106,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__se0_detect_q));
        bufp->chgBit(oldp+107,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q));
        bufp->chgCData(oldp+108,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q),4);
        bufp->chgIData(oldp+109,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q),32);
        bufp->chgCData(oldp+110,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q),4);
        bufp->chgCData(oldp+111,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q),4);
        bufp->chgCData(oldp+112,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q),2);
        bufp->chgSData(oldp+113,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w),16);
        bufp->chgBit(oldp+114,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r));
        bufp->chgCData(oldp+115,((0xffU & ((4U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                            ? (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))
                                            : ((5U 
                                                == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
                                                    >> 8U))
                                                : (
                                                   (6U 
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
                                                         : 0U)))))))))),8);
        bufp->chgSData(oldp+116,((0x7ffU & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                            >> 5U))),11);
    }
    bufp->chgBit(oldp+117,(vlSelfRef.clk_i));
    bufp->chgBit(oldp+118,(vlSelfRef.n_rst_i));
    bufp->chgBit(oldp+119,(vlSelfRef.hsel_i));
    bufp->chgIData(oldp+120,(vlSelfRef.haddr_i),32);
    bufp->chgBit(oldp+121,(vlSelfRef.hwrite_i));
    bufp->chgCData(oldp+122,(vlSelfRef.htrans_i),2);
    bufp->chgCData(oldp+123,(vlSelfRef.hsize_i),3);
    bufp->chgIData(oldp+124,(vlSelfRef.hwdata_i),32);
    bufp->chgIData(oldp+125,(vlSelfRef.hrdata_o),32);
    bufp->chgBit(oldp+126,(vlSelfRef.hready_o));
    bufp->chgCData(oldp+127,(vlSelfRef.utmi_data_in_i),8);
    bufp->chgBit(oldp+128,(vlSelfRef.utmi_txready_i));
    bufp->chgBit(oldp+129,(vlSelfRef.utmi_rxvalid_i));
    bufp->chgBit(oldp+130,(vlSelfRef.utmi_rxactive_i));
    bufp->chgBit(oldp+131,(vlSelfRef.utmi_rxerror_i));
    bufp->chgCData(oldp+132,(vlSelfRef.utmi_linestate_i),2);
    bufp->chgBit(oldp+133,(vlSelfRef.intr_o));
    bufp->chgCData(oldp+134,(vlSelfRef.utmi_data_out_o),8);
    bufp->chgBit(oldp+135,(vlSelfRef.utmi_txvalid_o));
    bufp->chgCData(oldp+136,(vlSelfRef.utmi_op_mode_o),2);
    bufp->chgCData(oldp+137,(vlSelfRef.utmi_xcvrselect_o),2);
    bufp->chgBit(oldp+138,(vlSelfRef.utmi_termselect_o));
    bufp->chgBit(oldp+139,(vlSelfRef.utmi_dppulldown_o));
    bufp->chgBit(oldp+140,(vlSelfRef.utmi_dmpulldown_o));
    bufp->chgCData(oldp+141,((0xffU & vlSelfRef.haddr_i)),8);
    bufp->chgIData(oldp+142,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r),32);
    bufp->chgBit(oldp+143,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_tx_pop_w));
    bufp->chgBit(oldp+144,(((~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q) 
                                >> 3U)) & (IData)(vlSelfRef.utmi_rxactive_i))));
    bufp->chgCData(oldp+145,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r),4);
    bufp->chgBit(oldp+146,(((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q)) 
                            & (0U == (IData)(vlSelfRef.utmi_linestate_i)))));
    bufp->chgBit(oldp+147,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__eop_detected_w));
}

void Vusbh_host_tb_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vusbh_host_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vusbh_host_tb_wrapper___024root*>(voidSelf);
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
