// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

module myproject_galapagncg_MulnS_12(clk, ce, a, b, p);
input clk;
input ce;
input signed [32 - 1 : 0] a;
input signed [25 - 1 : 0] b;
output[56 - 1 : 0] p;
reg signed [56 - 1 : 0] p;
wire signed [56 - 1 : 0] tmp_product;

assign tmp_product = $signed(a) * $signed(b);
always @ (posedge clk) begin
    if (ce) begin
        p <= tmp_product;
    end
end
endmodule

`timescale 1 ns / 1 ps
module myproject_galapagncg(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



myproject_galapagncg_MulnS_12 myproject_galapagncg_MulnS_12_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

