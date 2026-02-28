// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vusbh_host_tb_wrapper__Syms.h"


VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__ahb__0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__busif__0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"hsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"haddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"hwrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"htrans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"hsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+125,0,"hwdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"hrdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"hready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"utmi_data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+129,0,"utmi_txready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"utmi_rxvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"utmi_rxactive_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"utmi_rxerror_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"utmi_linestate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"utmi_data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"utmi_txvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"utmi_op_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"utmi_xcvrselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"utmi_termselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"utmi_dppulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"utmi_dmpulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("usbh_host_tb_wrapper", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"hsel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"haddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+122,0,"hwrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"htrans_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"hsize_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+125,0,"hwdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"hrdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"hready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"utmi_data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+129,0,"utmi_txready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"utmi_rxvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"utmi_rxactive_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"utmi_rxerror_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"utmi_linestate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"utmi_data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"utmi_txvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"utmi_op_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"utmi_xcvrselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"utmi_termselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"utmi_dppulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"utmi_dmpulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ahb", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__ahb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("busif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__busif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+2,0,"ahb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"USB_CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("busif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__busif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"utmi_data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+129,0,"utmi_txready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"utmi_rxvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"utmi_rxactive_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"utmi_rxerror_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"utmi_linestate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"utmi_data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"utmi_txvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"utmi_op_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"utmi_xcvrselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"utmi_termselect_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"utmi_dppulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"utmi_dmpulldown_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"wr_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"wr_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"read_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"write_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"usb_ctrl_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"usb_ctrl_tx_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"usb_ctrl_tx_flush_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"usb_ctrl_phy_dmpulldown_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"usb_ctrl_phy_dmpulldown_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"usb_ctrl_phy_dppulldown_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"usb_ctrl_phy_dppulldown_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"usb_ctrl_phy_termselect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"usb_ctrl_phy_termselect_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"usb_ctrl_phy_xcvrselect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"usb_ctrl_phy_xcvrselect_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"usb_ctrl_phy_opmode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"usb_ctrl_phy_opmode_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"usb_ctrl_enable_sof_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"usb_ctrl_enable_sof_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"usb_status_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"usb_irq_ack_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"usb_irq_ack_device_detect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"usb_irq_ack_device_detect_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"usb_irq_ack_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"usb_irq_ack_err_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"usb_irq_ack_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"usb_irq_ack_done_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"usb_irq_ack_sof_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"usb_irq_ack_sof_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"usb_irq_sts_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"usb_irq_mask_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"usb_irq_mask_device_detect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"usb_irq_mask_device_detect_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"usb_irq_mask_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"usb_irq_mask_err_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"usb_irq_mask_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"usb_irq_mask_done_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"usb_irq_mask_sof_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"usb_irq_mask_sof_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"usb_xfer_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"usb_xfer_data_tx_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"usb_xfer_data_tx_len_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+30,0,"usb_xfer_token_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"usb_xfer_token_start_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"usb_xfer_token_start_ack_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"usb_xfer_token_start_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"usb_xfer_token_in_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"usb_xfer_token_in_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"usb_xfer_token_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"usb_xfer_token_ack_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"usb_xfer_token_pid_datax_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"usb_xfer_token_pid_datax_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"usb_xfer_token_pid_bits_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"usb_xfer_token_pid_bits_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"usb_xfer_token_dev_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"usb_xfer_token_dev_addr_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"usb_xfer_token_ep_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"usb_xfer_token_ep_addr_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"usb_rx_stat_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"usb_wr_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"usb_wr_data_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+42,0,"usb_rd_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"usb_status_sof_time_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+44,0,"usb_status_rx_error_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"usb_status_linestate_bits_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+150,0,"usb_irq_sts_device_detect_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"usb_irq_sts_err_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"usb_irq_sts_done_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"usb_irq_sts_sof_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"usb_rx_stat_start_pend_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"usb_rx_stat_crc_err_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"usb_rx_stat_resp_timeout_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"usb_rx_stat_idle_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"usb_rx_stat_resp_bits_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"usb_rx_stat_count_bits_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+53,0,"usb_rd_data_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rd_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"usb_rd_data_rd_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"usb_wr_data_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"usb_rd_data_wr_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"sof_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+43,0,"sof_time_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+56,0,"sof_irq_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"transfer_req_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"fifo_tx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+144,0,"fifo_tx_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"fifo_rx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"fifo_rx_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"fifo_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"token_pid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"token_dev_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"token_ep_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"transfer_start_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"in_transfer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"sof_transfer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"resp_expected_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"transfer_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"status_crc_err_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"status_timeout_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"status_response_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"status_rx_count_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+50,0,"status_sie_idle_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"status_tx_done_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"status_rx_done_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"send_sof_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"sof_gaurd_band_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"clear_to_send_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"usb_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"intr_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"intr_sof_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"intr_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"SOF_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"SOF_INC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"SOF_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"EOF1_THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"MAX_XFER_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"MAX_XFER_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"SOF_GAURD_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"SOF_GAURD_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"PID_SOF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"err_cond_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"device_det_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_fifo_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+80,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+81,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+85,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+86,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sie", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"USB_CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"n_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"in_transfer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"sof_transfer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"resp_expected_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"token_pid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"token_dev_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+63,0,"token_ep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"data_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+35,0,"data_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"tx_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+129,0,"utmi_txready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"utmi_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+130,0,"utmi_rxvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"utmi_rxactive_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"utmi_linestate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"tx_pop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"rx_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"rx_push_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"tx_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rx_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"crc_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"timeout_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"response_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"rx_count_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+50,0,"idle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"utmi_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"utmi_txvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"start_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"status_tx_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"status_rx_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"status_crc_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"status_timeout_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"status_response_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"byte_count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+87,0,"in_transfer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"last_tx_time_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+89,0,"send_data1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"send_sof_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"send_ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"crc_sum_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+93,0,"crc_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"crc_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+95,0,"crc5_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"crc5_next_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"token_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+98,0,"wait_resp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"RX_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+165,0,"TX_IFS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"PID_OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"PID_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"PID_SOF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+168,0,"PID_SETUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+169,0,"PID_DATA0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"PID_DATA1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+171,0,"PID_ACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"PID_NAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"PID_STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"STATE_RX_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"STATE_TX_PID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"STATE_TX_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"STATE_TX_CRC1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"STATE_TX_CRC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+180,0,"STATE_TX_TOKEN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"STATE_TX_TOKEN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"STATE_TX_TOKEN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"STATE_TX_ACKNAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"STATE_TX_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"STATE_RX_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"STATE_TX_IFS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"rx_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+100,0,"data_ready_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"crc_byte_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"rx_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"rx_active_rise_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ifs_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rx_resp_timeout_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"crc_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"utmi_linestate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+107,0,"se0_detect_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"wait_eop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"se0_detect_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"eop_detected_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"TX_IFS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"tx_ifs_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+110,0,"data_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"data_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"rx_active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"shift_en_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"data_crc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+114,0,"token_rev_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+115,0,"utmi_txvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"utmi_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("u_crc16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"crc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+94,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+93,0,"crc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_crc5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"crc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+117,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+95,0,"crc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__ahb__0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__ahb__0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+187,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+187,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+118,0,"HCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"HRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"HSEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"HREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"HREADYOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"HWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"HMASTLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"HRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"HTRANS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"HBURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"HSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"HADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"HWDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"HRDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"HWSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__busif__0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__usbh_host_tb_wrapper__DOT__busif__0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+193,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"request_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"is_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"burst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+197,0,"burst_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+198,0,"secure_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_init_top(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_init_top\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vusbh_host_tb_wrapper___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vusbh_host_tb_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vusbh_host_tb_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_register(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_register\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vusbh_host_tb_wrapper___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vusbh_host_tb_wrapper___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vusbh_host_tb_wrapper___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vusbh_host_tb_wrapper___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_const_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_const_0\n"); );
    // Init
    Vusbh_host_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vusbh_host_tb_wrapper___024root*>(voidSelf);
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vusbh_host_tb_wrapper___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_const_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_const_0_sub_0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+149,(0x2dc6c00U),32);
    bufp->fullBit(oldp+150,(0U));
    bufp->fullIData(oldp+151,(0U),32);
    bufp->fullIData(oldp+152,(1U),32);
    bufp->fullIData(oldp+153,(0xbb7fU),32);
    bufp->fullIData(oldp+154,(4U),32);
    bufp->fullIData(oldp+155,(0xc8U),32);
    bufp->fullIData(oldp+156,(0x40U),32);
    bufp->fullIData(oldp+157,(0xaf0U),32);
    bufp->fullIData(oldp+158,(0x50U),32);
    bufp->fullIData(oldp+159,(0xafc7U),32);
    bufp->fullCData(oldp+160,(0xa5U),8);
    bufp->fullIData(oldp+161,(8U),32);
    bufp->fullIData(oldp+162,(6U),32);
    bufp->fullIData(oldp+163,(7U),32);
    bufp->fullSData(oldp+164,(0xffU),9);
    bufp->fullCData(oldp+165,(7U),4);
    bufp->fullCData(oldp+166,(0xe1U),8);
    bufp->fullCData(oldp+167,(0x69U),8);
    bufp->fullCData(oldp+168,(0x2dU),8);
    bufp->fullCData(oldp+169,(0xc3U),8);
    bufp->fullCData(oldp+170,(0x4bU),8);
    bufp->fullCData(oldp+171,(0xd2U),8);
    bufp->fullCData(oldp+172,(0x5aU),8);
    bufp->fullCData(oldp+173,(0x1eU),8);
    bufp->fullCData(oldp+174,(0U),4);
    bufp->fullCData(oldp+175,(1U),4);
    bufp->fullCData(oldp+176,(2U),4);
    bufp->fullCData(oldp+177,(3U),4);
    bufp->fullCData(oldp+178,(4U),4);
    bufp->fullCData(oldp+179,(5U),4);
    bufp->fullCData(oldp+180,(6U),4);
    bufp->fullCData(oldp+181,(8U),4);
    bufp->fullCData(oldp+182,(9U),4);
    bufp->fullCData(oldp+183,(0xaU),4);
    bufp->fullCData(oldp+184,(0xbU),4);
    bufp->fullCData(oldp+185,(0xcU),4);
    bufp->fullCData(oldp+186,(0x1fU),5);
    bufp->fullIData(oldp+187,(0x20U),32);
    bufp->fullBit(oldp+188,(1U));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__ahb.__PVT__HMASTLOCK));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__ahb.__PVT__HRESP));
    bufp->fullCData(oldp+191,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__ahb.__PVT__HBURST),3);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__ahb.__PVT__HWSTRB),4);
    bufp->fullIData(oldp+193,(0x20U),32);
    bufp->fullCData(oldp+194,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.__PVT__strobe),4);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.__PVT__is_burst));
    bufp->fullCData(oldp+196,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.__PVT__burst_type),2);
    bufp->fullCData(oldp+197,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.__PVT__burst_length),8);
    bufp->fullBit(oldp+198,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.__PVT__secure_transfer));
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_full_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_full_0\n"); );
    // Init
    Vusbh_host_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vusbh_host_tb_wrapper___024root*>(voidSelf);
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vusbh_host_tb_wrapper___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vusbh_host_tb_wrapper___024root__trace_full_0_sub_0(Vusbh_host_tb_wrapper___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusbh_host_tb_wrapper___024root__trace_full_0_sub_0\n"); );
    Vusbh_host_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.error));
    bufp->fullBit(oldp+2,(vlSelfRef.usbh_host_tb_wrapper__DOT__ahb_valid));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.ren));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__usbh_host_tb_wrapper__DOT__busif.wen));
    bufp->fullBit(oldp+5,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_rd_req_w));
    bufp->fullBit(oldp+6,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__shift_en_w));
    bufp->fullIData(oldp+7,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q),32);
    bufp->fullBit(oldp+8,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_wr_q));
    bufp->fullBit(oldp+9,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_tx_flush_q));
    bufp->fullBit(oldp+10,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q));
    bufp->fullBit(oldp+11,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q));
    bufp->fullBit(oldp+12,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q));
    bufp->fullCData(oldp+13,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q),2);
    bufp->fullCData(oldp+14,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q),2);
    bufp->fullBit(oldp+15,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q));
    bufp->fullBit(oldp+16,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_status_wr_q));
    bufp->fullBit(oldp+17,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_wr_q));
    bufp->fullBit(oldp+18,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_device_detect_q));
    bufp->fullBit(oldp+19,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_err_q));
    bufp->fullBit(oldp+20,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_done_q));
    bufp->fullBit(oldp+21,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_sof_q));
    bufp->fullBit(oldp+22,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_sts_wr_q));
    bufp->fullBit(oldp+23,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_wr_q));
    bufp->fullBit(oldp+24,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_device_detect_q));
    bufp->fullBit(oldp+25,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_err_q));
    bufp->fullBit(oldp+26,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_done_q));
    bufp->fullBit(oldp+27,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_sof_q));
    bufp->fullBit(oldp+28,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_wr_q));
    bufp->fullSData(oldp+29,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_tx_len_q),16);
    bufp->fullBit(oldp+30,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_wr_q));
    bufp->fullBit(oldp+31,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_start_q));
    bufp->fullBit(oldp+32,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__transfer_req_ack_q));
    bufp->fullBit(oldp+33,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_in_q));
    bufp->fullBit(oldp+34,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ack_q));
    bufp->fullBit(oldp+35,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_datax_q));
    bufp->fullCData(oldp+36,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q),8);
    bufp->fullCData(oldp+37,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q),7);
    bufp->fullCData(oldp+38,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q),4);
    bufp->fullBit(oldp+39,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rx_stat_wr_q));
    bufp->fullBit(oldp+40,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_wr_data_wr_q));
    bufp->fullCData(oldp+41,((0xffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q)),8);
    bufp->fullBit(oldp+42,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_wr_q));
    bufp->fullSData(oldp+43,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q),16);
    bufp->fullBit(oldp+44,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_err_q));
    bufp->fullBit(oldp+45,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_err_q));
    bufp->fullBit(oldp+46,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_done_q));
    bufp->fullBit(oldp+47,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_sof_q));
    bufp->fullBit(oldp+48,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_crc_err_q));
    bufp->fullBit(oldp+49,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_timeout_q));
    bufp->fullBit(oldp+50,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))));
    bufp->fullCData(oldp+51,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q),8);
    bufp->fullSData(oldp+52,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q),16);
    bufp->fullCData(oldp+53,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__ram
                             [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr]),8);
    bufp->fullIData(oldp+54,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__rd_data_q),32);
    bufp->fullSData(oldp+55,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q),11);
    bufp->fullBit(oldp+56,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_irq_q));
    bufp->fullCData(oldp+57,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram
                             [vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr]),8);
    bufp->fullCData(oldp+58,((0xffU & vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q)),8);
    bufp->fullBit(oldp+59,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_rx_push_w));
    bufp->fullBit(oldp+60,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_flush_q));
    bufp->fullCData(oldp+61,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                               ? 0xa5U : (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q))),8);
    bufp->fullCData(oldp+62,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
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
                                        | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
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
                                        | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q) 
                                                 >> 6U))))))),7);
    bufp->fullCData(oldp+63,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q)
                               ? (((8U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                          >> 4U)) | 
                                   (4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                          >> 6U))) 
                                  | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                            >> 8U)) 
                                     | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q) 
                                              >> 0xaU))))
                               : (((8U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                          << 3U)) | 
                                   (4U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                          << 1U))) 
                                  | ((2U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                            >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q) 
                                              >> 3U)))))),4);
    bufp->fullBit(oldp+64,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__transfer_start_q));
    bufp->fullBit(oldp+65,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__in_transfer_q));
    bufp->fullBit(oldp+66,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q));
    bufp->fullBit(oldp+67,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__resp_expected_q));
    bufp->fullBit(oldp+68,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__start_ack_q));
    bufp->fullBit(oldp+69,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_tx_done_q));
    bufp->fullBit(oldp+70,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_rx_done_q));
    bufp->fullBit(oldp+71,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__send_sof_w));
    bufp->fullBit(oldp+72,(((0x50U >= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)) 
                            | (0xafc7U <= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)))));
    bufp->fullBit(oldp+73,(((~ (((0x50U >= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q)) 
                                 | (0xafc7U <= (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q))) 
                                & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q))) 
                            & (0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q)))));
    bufp->fullBit(oldp+74,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__err_cond_q));
    bufp->fullBit(oldp+75,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__intr_q));
    bufp->fullBit(oldp+76,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__device_det_q));
    bufp->fullBit(oldp+77,((0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count))));
    bufp->fullBit(oldp+78,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count))));
    bufp->fullCData(oldp+79,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr),6);
    bufp->fullCData(oldp+80,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__wr_ptr),6);
    bufp->fullCData(oldp+81,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count),7);
    bufp->fullBit(oldp+82,((0x40U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count))));
    bufp->fullBit(oldp+83,((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count))));
    bufp->fullCData(oldp+84,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr),6);
    bufp->fullCData(oldp+85,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__wr_ptr),6);
    bufp->fullCData(oldp+86,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count),7);
    bufp->fullBit(oldp+87,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q));
    bufp->fullSData(oldp+88,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__last_tx_time_q),9);
    bufp->fullBit(oldp+89,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_data1_q));
    bufp->fullBit(oldp+90,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q));
    bufp->fullBit(oldp+91,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q));
    bufp->fullSData(oldp+92,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q),16);
    bufp->fullSData(oldp+93,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_out_w),16);
    bufp->fullCData(oldp+94,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w),8);
    bufp->fullCData(oldp+95,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w),5);
    bufp->fullCData(oldp+96,((0x1fU & (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w)))),5);
    bufp->fullSData(oldp+97,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q),16);
    bufp->fullBit(oldp+98,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q));
    bufp->fullCData(oldp+99,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q),4);
    bufp->fullBit(oldp+100,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q))));
    bufp->fullBit(oldp+101,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q))));
    bufp->fullBit(oldp+102,((1U & (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q))));
    bufp->fullBit(oldp+103,(((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q) 
                             | (0U != (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q)))));
    bufp->fullBit(oldp+104,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w));
    bufp->fullBit(oldp+105,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w));
    bufp->fullCData(oldp+106,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q),2);
    bufp->fullBit(oldp+107,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__se0_detect_q));
    bufp->fullBit(oldp+108,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q));
    bufp->fullCData(oldp+109,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q),4);
    bufp->fullIData(oldp+110,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q),32);
    bufp->fullCData(oldp+111,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q),4);
    bufp->fullCData(oldp+112,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q),4);
    bufp->fullCData(oldp+113,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q),2);
    bufp->fullSData(oldp+114,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w),16);
    bufp->fullBit(oldp+115,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r));
    bufp->fullCData(oldp+116,((0xffU & ((4U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                         ? (~ (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q))
                                         : ((5U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q))
                                             ? (~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q) 
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
                                                      : 0U)))))))))),8);
    bufp->fullSData(oldp+117,((0x7ffU & ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q) 
                                         >> 5U))),11);
    bufp->fullBit(oldp+118,(vlSelfRef.clk_i));
    bufp->fullBit(oldp+119,(vlSelfRef.n_rst_i));
    bufp->fullBit(oldp+120,(vlSelfRef.hsel_i));
    bufp->fullIData(oldp+121,(vlSelfRef.haddr_i),32);
    bufp->fullBit(oldp+122,(vlSelfRef.hwrite_i));
    bufp->fullCData(oldp+123,(vlSelfRef.htrans_i),2);
    bufp->fullCData(oldp+124,(vlSelfRef.hsize_i),3);
    bufp->fullIData(oldp+125,(vlSelfRef.hwdata_i),32);
    bufp->fullIData(oldp+126,(vlSelfRef.hrdata_o),32);
    bufp->fullBit(oldp+127,(vlSelfRef.hready_o));
    bufp->fullCData(oldp+128,(vlSelfRef.utmi_data_in_i),8);
    bufp->fullBit(oldp+129,(vlSelfRef.utmi_txready_i));
    bufp->fullBit(oldp+130,(vlSelfRef.utmi_rxvalid_i));
    bufp->fullBit(oldp+131,(vlSelfRef.utmi_rxactive_i));
    bufp->fullBit(oldp+132,(vlSelfRef.utmi_rxerror_i));
    bufp->fullCData(oldp+133,(vlSelfRef.utmi_linestate_i),2);
    bufp->fullBit(oldp+134,(vlSelfRef.intr_o));
    bufp->fullCData(oldp+135,(vlSelfRef.utmi_data_out_o),8);
    bufp->fullBit(oldp+136,(vlSelfRef.utmi_txvalid_o));
    bufp->fullCData(oldp+137,(vlSelfRef.utmi_op_mode_o),2);
    bufp->fullCData(oldp+138,(vlSelfRef.utmi_xcvrselect_o),2);
    bufp->fullBit(oldp+139,(vlSelfRef.utmi_termselect_o));
    bufp->fullBit(oldp+140,(vlSelfRef.utmi_dppulldown_o));
    bufp->fullBit(oldp+141,(vlSelfRef.utmi_dmpulldown_o));
    bufp->fullCData(oldp+142,((0xffU & vlSelfRef.haddr_i)),8);
    bufp->fullIData(oldp+143,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__data_r),32);
    bufp->fullBit(oldp+144,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__fifo_tx_pop_w));
    bufp->fullBit(oldp+145,(((~ ((IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q) 
                                 >> 3U)) & (IData)(vlSelfRef.utmi_rxactive_i))));
    bufp->fullCData(oldp+146,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r),4);
    bufp->fullBit(oldp+147,(((0U == (IData)(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q)) 
                             & (0U == (IData)(vlSelfRef.utmi_linestate_i)))));
    bufp->fullBit(oldp+148,(vlSelfRef.usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__eop_detected_w));
}
