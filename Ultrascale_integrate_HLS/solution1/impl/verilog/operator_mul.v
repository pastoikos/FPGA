// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module operator_mul (
        ap_clk,
        ap_rst,
        M_data_read,
        v_x_read,
        v_y_read,
        v_z_read,
        ap_return_0,
        ap_return_1,
        ap_return_2
);


input   ap_clk;
input   ap_rst;
input  [511:0] M_data_read;
input  [31:0] v_x_read;
input  [31:0] v_y_read;
input  [31:0] v_z_read;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;

wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_state8_pp0_stage0_iter7;
wire    ap_block_state9_pp0_stage0_iter8;
wire    ap_block_state10_pp0_stage0_iter9;
wire    ap_block_pp0_stage0_11001;
reg   [31:0] tmp_4_reg_390;
reg   [31:0] tmp_4_reg_390_pp0_iter1_reg;
reg   [31:0] tmp_3_reg_410;
reg   [31:0] tmp_3_reg_410_pp0_iter1_reg;
reg   [31:0] tmp_13_reg_430;
reg   [31:0] tmp_13_reg_430_pp0_iter1_reg;
wire   [31:0] grp_fu_120_p2;
reg   [31:0] tmp_i_reg_435;
wire   [31:0] grp_fu_125_p2;
reg   [31:0] tmp_i_15_reg_440;
wire   [31:0] grp_fu_130_p2;
reg   [31:0] tmp_20_i_reg_445;
wire   [31:0] grp_fu_135_p2;
reg   [31:0] tmp_i4_reg_450;
wire   [31:0] grp_fu_140_p2;
reg   [31:0] tmp_i5_reg_455;
wire   [31:0] grp_fu_145_p2;
reg   [31:0] tmp_20_i7_reg_460;
wire   [31:0] grp_fu_150_p2;
reg   [31:0] tmp_i1_reg_465;
wire   [31:0] grp_fu_155_p2;
reg   [31:0] tmp_i1_16_reg_470;
wire   [31:0] grp_fu_160_p2;
reg   [31:0] tmp_20_i1_reg_475;
wire   [31:0] grp_fu_84_p2;
reg   [31:0] tmp_reg_495;
wire   [31:0] grp_fu_88_p2;
reg   [31:0] tmp1_reg_500;
wire   [31:0] grp_fu_92_p2;
reg   [31:0] tmp2_reg_505;
wire   [31:0] grp_fu_96_p2;
reg   [31:0] tmp3_reg_510;
wire   [31:0] grp_fu_100_p2;
reg   [31:0] tmp4_reg_515;
wire   [31:0] grp_fu_104_p2;
reg   [31:0] tmp5_reg_520;
wire    ap_block_pp0_stage0;
wire   [31:0] grp_fu_88_p1;
wire   [31:0] grp_fu_96_p1;
wire   [31:0] grp_fu_104_p1;
wire   [31:0] grp_fu_120_p0;
wire   [31:0] grp_fu_125_p0;
wire   [31:0] grp_fu_130_p0;
wire   [31:0] grp_fu_135_p0;
wire   [31:0] grp_fu_140_p0;
wire   [31:0] grp_fu_145_p0;
wire   [31:0] grp_fu_150_p0;
wire   [31:0] grp_fu_155_p0;
wire   [31:0] grp_fu_160_p0;
wire   [31:0] tmp_6_fu_165_p1;
wire   [31:0] tmp_8_fu_174_p4;
wire   [31:0] tmp_s_fu_189_p4;
wire   [31:0] tmp_9_fu_214_p4;
wire   [31:0] tmp_1_fu_229_p4;
wire   [31:0] tmp_2_fu_244_p4;
wire   [31:0] tmp_10_fu_269_p4;
wire   [31:0] tmp_11_fu_284_p4;
wire   [31:0] tmp_12_fu_299_p4;
wire   [31:0] grp_fu_108_p2;
wire   [31:0] grp_fu_112_p2;
wire   [31:0] grp_fu_116_p2;
reg   [511:0] M_data_read_int_reg;
reg   [31:0] v_x_read_int_reg;
reg   [31:0] v_y_read_int_reg;
reg   [31:0] v_z_read_int_reg;

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_i_reg_435),
    .din1(tmp_i_15_reg_440),
    .ce(1'b1),
    .dout(grp_fu_84_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_20_i_reg_445),
    .din1(grp_fu_88_p1),
    .ce(1'b1),
    .dout(grp_fu_88_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_i4_reg_450),
    .din1(tmp_i5_reg_455),
    .ce(1'b1),
    .dout(grp_fu_92_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_20_i7_reg_460),
    .din1(grp_fu_96_p1),
    .ce(1'b1),
    .dout(grp_fu_96_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_i1_reg_465),
    .din1(tmp_i1_16_reg_470),
    .ce(1'b1),
    .dout(grp_fu_100_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_20_i1_reg_475),
    .din1(grp_fu_104_p1),
    .ce(1'b1),
    .dout(grp_fu_104_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp1_reg_500),
    .din1(tmp_reg_495),
    .ce(1'b1),
    .dout(grp_fu_108_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp3_reg_510),
    .din1(tmp2_reg_505),
    .ce(1'b1),
    .dout(grp_fu_112_p2)
);

integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp5_reg_520),
    .din1(tmp4_reg_515),
    .ce(1'b1),
    .dout(grp_fu_116_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_120_p0),
    .din1(v_x_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_120_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_125_p0),
    .din1(v_y_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_125_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_130_p0),
    .din1(v_z_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_130_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_135_p0),
    .din1(v_x_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_135_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_140_p0),
    .din1(v_y_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_140_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_145_p0),
    .din1(v_z_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_145_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_150_p0),
    .din1(v_x_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_150_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_155_p0),
    .din1(v_y_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_155_p2)
);

integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_160_p0),
    .din1(v_z_read_int_reg),
    .ce(1'b1),
    .dout(grp_fu_160_p2)
);

always @ (posedge ap_clk) begin
    M_data_read_int_reg <= M_data_read;
end

always @ (posedge ap_clk) begin
    v_x_read_int_reg <= v_x_read;
end

always @ (posedge ap_clk) begin
    v_y_read_int_reg <= v_y_read;
end

always @ (posedge ap_clk) begin
    v_z_read_int_reg <= v_z_read;
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        tmp1_reg_500 <= grp_fu_88_p2;
        tmp2_reg_505 <= grp_fu_92_p2;
        tmp3_reg_510 <= grp_fu_96_p2;
        tmp4_reg_515 <= grp_fu_100_p2;
        tmp5_reg_520 <= grp_fu_104_p2;
        tmp_13_reg_430 <= {{M_data_read_int_reg[479:448]}};
        tmp_13_reg_430_pp0_iter1_reg <= tmp_13_reg_430;
        tmp_20_i1_reg_475 <= grp_fu_160_p2;
        tmp_20_i7_reg_460 <= grp_fu_145_p2;
        tmp_20_i_reg_445 <= grp_fu_130_p2;
        tmp_3_reg_410 <= {{M_data_read_int_reg[447:416]}};
        tmp_3_reg_410_pp0_iter1_reg <= tmp_3_reg_410;
        tmp_4_reg_390 <= {{M_data_read_int_reg[415:384]}};
        tmp_4_reg_390_pp0_iter1_reg <= tmp_4_reg_390;
        tmp_i1_16_reg_470 <= grp_fu_155_p2;
        tmp_i1_reg_465 <= grp_fu_150_p2;
        tmp_i4_reg_450 <= grp_fu_135_p2;
        tmp_i5_reg_455 <= grp_fu_140_p2;
        tmp_i_15_reg_440 <= grp_fu_125_p2;
        tmp_i_reg_435 <= grp_fu_120_p2;
        tmp_reg_495 <= grp_fu_84_p2;
    end
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_return_0 = grp_fu_108_p2;

assign ap_return_1 = grp_fu_112_p2;

assign ap_return_2 = grp_fu_116_p2;

assign grp_fu_104_p1 = tmp_13_reg_430_pp0_iter1_reg;

assign grp_fu_120_p0 = tmp_6_fu_165_p1;

assign grp_fu_125_p0 = tmp_8_fu_174_p4;

assign grp_fu_130_p0 = tmp_s_fu_189_p4;

assign grp_fu_135_p0 = tmp_9_fu_214_p4;

assign grp_fu_140_p0 = tmp_1_fu_229_p4;

assign grp_fu_145_p0 = tmp_2_fu_244_p4;

assign grp_fu_150_p0 = tmp_10_fu_269_p4;

assign grp_fu_155_p0 = tmp_11_fu_284_p4;

assign grp_fu_160_p0 = tmp_12_fu_299_p4;

assign grp_fu_88_p1 = tmp_4_reg_390_pp0_iter1_reg;

assign grp_fu_96_p1 = tmp_3_reg_410_pp0_iter1_reg;

assign tmp_10_fu_269_p4 = {{M_data_read_int_reg[95:64]}};

assign tmp_11_fu_284_p4 = {{M_data_read_int_reg[223:192]}};

assign tmp_12_fu_299_p4 = {{M_data_read_int_reg[351:320]}};

assign tmp_1_fu_229_p4 = {{M_data_read_int_reg[191:160]}};

assign tmp_2_fu_244_p4 = {{M_data_read_int_reg[319:288]}};

assign tmp_6_fu_165_p1 = M_data_read_int_reg[31:0];

assign tmp_8_fu_174_p4 = {{M_data_read_int_reg[159:128]}};

assign tmp_9_fu_214_p4 = {{M_data_read_int_reg[63:32]}};

assign tmp_s_fu_189_p4 = {{M_data_read_int_reg[287:256]}};

endmodule //operator_mul
