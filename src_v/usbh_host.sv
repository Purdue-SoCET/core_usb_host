module usbh_host(
    // System Bus
    input logic clk,
    input logic n_rst,
    bus_protocol_if.peripheral_vital busif,

    // USB PHY ports
    input logic usb_rx_dp_i,
    input logic usb_rx_dn_i,
    input logic usb_rx_rcv_i,
    output logic usb_tx_dp_o,
    output logic usb_tx_dn_o,
    output logic usb_tx_oen_o,
    output logic usb_interrupt,
    output logic usb_dev_det_intr
    );

    // UTMI interface for controller <-> PHY
    logic [7:0] utmi_data_in_i;
    logic utmi_txready_i;
    logic utmi_rxvalid_i;
    logic utmi_rxactive_i;
    logic utmi_rxerror_i;
    logic [1:0] utmi_linestate_i;
    logic intr_o;
    logic intr_dev_det_o;
    logic [7:0] utmi_data_out_o;
    logic utmi_txvalid_o;
    logic [1:0] utmi_op_mode_o;
    logic [1:0] utmi_xcvrselect_o;
    logic utmi_termselect_o;
    logic utmi_dppulldown_o;
    logic utmi_dmpulldown_o;


    assign usb_interrupt = intr_o;
    assign usb_dev_det_intr = intr_dev_det_o;


    usbh_host_controller #(
        .USB_CLK_FREQ(48000000)
    ) controller (
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
        .utmi_dmpulldown_o(utmi_dmpulldown_o),
        .intr_dev_det_o(intr_dev_det_o)
    );

    usb_fs_phy phy (
        .clk_i(clk),
        .n_rst_i(n_rst),
        .utmi_data_out_i(utmi_data_out_o),
        .utmi_txvalid_i(utmi_txvalid_o),
        .utmi_op_mode_i(utmi_op_mode_o),
        .utmi_xcvrselect_i(utmi_xcvrselect_o),
        .utmi_termselect_i(utmi_termselect_o),
        .utmi_dppulldown_i(utmi_dppulldown_o),
        .utmi_dmpulldown_i(utmi_dmpulldown_o),
        .usb_rx_rcv_i(usb_rx_rcv_i), // port
        .usb_rx_dp_i(usb_rx_dp_i), // port
        .usb_rx_dn_i(usb_rx_dn_i), // port
        .usb_reset_assert_i(1'b0),
        .utmi_data_in_o(utmi_data_in_i),
        .utmi_txready_o(utmi_txready_i),
        .utmi_rxvalid_o(utmi_rxvalid_i),
        .utmi_rxactive_o(utmi_rxactive_i),
        .utmi_rxerror_o(utmi_rxerror_i),
        .utmi_linestate_o(utmi_linestate_i),
        .usb_tx_dp_o(usb_tx_dp_o), // port
        .usb_tx_dn_o(usb_tx_dn_o), // port
        .usb_tx_oen_o(usb_tx_oen_o), // port
        .usb_reset_detect_o(),
        .usb_en_o()
    );


endmodule