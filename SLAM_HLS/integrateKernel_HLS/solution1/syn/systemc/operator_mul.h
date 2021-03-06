// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_mul_HH_
#define _operator_mul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1.h"
#include "integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1.h"

namespace ap_rtl {

struct operator_mul : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<512> > M_data_read;
    sc_in< sc_lv<32> > v_x_read;
    sc_in< sc_lv<32> > v_y_read;
    sc_in< sc_lv<32> > v_z_read;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    operator_mul(sc_module_name name);
    SC_HAS_PROCESS(operator_mul);

    ~operator_mul();

    sc_trace_file* mVcdFile;

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8;
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1<1,4,32,32,32>* integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17;
    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1<1,2,32,32,32>* integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter9;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > tmp_4_reg_390;
    sc_signal< sc_lv<32> > tmp_4_reg_390_pp0_iter1_reg;
    sc_signal< sc_lv<32> > tmp_3_reg_410;
    sc_signal< sc_lv<32> > tmp_3_reg_410_pp0_iter1_reg;
    sc_signal< sc_lv<32> > tmp_13_reg_430;
    sc_signal< sc_lv<32> > tmp_13_reg_430_pp0_iter1_reg;
    sc_signal< sc_lv<32> > grp_fu_120_p2;
    sc_signal< sc_lv<32> > tmp_i_reg_435;
    sc_signal< sc_lv<32> > grp_fu_125_p2;
    sc_signal< sc_lv<32> > tmp_i_15_reg_440;
    sc_signal< sc_lv<32> > grp_fu_130_p2;
    sc_signal< sc_lv<32> > tmp_20_i_reg_445;
    sc_signal< sc_lv<32> > grp_fu_135_p2;
    sc_signal< sc_lv<32> > tmp_i4_reg_450;
    sc_signal< sc_lv<32> > grp_fu_140_p2;
    sc_signal< sc_lv<32> > tmp_i5_reg_455;
    sc_signal< sc_lv<32> > grp_fu_145_p2;
    sc_signal< sc_lv<32> > tmp_20_i7_reg_460;
    sc_signal< sc_lv<32> > grp_fu_150_p2;
    sc_signal< sc_lv<32> > tmp_i1_reg_465;
    sc_signal< sc_lv<32> > grp_fu_155_p2;
    sc_signal< sc_lv<32> > tmp_i1_16_reg_470;
    sc_signal< sc_lv<32> > grp_fu_160_p2;
    sc_signal< sc_lv<32> > tmp_20_i1_reg_475;
    sc_signal< sc_lv<32> > grp_fu_84_p2;
    sc_signal< sc_lv<32> > tmp_reg_495;
    sc_signal< sc_lv<32> > grp_fu_88_p2;
    sc_signal< sc_lv<32> > tmp1_reg_500;
    sc_signal< sc_lv<32> > grp_fu_92_p2;
    sc_signal< sc_lv<32> > tmp2_reg_505;
    sc_signal< sc_lv<32> > grp_fu_96_p2;
    sc_signal< sc_lv<32> > tmp3_reg_510;
    sc_signal< sc_lv<32> > grp_fu_100_p2;
    sc_signal< sc_lv<32> > tmp4_reg_515;
    sc_signal< sc_lv<32> > grp_fu_104_p2;
    sc_signal< sc_lv<32> > tmp5_reg_520;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<32> > grp_fu_88_p1;
    sc_signal< sc_lv<32> > grp_fu_96_p1;
    sc_signal< sc_lv<32> > grp_fu_104_p1;
    sc_signal< sc_lv<32> > grp_fu_120_p0;
    sc_signal< sc_lv<32> > grp_fu_125_p0;
    sc_signal< sc_lv<32> > grp_fu_130_p0;
    sc_signal< sc_lv<32> > grp_fu_135_p0;
    sc_signal< sc_lv<32> > grp_fu_140_p0;
    sc_signal< sc_lv<32> > grp_fu_145_p0;
    sc_signal< sc_lv<32> > grp_fu_150_p0;
    sc_signal< sc_lv<32> > grp_fu_155_p0;
    sc_signal< sc_lv<32> > grp_fu_160_p0;
    sc_signal< sc_lv<32> > tmp_6_fu_165_p1;
    sc_signal< sc_lv<32> > tmp_8_fu_174_p4;
    sc_signal< sc_lv<32> > tmp_s_fu_189_p4;
    sc_signal< sc_lv<32> > tmp_9_fu_214_p4;
    sc_signal< sc_lv<32> > tmp_1_fu_229_p4;
    sc_signal< sc_lv<32> > tmp_2_fu_244_p4;
    sc_signal< sc_lv<32> > tmp_10_fu_269_p4;
    sc_signal< sc_lv<32> > tmp_11_fu_284_p4;
    sc_signal< sc_lv<32> > tmp_12_fu_299_p4;
    sc_signal< sc_lv<32> > grp_fu_108_p2;
    sc_signal< sc_lv<32> > grp_fu_112_p2;
    sc_signal< sc_lv<32> > grp_fu_116_p2;
    sc_signal< sc_lv<512> > M_data_read_int_reg;
    sc_signal< sc_lv<32> > v_x_read_int_reg;
    sc_signal< sc_lv<32> > v_y_read_int_reg;
    sc_signal< sc_lv<32> > v_z_read_int_reg;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<32> ap_const_lv32_9F;
    static const sc_lv<32> ap_const_lv32_100;
    static const sc_lv<32> ap_const_lv32_11F;
    static const sc_lv<32> ap_const_lv32_180;
    static const sc_lv<32> ap_const_lv32_19F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_A0;
    static const sc_lv<32> ap_const_lv32_BF;
    static const sc_lv<32> ap_const_lv32_120;
    static const sc_lv<32> ap_const_lv32_13F;
    static const sc_lv<32> ap_const_lv32_1A0;
    static const sc_lv<32> ap_const_lv32_1BF;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_C0;
    static const sc_lv<32> ap_const_lv32_DF;
    static const sc_lv<32> ap_const_lv32_140;
    static const sc_lv<32> ap_const_lv32_15F;
    static const sc_lv<32> ap_const_lv32_1C0;
    static const sc_lv<32> ap_const_lv32_1DF;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_state10_pp0_stage0_iter9();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_pp0_stage0_iter1();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_pp0_stage0_iter3();
    void thread_ap_block_state5_pp0_stage0_iter4();
    void thread_ap_block_state6_pp0_stage0_iter5();
    void thread_ap_block_state7_pp0_stage0_iter6();
    void thread_ap_block_state8_pp0_stage0_iter7();
    void thread_ap_block_state9_pp0_stage0_iter8();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_2();
    void thread_grp_fu_104_p1();
    void thread_grp_fu_120_p0();
    void thread_grp_fu_125_p0();
    void thread_grp_fu_130_p0();
    void thread_grp_fu_135_p0();
    void thread_grp_fu_140_p0();
    void thread_grp_fu_145_p0();
    void thread_grp_fu_150_p0();
    void thread_grp_fu_155_p0();
    void thread_grp_fu_160_p0();
    void thread_grp_fu_88_p1();
    void thread_grp_fu_96_p1();
    void thread_tmp_10_fu_269_p4();
    void thread_tmp_11_fu_284_p4();
    void thread_tmp_12_fu_299_p4();
    void thread_tmp_1_fu_229_p4();
    void thread_tmp_2_fu_244_p4();
    void thread_tmp_6_fu_165_p1();
    void thread_tmp_8_fu_174_p4();
    void thread_tmp_9_fu_214_p4();
    void thread_tmp_s_fu_189_p4();
};

}

using namespace ap_rtl;

#endif
