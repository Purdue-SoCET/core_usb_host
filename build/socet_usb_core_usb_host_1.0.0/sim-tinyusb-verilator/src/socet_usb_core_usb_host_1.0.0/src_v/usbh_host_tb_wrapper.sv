module usbh_host_tb_wrapper (
    // Standard flat ports for Verilator C++ to drive
    input  logic        clk_i,
    input  logic        n_rst_i,
    
    // AHB-Lite interface from C++
    input  logic        hsel_i,
    input  logic [31:0] haddr_i,
    input  logic        hwrite_i,
    input  logic [1:0]  htrans_i,
    input  logic [2:0]  hsize_i,
    input  logic [31:0] hwdata_i,
    output logic [31:0] hrdata_o,
    output logic        hready_o,
    
    // UTMI Interface
    input  logic [7:0]  utmi_data_in_i,
    input  logic        utmi_txready_i,
    input  logic        utmi_rxvalid_i,
    input  logic        utmi_rxactive_i,
    input  logic        utmi_rxerror_i,
    input  logic [1:0]  utmi_linestate_i,
    
    output logic        intr_o,
    output logic [7:0]  utmi_data_out_o,
    output logic        utmi_txvalid_o,
    output logic [1:0]  utmi_op_mode_o,
    output logic [1:0]  utmi_xcvrselect_o,
    output logic        utmi_termselect_o,
    output logic        utmi_dppulldown_o,
    output logic        utmi_dmpulldown_o
);

    // 1. Instantiate the AHB interface with Clock and Reset
    ahb_if ahb (
        .HCLK(clk_i),
        .HRESETn(n_rst_i)
    );

    // Map flat input ports to the AHB interface (Using UPPERCASE names)
    assign ahb.HSEL   = hsel_i;
    assign ahb.HADDR  = haddr_i;
    assign ahb.HWRITE = hwrite_i;
    assign ahb.HTRANS = htrans_i;
    assign ahb.HSIZE  = hsize_i;
    assign ahb.HWDATA = hwdata_i;

    // Map outputs from AHB interface back to flat ports
    assign hrdata_o = ahb.HRDATA;
    // NOTE: Standard AHB subordinate output is HREADYOUT. If this throws an error, change it to HREADY.
    assign hready_o = ahb.HREADYOUT; 

    // 2. Instantiate the peripheral bus interface
    bus_protocol_if busif ();

    // 3. Bridge AHB Interface -> Bus Protocol Interface
    logic ahb_valid;
    assign ahb_valid = ahb.HSEL && (ahb.HTRANS == 2'b10 || ahb.HTRANS == 2'b11);

    assign busif.addr  = ahb.HADDR;
    assign busif.wdata = ahb.HWDATA;
    assign busif.wen   = ahb_valid && ahb.HWRITE;
    assign busif.ren   = ahb_valid && !ahb.HWRITE;
    
    assign ahb.HRDATA    = busif.rdata;
    assign ahb.HREADYOUT = !busif.request_stall;

    // 4. Instantiate the DUT
    usbh_host #(
        .USB_CLK_FREQ(48000000)
    ) dut (
        .busif(busif.peripheral_vital),
        .clk_i(clk_i),
        .n_rst_i(n_rst_i),
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