// ==============================================================
// File generated on Fri Jan 17 13:00:50 EET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __integrateKernel_fsqrt_32ns_32ns_32_7_1__HH__
#define __integrateKernel_fsqrt_32ns_32ns_32_7_1__HH__
#include "ACMP_fsqrt.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(integrateKernel_fsqrt_32ns_32ns_32_7_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fsqrt<ID, 7, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_fsqrt_U;

    SC_CTOR(integrateKernel_fsqrt_32ns_32ns_32_7_1):  ACMP_fsqrt_U ("ACMP_fsqrt_U") {
        ACMP_fsqrt_U.clk(clk);
        ACMP_fsqrt_U.reset(reset);
        ACMP_fsqrt_U.ce(ce);
        ACMP_fsqrt_U.din0(din0);
        ACMP_fsqrt_U.din1(din1);
        ACMP_fsqrt_U.dout(dout);

    }

};

#endif //
