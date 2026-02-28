// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vusbh_host_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VUSBH_HOST_TB_WRAPPER___024ROOT_H_
#define VERILATED_VUSBH_HOST_TB_WRAPPER___024ROOT_H_  // guard

#include "verilated.h"
class Vusbh_host_tb_wrapper_ahb_if;
class Vusbh_host_tb_wrapper_bus_protocol_if;


class Vusbh_host_tb_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vusbh_host_tb_wrapper___024root final : public VerilatedModule {
  public:
    // CELLS
    Vusbh_host_tb_wrapper_ahb_if* __PVT__usbh_host_tb_wrapper__DOT__ahb;
    Vusbh_host_tb_wrapper_bus_protocol_if* __PVT__usbh_host_tb_wrapper__DOT__busif;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(n_rst_i,0,0);
        VL_IN8(hsel_i,0,0);
        VL_IN8(hwrite_i,0,0);
        VL_IN8(htrans_i,1,0);
        VL_IN8(hsize_i,2,0);
        VL_OUT8(hready_o,0,0);
        VL_IN8(utmi_data_in_i,7,0);
        VL_IN8(utmi_txready_i,0,0);
        VL_IN8(utmi_rxvalid_i,0,0);
        VL_IN8(utmi_rxactive_i,0,0);
        VL_IN8(utmi_rxerror_i,0,0);
        VL_IN8(utmi_linestate_i,1,0);
        VL_OUT8(intr_o,0,0);
        VL_OUT8(utmi_data_out_o,7,0);
        VL_OUT8(utmi_txvalid_o,0,0);
        VL_OUT8(utmi_op_mode_o,1,0);
        VL_OUT8(utmi_xcvrselect_o,1,0);
        VL_OUT8(utmi_termselect_o,0,0);
        VL_OUT8(utmi_dppulldown_o,0,0);
        VL_OUT8(utmi_dmpulldown_o,0,0);
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__ahb_valid;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_tx_flush_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dmpulldown_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_dppulldown_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_termselect_q;
        CData/*1:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_xcvrselect_q;
        CData/*1:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_phy_opmode_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_ctrl_enable_sof_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_status_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_device_detect_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_err_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_done_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_ack_sof_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_sts_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_device_detect_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_err_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_done_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_irq_mask_sof_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_start_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_in_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ack_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_datax_q;
        CData/*7:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_pid_bits_q;
        CData/*6:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_dev_addr_q;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_token_ep_addr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_rx_stat_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_wr_data_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_wr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_rd_data_rd_req_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__sof_irq_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__transfer_req_ack_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__fifo_tx_pop_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__fifo_rx_push_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__fifo_flush_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__transfer_start_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__in_transfer_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__sof_transfer_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__resp_expected_q;
    };
    struct {
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__send_sof_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_err_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__intr_done_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__intr_sof_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__intr_err_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__err_cond_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__intr_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__device_det_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__start_ack_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_tx_done_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_rx_done_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_crc_err_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_timeout_q;
        CData/*7:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__status_response_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__in_transfer_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_data1_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_sof_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__send_ack_q;
        CData/*7:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_data_in_w;
        CData/*4:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc5_out_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_resp_q;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__state_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_resp_timeout_w;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_error_w;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__next_state_r;
        CData/*1:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_linestate_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__se0_detect_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__wait_eop_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__eop_detected_w;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__tx_ifs_q;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_valid_q;
        CData/*3:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__rx_active_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__shift_en_w;
        CData/*1:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_crc_q;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__utmi_txvalid_r;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__full_o;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__empty_o;
        CData/*5:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__rd_ptr;
        CData/*5:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__wr_ptr;
        CData/*6:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__count;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__full_o;
        CData/*0:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__empty_o;
        CData/*5:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__rd_ptr;
        CData/*5:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__wr_ptr;
        CData/*6:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__count;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__n_rst_i__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__usb_xfer_data_tx_len_q;
        SData/*10:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__sof_value_q;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__sof_time_q;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__byte_count_q;
        SData/*8:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__last_tx_time_q;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_sum_q;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__crc_out_w;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_q;
        SData/*15:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__token_rev_w;
        VL_IN(haddr_i,31,0);
        VL_IN(hwdata_i,31,0);
        VL_OUT(hrdata_o,31,0);
        IData/*31:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__wr_data_q;
        IData/*31:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__data_r;
    };
    struct {
        IData/*31:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__rd_data_q;
        IData/*31:0*/ usbh_host_tb_wrapper__DOT__dut__DOT__u_sie__DOT__data_buffer_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 64> usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_tx__DOT__ram;
        VlUnpacked<CData/*7:0*/, 64> usbh_host_tb_wrapper__DOT__dut__DOT__u_fifo_rx__DOT__ram;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vusbh_host_tb_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vusbh_host_tb_wrapper___024root(Vusbh_host_tb_wrapper__Syms* symsp, const char* v__name);
    ~Vusbh_host_tb_wrapper___024root();
    VL_UNCOPYABLE(Vusbh_host_tb_wrapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
