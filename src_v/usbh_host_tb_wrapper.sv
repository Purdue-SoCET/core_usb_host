module usbh_host_tb_wrapper(
    // System Bus
    input logic clk,
    input logic n_rst,
    bus_protocol_if.peripheral_vital busif,

    // USB ports
    input logic usb_dp_i,
    input logic usb_dn_i,
    output logic usb_dp_o,
    output logic usb_dn_o,
    output logic usb_tx_oen
    );

    // UTMI interface for controller <-> PHY
    logic [7:0] utmi_data_in_i;
    logic utmi_txready_i;
    logic utmi_rxvalid_i;
    logic utmi_rxactive_i;
    logic utmi_rxerror_i;
    logic [1:0] utmi_linestate_i;
    logic intr_o;
    logic [7:0] utmi_data_out_o;
    logic utmi_txvalid_o;
    logic [1:0] utmi_op_mode_o;
    logic [1:0] utmi_xcvrselect_o;
    logic utmi_termselect_o;
    logic utmi_dppulldown_o;
    logic utmi_dmpulldown_o;


    usbh_host #(
        .USB_CLK_FREQ(48000000)
    ) dut (
        .busif(busif),
        .clk_i(clk),
        .n_rst_i(n_rst),
        .utmi_data_in_i(utmi_data_in_i),
        .utmi_txready_i(utmi_txready_i),
        .utmi_rxvalid_i(utmi_rxvalid_i),
        .utmi_rxactive_i(utmi_rxactive_i),
        .utmi_rxerror_i(utmi_rxerror_i),
        .utmi_linestate_i(utmi_linestate_i),
        .intr_o(intr_o),
        .utmi_data_out_o(utmi_data_out_o),
        .utmi_txvalid_o(utmi_txvalid_o),
        .utmi_op_mode_o(utmi_op_mode_o),
        .utmi_xcvrselect_o(utmi_xcvrselect_o),
        .utmi_termselect_o(utmi_termselect_o),
        .utmi_dppulldown_o(utmi_dppulldown_o),
        .utmi_dmpulldown_o(utmi_dmpulldown_o)
    );

endmodule