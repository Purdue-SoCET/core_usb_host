module tb_usb_host();

    localparam CLK_PERIOD = (1/48000000s);
    string TEST_NAME;

    logic clk, n_rst;

    always begin
        clk = 0;
        #(CLK_PERIOD / 2);
        clk = 1;
        #(CLK_PERIOD / 2);
    end

    // bus
    bus_protocol_if.peripheral_vital busif;

    // inputs
    logic dp_i, dn_i;

    // outputs
    logic dp_o, dn_o, tx_oen;

    usbh_host dut(.clk(clk), .n_rst(n_rst),
                .busif(busif), .usb_dp_i(dp_i),
                .usb_dn_i(dn_i), .usb_dp_o(dp_o),
                .usb_dn_o(dn_o), .usb_tx_oen(tx_oen));


    initial begin
        oen = 1;
        n_rst = 0;
        @(negedge clk);
        @(negedge clk);
        n_rst = 1;

        // Test Idle state
        TEST_NAME = "USB IDLE";
        @(negedge clk);
        @(negedge clk);
        @(negedge clk);


        $finish;
    end

endmodule