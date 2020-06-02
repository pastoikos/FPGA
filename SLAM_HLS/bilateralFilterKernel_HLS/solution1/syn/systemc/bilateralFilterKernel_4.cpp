#include "bilateralFilterKernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bilateralFilterKernel::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[13];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[54];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[63];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[72];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[81];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[90];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[92];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[93];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[94];
}

void bilateralFilterKernel::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[97];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state100() {
    ap_CS_fsm_state100 = ap_CS_fsm.read()[89];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state104() {
    ap_CS_fsm_state104 = ap_CS_fsm.read()[91];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[38];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[39];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[40];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[41];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[42];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[43];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[44];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[45];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[46];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state490() {
    ap_CS_fsm_state490 = ap_CS_fsm.read()[95];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state491() {
    ap_CS_fsm_state491 = ap_CS_fsm.read()[96];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state495() {
    ap_CS_fsm_state495 = ap_CS_fsm.read()[98];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state499() {
    ap_CS_fsm_state499 = ap_CS_fsm.read()[102];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[47];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[52];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[53];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[55];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[56];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state67() {
    ap_CS_fsm_state67 = ap_CS_fsm.read()[62];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state71() {
    ap_CS_fsm_state71 = ap_CS_fsm.read()[64];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[65];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state78() {
    ap_CS_fsm_state78 = ap_CS_fsm.read()[71];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[73];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state83() {
    ap_CS_fsm_state83 = ap_CS_fsm.read()[74];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[80];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[82];
}

void bilateralFilterKernel::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[83];
}

void bilateralFilterKernel::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gaussian_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gaussian_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage0_00001() {
    ap_block_pp6_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage1_00001() {
    ap_block_pp6_stage1_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage2() {
    ap_block_pp6_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage2_00001() {
    ap_block_pp6_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage2_11001() {
    ap_block_pp6_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp7_stage0_01001() {
    ap_block_pp7_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter2.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state494_io.read()));
}

void bilateralFilterKernel::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter2.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state494_io.read()));
}

void bilateralFilterKernel::thread_ap_block_state101_pp5_stage0_iter0() {
    ap_block_state101_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state102_pp5_stage0_iter1() {
    ap_block_state102_pp5_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state103_pp5_stage0_iter2() {
    ap_block_state103_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state105_pp6_stage0_iter0() {
    ap_block_state105_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state106_pp6_stage1_iter0() {
    ap_block_state106_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state107_pp6_stage2_iter0() {
    ap_block_state107_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state108_pp6_stage0_iter1() {
    ap_block_state108_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state109_pp6_stage1_iter1() {
    ap_block_state109_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state110_pp6_stage2_iter1() {
    ap_block_state110_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state111_pp6_stage0_iter2() {
    ap_block_state111_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state112_pp6_stage1_iter2() {
    ap_block_state112_pp6_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state113_pp6_stage2_iter2() {
    ap_block_state113_pp6_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state114_pp6_stage0_iter3() {
    ap_block_state114_pp6_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state115_pp6_stage1_iter3() {
    ap_block_state115_pp6_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state116_pp6_stage2_iter3() {
    ap_block_state116_pp6_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state117_pp6_stage0_iter4() {
    ap_block_state117_pp6_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state118_pp6_stage1_iter4() {
    ap_block_state118_pp6_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state119_pp6_stage2_iter4() {
    ap_block_state119_pp6_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state120_pp6_stage0_iter5() {
    ap_block_state120_pp6_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state121_pp6_stage1_iter5() {
    ap_block_state121_pp6_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state122_pp6_stage2_iter5() {
    ap_block_state122_pp6_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state123_pp6_stage0_iter6() {
    ap_block_state123_pp6_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state124_pp6_stage1_iter6() {
    ap_block_state124_pp6_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state125_pp6_stage2_iter6() {
    ap_block_state125_pp6_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state126_pp6_stage0_iter7() {
    ap_block_state126_pp6_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state127_pp6_stage1_iter7() {
    ap_block_state127_pp6_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state128_pp6_stage2_iter7() {
    ap_block_state128_pp6_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state129_pp6_stage0_iter8() {
    ap_block_state129_pp6_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state130_pp6_stage1_iter8() {
    ap_block_state130_pp6_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state131_pp6_stage2_iter8() {
    ap_block_state131_pp6_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state132_pp6_stage0_iter9() {
    ap_block_state132_pp6_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state133_pp6_stage1_iter9() {
    ap_block_state133_pp6_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state134_pp6_stage2_iter9() {
    ap_block_state134_pp6_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state135_pp6_stage0_iter10() {
    ap_block_state135_pp6_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state136_pp6_stage1_iter10() {
    ap_block_state136_pp6_stage1_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state137_pp6_stage2_iter10() {
    ap_block_state137_pp6_stage2_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state138_pp6_stage0_iter11() {
    ap_block_state138_pp6_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state139_pp6_stage1_iter11() {
    ap_block_state139_pp6_stage1_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state140_pp6_stage2_iter11() {
    ap_block_state140_pp6_stage2_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state141_pp6_stage0_iter12() {
    ap_block_state141_pp6_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state142_pp6_stage1_iter12() {
    ap_block_state142_pp6_stage1_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state143_pp6_stage2_iter12() {
    ap_block_state143_pp6_stage2_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state144_pp6_stage0_iter13() {
    ap_block_state144_pp6_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state145_pp6_stage1_iter13() {
    ap_block_state145_pp6_stage1_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state146_pp6_stage2_iter13() {
    ap_block_state146_pp6_stage2_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state147_pp6_stage0_iter14() {
    ap_block_state147_pp6_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state148_pp6_stage1_iter14() {
    ap_block_state148_pp6_stage1_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state149_pp6_stage2_iter14() {
    ap_block_state149_pp6_stage2_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state14_pp0_stage0_iter0() {
    ap_block_state14_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state150_pp6_stage0_iter15() {
    ap_block_state150_pp6_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state151_pp6_stage1_iter15() {
    ap_block_state151_pp6_stage1_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state152_pp6_stage2_iter15() {
    ap_block_state152_pp6_stage2_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state153_pp6_stage0_iter16() {
    ap_block_state153_pp6_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state154_pp6_stage1_iter16() {
    ap_block_state154_pp6_stage1_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state155_pp6_stage2_iter16() {
    ap_block_state155_pp6_stage2_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state156_pp6_stage0_iter17() {
    ap_block_state156_pp6_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state157_pp6_stage1_iter17() {
    ap_block_state157_pp6_stage1_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state158_pp6_stage2_iter17() {
    ap_block_state158_pp6_stage2_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state159_pp6_stage0_iter18() {
    ap_block_state159_pp6_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state15_pp0_stage0_iter1() {
    ap_block_state15_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, gaussian_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state160_pp6_stage1_iter18() {
    ap_block_state160_pp6_stage1_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state161_pp6_stage2_iter18() {
    ap_block_state161_pp6_stage2_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state162_pp6_stage0_iter19() {
    ap_block_state162_pp6_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state163_pp6_stage1_iter19() {
    ap_block_state163_pp6_stage1_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state164_pp6_stage2_iter19() {
    ap_block_state164_pp6_stage2_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state165_pp6_stage0_iter20() {
    ap_block_state165_pp6_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state166_pp6_stage1_iter20() {
    ap_block_state166_pp6_stage1_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state167_pp6_stage2_iter20() {
    ap_block_state167_pp6_stage2_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state168_pp6_stage0_iter21() {
    ap_block_state168_pp6_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state169_pp6_stage1_iter21() {
    ap_block_state169_pp6_stage1_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state16_pp0_stage0_iter2() {
    ap_block_state16_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state170_pp6_stage2_iter21() {
    ap_block_state170_pp6_stage2_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state171_pp6_stage0_iter22() {
    ap_block_state171_pp6_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state172_pp6_stage1_iter22() {
    ap_block_state172_pp6_stage1_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state173_pp6_stage2_iter22() {
    ap_block_state173_pp6_stage2_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state174_pp6_stage0_iter23() {
    ap_block_state174_pp6_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state175_pp6_stage1_iter23() {
    ap_block_state175_pp6_stage1_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state176_pp6_stage2_iter23() {
    ap_block_state176_pp6_stage2_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state177_pp6_stage0_iter24() {
    ap_block_state177_pp6_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state178_pp6_stage1_iter24() {
    ap_block_state178_pp6_stage1_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state179_pp6_stage2_iter24() {
    ap_block_state179_pp6_stage2_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state180_pp6_stage0_iter25() {
    ap_block_state180_pp6_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state181_pp6_stage1_iter25() {
    ap_block_state181_pp6_stage1_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state182_pp6_stage2_iter25() {
    ap_block_state182_pp6_stage2_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state183_pp6_stage0_iter26() {
    ap_block_state183_pp6_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state184_pp6_stage1_iter26() {
    ap_block_state184_pp6_stage1_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state185_pp6_stage2_iter26() {
    ap_block_state185_pp6_stage2_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state186_pp6_stage0_iter27() {
    ap_block_state186_pp6_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state187_pp6_stage1_iter27() {
    ap_block_state187_pp6_stage1_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state188_pp6_stage2_iter27() {
    ap_block_state188_pp6_stage2_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state189_pp6_stage0_iter28() {
    ap_block_state189_pp6_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state190_pp6_stage1_iter28() {
    ap_block_state190_pp6_stage1_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state191_pp6_stage2_iter28() {
    ap_block_state191_pp6_stage2_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state192_pp6_stage0_iter29() {
    ap_block_state192_pp6_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state193_pp6_stage1_iter29() {
    ap_block_state193_pp6_stage1_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state194_pp6_stage2_iter29() {
    ap_block_state194_pp6_stage2_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state195_pp6_stage0_iter30() {
    ap_block_state195_pp6_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state196_pp6_stage1_iter30() {
    ap_block_state196_pp6_stage1_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state197_pp6_stage2_iter30() {
    ap_block_state197_pp6_stage2_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state198_pp6_stage0_iter31() {
    ap_block_state198_pp6_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state199_pp6_stage1_iter31() {
    ap_block_state199_pp6_stage1_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state200_pp6_stage2_iter31() {
    ap_block_state200_pp6_stage2_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state201_pp6_stage0_iter32() {
    ap_block_state201_pp6_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state202_pp6_stage1_iter32() {
    ap_block_state202_pp6_stage1_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state203_pp6_stage2_iter32() {
    ap_block_state203_pp6_stage2_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state204_pp6_stage0_iter33() {
    ap_block_state204_pp6_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state205_pp6_stage1_iter33() {
    ap_block_state205_pp6_stage1_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state206_pp6_stage2_iter33() {
    ap_block_state206_pp6_stage2_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state207_pp6_stage0_iter34() {
    ap_block_state207_pp6_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state208_pp6_stage1_iter34() {
    ap_block_state208_pp6_stage1_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state209_pp6_stage2_iter34() {
    ap_block_state209_pp6_stage2_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state210_pp6_stage0_iter35() {
    ap_block_state210_pp6_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state211_pp6_stage1_iter35() {
    ap_block_state211_pp6_stage1_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state212_pp6_stage2_iter35() {
    ap_block_state212_pp6_stage2_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state213_pp6_stage0_iter36() {
    ap_block_state213_pp6_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state214_pp6_stage1_iter36() {
    ap_block_state214_pp6_stage1_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state215_pp6_stage2_iter36() {
    ap_block_state215_pp6_stage2_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state216_pp6_stage0_iter37() {
    ap_block_state216_pp6_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state217_pp6_stage1_iter37() {
    ap_block_state217_pp6_stage1_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state218_pp6_stage2_iter37() {
    ap_block_state218_pp6_stage2_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state219_pp6_stage0_iter38() {
    ap_block_state219_pp6_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state220_pp6_stage1_iter38() {
    ap_block_state220_pp6_stage1_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state221_pp6_stage2_iter38() {
    ap_block_state221_pp6_stage2_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state222_pp6_stage0_iter39() {
    ap_block_state222_pp6_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state223_pp6_stage1_iter39() {
    ap_block_state223_pp6_stage1_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state224_pp6_stage2_iter39() {
    ap_block_state224_pp6_stage2_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state225_pp6_stage0_iter40() {
    ap_block_state225_pp6_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state226_pp6_stage1_iter40() {
    ap_block_state226_pp6_stage1_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state227_pp6_stage2_iter40() {
    ap_block_state227_pp6_stage2_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state228_pp6_stage0_iter41() {
    ap_block_state228_pp6_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state229_pp6_stage1_iter41() {
    ap_block_state229_pp6_stage1_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state230_pp6_stage2_iter41() {
    ap_block_state230_pp6_stage2_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state231_pp6_stage0_iter42() {
    ap_block_state231_pp6_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state232_pp6_stage1_iter42() {
    ap_block_state232_pp6_stage1_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state233_pp6_stage2_iter42() {
    ap_block_state233_pp6_stage2_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state234_pp6_stage0_iter43() {
    ap_block_state234_pp6_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state235_pp6_stage1_iter43() {
    ap_block_state235_pp6_stage1_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state236_pp6_stage2_iter43() {
    ap_block_state236_pp6_stage2_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state237_pp6_stage0_iter44() {
    ap_block_state237_pp6_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state238_pp6_stage1_iter44() {
    ap_block_state238_pp6_stage1_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state239_pp6_stage2_iter44() {
    ap_block_state239_pp6_stage2_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state240_pp6_stage0_iter45() {
    ap_block_state240_pp6_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state241_pp6_stage1_iter45() {
    ap_block_state241_pp6_stage1_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state242_pp6_stage2_iter45() {
    ap_block_state242_pp6_stage2_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state243_pp6_stage0_iter46() {
    ap_block_state243_pp6_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state244_pp6_stage1_iter46() {
    ap_block_state244_pp6_stage1_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state245_pp6_stage2_iter46() {
    ap_block_state245_pp6_stage2_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state246_pp6_stage0_iter47() {
    ap_block_state246_pp6_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state247_pp6_stage1_iter47() {
    ap_block_state247_pp6_stage1_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state248_pp6_stage2_iter47() {
    ap_block_state248_pp6_stage2_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state249_pp6_stage0_iter48() {
    ap_block_state249_pp6_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state250_pp6_stage1_iter48() {
    ap_block_state250_pp6_stage1_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state251_pp6_stage2_iter48() {
    ap_block_state251_pp6_stage2_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state252_pp6_stage0_iter49() {
    ap_block_state252_pp6_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state253_pp6_stage1_iter49() {
    ap_block_state253_pp6_stage1_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state254_pp6_stage2_iter49() {
    ap_block_state254_pp6_stage2_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state255_pp6_stage0_iter50() {
    ap_block_state255_pp6_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state256_pp6_stage1_iter50() {
    ap_block_state256_pp6_stage1_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state257_pp6_stage2_iter50() {
    ap_block_state257_pp6_stage2_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state258_pp6_stage0_iter51() {
    ap_block_state258_pp6_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state259_pp6_stage1_iter51() {
    ap_block_state259_pp6_stage1_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state260_pp6_stage2_iter51() {
    ap_block_state260_pp6_stage2_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state261_pp6_stage0_iter52() {
    ap_block_state261_pp6_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state262_pp6_stage1_iter52() {
    ap_block_state262_pp6_stage1_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state263_pp6_stage2_iter52() {
    ap_block_state263_pp6_stage2_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state264_pp6_stage0_iter53() {
    ap_block_state264_pp6_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state265_pp6_stage1_iter53() {
    ap_block_state265_pp6_stage1_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state266_pp6_stage2_iter53() {
    ap_block_state266_pp6_stage2_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state267_pp6_stage0_iter54() {
    ap_block_state267_pp6_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state268_pp6_stage1_iter54() {
    ap_block_state268_pp6_stage1_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state269_pp6_stage2_iter54() {
    ap_block_state269_pp6_stage2_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state270_pp6_stage0_iter55() {
    ap_block_state270_pp6_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state271_pp6_stage1_iter55() {
    ap_block_state271_pp6_stage1_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state272_pp6_stage2_iter55() {
    ap_block_state272_pp6_stage2_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state273_pp6_stage0_iter56() {
    ap_block_state273_pp6_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state274_pp6_stage1_iter56() {
    ap_block_state274_pp6_stage1_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state275_pp6_stage2_iter56() {
    ap_block_state275_pp6_stage2_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state276_pp6_stage0_iter57() {
    ap_block_state276_pp6_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state277_pp6_stage1_iter57() {
    ap_block_state277_pp6_stage1_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state278_pp6_stage2_iter57() {
    ap_block_state278_pp6_stage2_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state279_pp6_stage0_iter58() {
    ap_block_state279_pp6_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state280_pp6_stage1_iter58() {
    ap_block_state280_pp6_stage1_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state281_pp6_stage2_iter58() {
    ap_block_state281_pp6_stage2_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state282_pp6_stage0_iter59() {
    ap_block_state282_pp6_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state283_pp6_stage1_iter59() {
    ap_block_state283_pp6_stage1_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state284_pp6_stage2_iter59() {
    ap_block_state284_pp6_stage2_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state285_pp6_stage0_iter60() {
    ap_block_state285_pp6_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state286_pp6_stage1_iter60() {
    ap_block_state286_pp6_stage1_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state287_pp6_stage2_iter60() {
    ap_block_state287_pp6_stage2_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state288_pp6_stage0_iter61() {
    ap_block_state288_pp6_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state289_pp6_stage1_iter61() {
    ap_block_state289_pp6_stage1_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state290_pp6_stage2_iter61() {
    ap_block_state290_pp6_stage2_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state291_pp6_stage0_iter62() {
    ap_block_state291_pp6_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state292_pp6_stage1_iter62() {
    ap_block_state292_pp6_stage1_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state293_pp6_stage2_iter62() {
    ap_block_state293_pp6_stage2_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state294_pp6_stage0_iter63() {
    ap_block_state294_pp6_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state295_pp6_stage1_iter63() {
    ap_block_state295_pp6_stage1_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state296_pp6_stage2_iter63() {
    ap_block_state296_pp6_stage2_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state297_pp6_stage0_iter64() {
    ap_block_state297_pp6_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state298_pp6_stage1_iter64() {
    ap_block_state298_pp6_stage1_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state299_pp6_stage2_iter64() {
    ap_block_state299_pp6_stage2_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state300_pp6_stage0_iter65() {
    ap_block_state300_pp6_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state301_pp6_stage1_iter65() {
    ap_block_state301_pp6_stage1_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state302_pp6_stage2_iter65() {
    ap_block_state302_pp6_stage2_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state303_pp6_stage0_iter66() {
    ap_block_state303_pp6_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state304_pp6_stage1_iter66() {
    ap_block_state304_pp6_stage1_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state305_pp6_stage2_iter66() {
    ap_block_state305_pp6_stage2_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state306_pp6_stage0_iter67() {
    ap_block_state306_pp6_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state307_pp6_stage1_iter67() {
    ap_block_state307_pp6_stage1_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state308_pp6_stage2_iter67() {
    ap_block_state308_pp6_stage2_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state309_pp6_stage0_iter68() {
    ap_block_state309_pp6_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state310_pp6_stage1_iter68() {
    ap_block_state310_pp6_stage1_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state311_pp6_stage2_iter68() {
    ap_block_state311_pp6_stage2_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state312_pp6_stage0_iter69() {
    ap_block_state312_pp6_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state313_pp6_stage1_iter69() {
    ap_block_state313_pp6_stage1_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state314_pp6_stage2_iter69() {
    ap_block_state314_pp6_stage2_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state315_pp6_stage0_iter70() {
    ap_block_state315_pp6_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state316_pp6_stage1_iter70() {
    ap_block_state316_pp6_stage1_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state317_pp6_stage2_iter70() {
    ap_block_state317_pp6_stage2_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state318_pp6_stage0_iter71() {
    ap_block_state318_pp6_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state319_pp6_stage1_iter71() {
    ap_block_state319_pp6_stage1_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state320_pp6_stage2_iter71() {
    ap_block_state320_pp6_stage2_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state321_pp6_stage0_iter72() {
    ap_block_state321_pp6_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state322_pp6_stage1_iter72() {
    ap_block_state322_pp6_stage1_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state323_pp6_stage2_iter72() {
    ap_block_state323_pp6_stage2_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state324_pp6_stage0_iter73() {
    ap_block_state324_pp6_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state325_pp6_stage1_iter73() {
    ap_block_state325_pp6_stage1_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state326_pp6_stage2_iter73() {
    ap_block_state326_pp6_stage2_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state327_pp6_stage0_iter74() {
    ap_block_state327_pp6_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state328_pp6_stage1_iter74() {
    ap_block_state328_pp6_stage1_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state329_pp6_stage2_iter74() {
    ap_block_state329_pp6_stage2_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state330_pp6_stage0_iter75() {
    ap_block_state330_pp6_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state331_pp6_stage1_iter75() {
    ap_block_state331_pp6_stage1_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state332_pp6_stage2_iter75() {
    ap_block_state332_pp6_stage2_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state333_pp6_stage0_iter76() {
    ap_block_state333_pp6_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state334_pp6_stage1_iter76() {
    ap_block_state334_pp6_stage1_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state335_pp6_stage2_iter76() {
    ap_block_state335_pp6_stage2_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state336_pp6_stage0_iter77() {
    ap_block_state336_pp6_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state337_pp6_stage1_iter77() {
    ap_block_state337_pp6_stage1_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state338_pp6_stage2_iter77() {
    ap_block_state338_pp6_stage2_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state339_pp6_stage0_iter78() {
    ap_block_state339_pp6_stage0_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state340_pp6_stage1_iter78() {
    ap_block_state340_pp6_stage1_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state341_pp6_stage2_iter78() {
    ap_block_state341_pp6_stage2_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state342_pp6_stage0_iter79() {
    ap_block_state342_pp6_stage0_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state343_pp6_stage1_iter79() {
    ap_block_state343_pp6_stage1_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state344_pp6_stage2_iter79() {
    ap_block_state344_pp6_stage2_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state345_pp6_stage0_iter80() {
    ap_block_state345_pp6_stage0_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state346_pp6_stage1_iter80() {
    ap_block_state346_pp6_stage1_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state347_pp6_stage2_iter80() {
    ap_block_state347_pp6_stage2_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state348_pp6_stage0_iter81() {
    ap_block_state348_pp6_stage0_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state349_pp6_stage1_iter81() {
    ap_block_state349_pp6_stage1_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state350_pp6_stage2_iter81() {
    ap_block_state350_pp6_stage2_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state351_pp6_stage0_iter82() {
    ap_block_state351_pp6_stage0_iter82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state352_pp6_stage1_iter82() {
    ap_block_state352_pp6_stage1_iter82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state353_pp6_stage2_iter82() {
    ap_block_state353_pp6_stage2_iter82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state354_pp6_stage0_iter83() {
    ap_block_state354_pp6_stage0_iter83 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state355_pp6_stage1_iter83() {
    ap_block_state355_pp6_stage1_iter83 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state356_pp6_stage2_iter83() {
    ap_block_state356_pp6_stage2_iter83 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state357_pp6_stage0_iter84() {
    ap_block_state357_pp6_stage0_iter84 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state358_pp6_stage1_iter84() {
    ap_block_state358_pp6_stage1_iter84 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state359_pp6_stage2_iter84() {
    ap_block_state359_pp6_stage2_iter84 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state360_pp6_stage0_iter85() {
    ap_block_state360_pp6_stage0_iter85 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state361_pp6_stage1_iter85() {
    ap_block_state361_pp6_stage1_iter85 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state362_pp6_stage2_iter85() {
    ap_block_state362_pp6_stage2_iter85 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state363_pp6_stage0_iter86() {
    ap_block_state363_pp6_stage0_iter86 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state364_pp6_stage1_iter86() {
    ap_block_state364_pp6_stage1_iter86 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state365_pp6_stage2_iter86() {
    ap_block_state365_pp6_stage2_iter86 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state366_pp6_stage0_iter87() {
    ap_block_state366_pp6_stage0_iter87 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state367_pp6_stage1_iter87() {
    ap_block_state367_pp6_stage1_iter87 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state368_pp6_stage2_iter87() {
    ap_block_state368_pp6_stage2_iter87 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state369_pp6_stage0_iter88() {
    ap_block_state369_pp6_stage0_iter88 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state370_pp6_stage1_iter88() {
    ap_block_state370_pp6_stage1_iter88 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state371_pp6_stage2_iter88() {
    ap_block_state371_pp6_stage2_iter88 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state372_pp6_stage0_iter89() {
    ap_block_state372_pp6_stage0_iter89 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state373_pp6_stage1_iter89() {
    ap_block_state373_pp6_stage1_iter89 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state374_pp6_stage2_iter89() {
    ap_block_state374_pp6_stage2_iter89 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state375_pp6_stage0_iter90() {
    ap_block_state375_pp6_stage0_iter90 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state376_pp6_stage1_iter90() {
    ap_block_state376_pp6_stage1_iter90 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state377_pp6_stage2_iter90() {
    ap_block_state377_pp6_stage2_iter90 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state378_pp6_stage0_iter91() {
    ap_block_state378_pp6_stage0_iter91 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state379_pp6_stage1_iter91() {
    ap_block_state379_pp6_stage1_iter91 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state380_pp6_stage2_iter91() {
    ap_block_state380_pp6_stage2_iter91 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state381_pp6_stage0_iter92() {
    ap_block_state381_pp6_stage0_iter92 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state382_pp6_stage1_iter92() {
    ap_block_state382_pp6_stage1_iter92 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state383_pp6_stage2_iter92() {
    ap_block_state383_pp6_stage2_iter92 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state384_pp6_stage0_iter93() {
    ap_block_state384_pp6_stage0_iter93 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state385_pp6_stage1_iter93() {
    ap_block_state385_pp6_stage1_iter93 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state386_pp6_stage2_iter93() {
    ap_block_state386_pp6_stage2_iter93 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state387_pp6_stage0_iter94() {
    ap_block_state387_pp6_stage0_iter94 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state388_pp6_stage1_iter94() {
    ap_block_state388_pp6_stage1_iter94 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state389_pp6_stage2_iter94() {
    ap_block_state389_pp6_stage2_iter94 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state390_pp6_stage0_iter95() {
    ap_block_state390_pp6_stage0_iter95 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state391_pp6_stage1_iter95() {
    ap_block_state391_pp6_stage1_iter95 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state392_pp6_stage2_iter95() {
    ap_block_state392_pp6_stage2_iter95 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state393_pp6_stage0_iter96() {
    ap_block_state393_pp6_stage0_iter96 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state394_pp6_stage1_iter96() {
    ap_block_state394_pp6_stage1_iter96 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state395_pp6_stage2_iter96() {
    ap_block_state395_pp6_stage2_iter96 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state396_pp6_stage0_iter97() {
    ap_block_state396_pp6_stage0_iter97 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state397_pp6_stage1_iter97() {
    ap_block_state397_pp6_stage1_iter97 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state398_pp6_stage2_iter97() {
    ap_block_state398_pp6_stage2_iter97 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state399_pp6_stage0_iter98() {
    ap_block_state399_pp6_stage0_iter98 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state400_pp6_stage1_iter98() {
    ap_block_state400_pp6_stage1_iter98 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state401_pp6_stage2_iter98() {
    ap_block_state401_pp6_stage2_iter98 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state402_pp6_stage0_iter99() {
    ap_block_state402_pp6_stage0_iter99 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state403_pp6_stage1_iter99() {
    ap_block_state403_pp6_stage1_iter99 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state404_pp6_stage2_iter99() {
    ap_block_state404_pp6_stage2_iter99 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state405_pp6_stage0_iter100() {
    ap_block_state405_pp6_stage0_iter100 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state406_pp6_stage1_iter100() {
    ap_block_state406_pp6_stage1_iter100 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state407_pp6_stage2_iter100() {
    ap_block_state407_pp6_stage2_iter100 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state408_pp6_stage0_iter101() {
    ap_block_state408_pp6_stage0_iter101 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state409_pp6_stage1_iter101() {
    ap_block_state409_pp6_stage1_iter101 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state410_pp6_stage2_iter101() {
    ap_block_state410_pp6_stage2_iter101 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state411_pp6_stage0_iter102() {
    ap_block_state411_pp6_stage0_iter102 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state412_pp6_stage1_iter102() {
    ap_block_state412_pp6_stage1_iter102 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state413_pp6_stage2_iter102() {
    ap_block_state413_pp6_stage2_iter102 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state414_pp6_stage0_iter103() {
    ap_block_state414_pp6_stage0_iter103 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state415_pp6_stage1_iter103() {
    ap_block_state415_pp6_stage1_iter103 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state416_pp6_stage2_iter103() {
    ap_block_state416_pp6_stage2_iter103 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state417_pp6_stage0_iter104() {
    ap_block_state417_pp6_stage0_iter104 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state418_pp6_stage1_iter104() {
    ap_block_state418_pp6_stage1_iter104 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state419_pp6_stage2_iter104() {
    ap_block_state419_pp6_stage2_iter104 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state420_pp6_stage0_iter105() {
    ap_block_state420_pp6_stage0_iter105 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state421_pp6_stage1_iter105() {
    ap_block_state421_pp6_stage1_iter105 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state422_pp6_stage2_iter105() {
    ap_block_state422_pp6_stage2_iter105 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state423_pp6_stage0_iter106() {
    ap_block_state423_pp6_stage0_iter106 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state424_pp6_stage1_iter106() {
    ap_block_state424_pp6_stage1_iter106 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state425_pp6_stage2_iter106() {
    ap_block_state425_pp6_stage2_iter106 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state426_pp6_stage0_iter107() {
    ap_block_state426_pp6_stage0_iter107 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state427_pp6_stage1_iter107() {
    ap_block_state427_pp6_stage1_iter107 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state428_pp6_stage2_iter107() {
    ap_block_state428_pp6_stage2_iter107 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state429_pp6_stage0_iter108() {
    ap_block_state429_pp6_stage0_iter108 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state430_pp6_stage1_iter108() {
    ap_block_state430_pp6_stage1_iter108 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state431_pp6_stage2_iter108() {
    ap_block_state431_pp6_stage2_iter108 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state432_pp6_stage0_iter109() {
    ap_block_state432_pp6_stage0_iter109 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state433_pp6_stage1_iter109() {
    ap_block_state433_pp6_stage1_iter109 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state434_pp6_stage2_iter109() {
    ap_block_state434_pp6_stage2_iter109 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state435_pp6_stage0_iter110() {
    ap_block_state435_pp6_stage0_iter110 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state436_pp6_stage1_iter110() {
    ap_block_state436_pp6_stage1_iter110 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state437_pp6_stage2_iter110() {
    ap_block_state437_pp6_stage2_iter110 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state438_pp6_stage0_iter111() {
    ap_block_state438_pp6_stage0_iter111 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state439_pp6_stage1_iter111() {
    ap_block_state439_pp6_stage1_iter111 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state440_pp6_stage2_iter111() {
    ap_block_state440_pp6_stage2_iter111 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state441_pp6_stage0_iter112() {
    ap_block_state441_pp6_stage0_iter112 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state442_pp6_stage1_iter112() {
    ap_block_state442_pp6_stage1_iter112 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state443_pp6_stage2_iter112() {
    ap_block_state443_pp6_stage2_iter112 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state444_pp6_stage0_iter113() {
    ap_block_state444_pp6_stage0_iter113 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state445_pp6_stage1_iter113() {
    ap_block_state445_pp6_stage1_iter113 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state446_pp6_stage2_iter113() {
    ap_block_state446_pp6_stage2_iter113 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state447_pp6_stage0_iter114() {
    ap_block_state447_pp6_stage0_iter114 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state448_pp6_stage1_iter114() {
    ap_block_state448_pp6_stage1_iter114 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state449_pp6_stage2_iter114() {
    ap_block_state449_pp6_stage2_iter114 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state450_pp6_stage0_iter115() {
    ap_block_state450_pp6_stage0_iter115 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state451_pp6_stage1_iter115() {
    ap_block_state451_pp6_stage1_iter115 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state452_pp6_stage2_iter115() {
    ap_block_state452_pp6_stage2_iter115 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state453_pp6_stage0_iter116() {
    ap_block_state453_pp6_stage0_iter116 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state454_pp6_stage1_iter116() {
    ap_block_state454_pp6_stage1_iter116 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state455_pp6_stage2_iter116() {
    ap_block_state455_pp6_stage2_iter116 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state456_pp6_stage0_iter117() {
    ap_block_state456_pp6_stage0_iter117 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state457_pp6_stage1_iter117() {
    ap_block_state457_pp6_stage1_iter117 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state458_pp6_stage2_iter117() {
    ap_block_state458_pp6_stage2_iter117 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state459_pp6_stage0_iter118() {
    ap_block_state459_pp6_stage0_iter118 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state460_pp6_stage1_iter118() {
    ap_block_state460_pp6_stage1_iter118 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state461_pp6_stage2_iter118() {
    ap_block_state461_pp6_stage2_iter118 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state462_pp6_stage0_iter119() {
    ap_block_state462_pp6_stage0_iter119 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state463_pp6_stage1_iter119() {
    ap_block_state463_pp6_stage1_iter119 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state464_pp6_stage2_iter119() {
    ap_block_state464_pp6_stage2_iter119 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state465_pp6_stage0_iter120() {
    ap_block_state465_pp6_stage0_iter120 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state466_pp6_stage1_iter120() {
    ap_block_state466_pp6_stage1_iter120 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state467_pp6_stage2_iter120() {
    ap_block_state467_pp6_stage2_iter120 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state468_pp6_stage0_iter121() {
    ap_block_state468_pp6_stage0_iter121 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state469_pp6_stage1_iter121() {
    ap_block_state469_pp6_stage1_iter121 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state470_pp6_stage2_iter121() {
    ap_block_state470_pp6_stage2_iter121 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state471_pp6_stage0_iter122() {
    ap_block_state471_pp6_stage0_iter122 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state472_pp6_stage1_iter122() {
    ap_block_state472_pp6_stage1_iter122 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state473_pp6_stage2_iter122() {
    ap_block_state473_pp6_stage2_iter122 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state474_pp6_stage0_iter123() {
    ap_block_state474_pp6_stage0_iter123 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state475_pp6_stage1_iter123() {
    ap_block_state475_pp6_stage1_iter123 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state476_pp6_stage2_iter123() {
    ap_block_state476_pp6_stage2_iter123 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state477_pp6_stage0_iter124() {
    ap_block_state477_pp6_stage0_iter124 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state478_pp6_stage1_iter124() {
    ap_block_state478_pp6_stage1_iter124 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state479_pp6_stage2_iter124() {
    ap_block_state479_pp6_stage2_iter124 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state480_pp6_stage0_iter125() {
    ap_block_state480_pp6_stage0_iter125 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state481_pp6_stage1_iter125() {
    ap_block_state481_pp6_stage1_iter125 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state482_pp6_stage2_iter125() {
    ap_block_state482_pp6_stage2_iter125 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state483_pp6_stage0_iter126() {
    ap_block_state483_pp6_stage0_iter126 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state484_pp6_stage1_iter126() {
    ap_block_state484_pp6_stage1_iter126 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state485_pp6_stage2_iter126() {
    ap_block_state485_pp6_stage2_iter126 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state486_pp6_stage0_iter127() {
    ap_block_state486_pp6_stage0_iter127 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state487_pp6_stage1_iter127() {
    ap_block_state487_pp6_stage1_iter127 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state488_pp6_stage2_iter127() {
    ap_block_state488_pp6_stage2_iter127 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state489_pp6_stage0_iter128() {
    ap_block_state489_pp6_stage0_iter128 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state492_pp7_stage0_iter0() {
    ap_block_state492_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state493_pp7_stage0_iter1() {
    ap_block_state493_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state494_io() {
    ap_block_state494_io = (esl_seteq<1,1,1>(exitcond7_reg_4581_pp7_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_out_r_WREADY.read()));
}

void bilateralFilterKernel::thread_ap_block_state494_pp7_stage0_iter2() {
    ap_block_state494_pp7_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state57_pp1_stage0_iter0() {
    ap_block_state57_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state58_pp1_stage0_iter1() {
    ap_block_state58_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state59_pp1_stage0_iter2() {
    ap_block_state59_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state68_pp2_stage0_iter0() {
    ap_block_state68_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state69_pp2_stage0_iter1() {
    ap_block_state69_pp2_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state70_pp2_stage0_iter2() {
    ap_block_state70_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state79_pp3_stage0_iter0() {
    ap_block_state79_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state80_pp3_stage0_iter1() {
    ap_block_state80_pp3_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state81_pp3_stage0_iter2() {
    ap_block_state81_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state90_pp4_stage0_iter0() {
    ap_block_state90_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_block_state91_pp4_stage0_iter1() {
    ap_block_state91_pp4_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read()) && esl_seteq<1,1,1>(ap_const_logic_0, pad_depth_RVALID.read()));
}

void bilateralFilterKernel::thread_ap_block_state92_pp4_stage0_iter2() {
    ap_block_state92_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bilateralFilterKernel::thread_ap_condition_10464() {
    ap_condition_10464 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()));
}

void bilateralFilterKernel::thread_ap_condition_10644() {
    ap_condition_10644 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter39.read()));
}

void bilateralFilterKernel::thread_ap_condition_10756() {
    ap_condition_10756 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter43.read()));
}

void bilateralFilterKernel::thread_ap_condition_10980() {
    ap_condition_10980 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter50.read()));
}

void bilateralFilterKernel::thread_ap_condition_11114() {
    ap_condition_11114 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter54.read()));
}

void bilateralFilterKernel::thread_ap_condition_11382() {
    ap_condition_11382 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter61.read()));
}

void bilateralFilterKernel::thread_ap_condition_11538() {
    ap_condition_11538 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter65.read()));
}

void bilateralFilterKernel::thread_ap_condition_11852() {
    ap_condition_11852 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter72.read()));
}

void bilateralFilterKernel::thread_ap_condition_12028() {
    ap_condition_12028 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter76.read()));
}

void bilateralFilterKernel::thread_ap_condition_12386() {
    ap_condition_12386 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter83.read()));
}

void bilateralFilterKernel::thread_ap_condition_12584() {
    ap_condition_12584 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter87.read()));
}

void bilateralFilterKernel::thread_ap_condition_12986() {
    ap_condition_12986 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter94.read()));
}

void bilateralFilterKernel::thread_ap_condition_13207() {
    ap_condition_13207 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter98.read()));
}

void bilateralFilterKernel::thread_ap_condition_13651() {
    ap_condition_13651 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter105.read()));
}

void bilateralFilterKernel::thread_ap_condition_13894() {
    ap_condition_13894 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter109.read()));
}

void bilateralFilterKernel::thread_ap_condition_3999() {
    ap_condition_3999 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()));
}

void bilateralFilterKernel::thread_ap_condition_8635() {
    ap_condition_8635 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter28.read()));
}

void bilateralFilterKernel::thread_ap_condition_pp0_exit_iter0_state14() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_1877_p2.read())) {
        ap_condition_pp0_exit_iter0_state14 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state14 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp1_exit_iter0_state57() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_1978_p2.read())) {
        ap_condition_pp1_exit_iter0_state57 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state57 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp2_exit_iter0_state68() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_2015_p2.read())) {
        ap_condition_pp2_exit_iter0_state68 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state68 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp3_exit_iter0_state79() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_2052_p2.read())) {
        ap_condition_pp3_exit_iter0_state79 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state79 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp4_exit_iter0_state90() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond5_fu_2089_p2.read())) {
        ap_condition_pp4_exit_iter0_state90 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state90 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp5_exit_iter0_state101() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_2126_p2.read())) {
        ap_condition_pp5_exit_iter0_state101 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state101 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp6_exit_iter0_state105() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond4_fu_2143_p2.read())) {
        ap_condition_pp6_exit_iter0_state105 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state105 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_condition_pp7_exit_iter0_state492() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond7_fu_2588_p2.read())) {
        ap_condition_pp7_exit_iter0_state492 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state492 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_2_fu_1945_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void bilateralFilterKernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter78.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter79.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter80.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter81.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter82.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter83.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter84.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter85.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter86.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter87.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter88.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter90.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter91.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter92.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter93.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter94.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter95.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter96.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter97.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter98.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter99.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter100.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter101.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter102.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter103.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter104.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter105.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter106.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter107.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter108.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter109.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter110.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter111.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter112.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter113.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter114.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter115.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter116.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter117.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter118.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter119.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter120.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter121.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter122.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter123.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter124.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter125.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter126.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter127.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter128.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter2.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar10_phi_fu_792_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read()))) {
        ap_phi_mux_indvar10_phi_fu_792_p4 = indvar_next5_reg_2961.read();
    } else {
        ap_phi_mux_indvar10_phi_fu_792_p4 = indvar10_reg_788.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar2_phi_fu_744_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read()))) {
        ap_phi_mux_indvar2_phi_fu_744_p4 = indvar_next1_reg_2881.read();
    } else {
        ap_phi_mux_indvar2_phi_fu_744_p4 = indvar2_reg_740.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar4_phi_fu_756_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read()))) {
        ap_phi_mux_indvar4_phi_fu_756_p4 = indvar_next2_reg_2901.read();
    } else {
        ap_phi_mux_indvar4_phi_fu_756_p4 = indvar4_reg_752.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar6_phi_fu_768_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read()))) {
        ap_phi_mux_indvar6_phi_fu_768_p4 = indvar_next3_reg_2921.read();
    } else {
        ap_phi_mux_indvar6_phi_fu_768_p4 = indvar6_reg_764.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar8_phi_fu_780_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read()))) {
        ap_phi_mux_indvar8_phi_fu_780_p4 = indvar_next4_reg_2941.read();
    } else {
        ap_phi_mux_indvar8_phi_fu_780_p4 = indvar8_reg_776.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_indvar_phi_fu_722_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()))) {
        ap_phi_mux_indvar_phi_fu_722_p4 = indvar_next_reg_2686.read();
    } else {
        ap_phi_mux_indvar_phi_fu_722_p4 = indvar_reg_718.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_mux_val_x_phi_fu_804_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_val_x_phi_fu_804_p4 = x_reg_2975.read();
    } else {
        ap_phi_mux_val_x_phi_fu_804_p4 = val_x_reg_800.read();
    }
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_1_1_reg_923() {
    ap_phi_reg_pp6_iter0_sum_1_1_reg_923 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_1_2_reg_1033() {
    ap_phi_reg_pp6_iter0_sum_1_2_reg_1033 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_1_3_reg_1143() {
    ap_phi_reg_pp6_iter0_sum_1_3_reg_1143 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_1_4_reg_1253() {
    ap_phi_reg_pp6_iter0_sum_1_4_reg_1253 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_1_reg_811() {
    ap_phi_reg_pp6_iter0_sum_1_reg_811 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_2_1_reg_945() {
    ap_phi_reg_pp6_iter0_sum_2_1_reg_945 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_2_2_reg_1055() {
    ap_phi_reg_pp6_iter0_sum_2_2_reg_1055 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_2_3_reg_1165() {
    ap_phi_reg_pp6_iter0_sum_2_3_reg_1165 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_2_4_reg_1275() {
    ap_phi_reg_pp6_iter0_sum_2_4_reg_1275 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_2_reg_835() {
    ap_phi_reg_pp6_iter0_sum_2_reg_835 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_3_1_reg_967() {
    ap_phi_reg_pp6_iter0_sum_3_1_reg_967 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_3_2_reg_1077() {
    ap_phi_reg_pp6_iter0_sum_3_2_reg_1077 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_3_3_reg_1187() {
    ap_phi_reg_pp6_iter0_sum_3_3_reg_1187 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_3_4_reg_1297() {
    ap_phi_reg_pp6_iter0_sum_3_4_reg_1297 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_3_reg_857() {
    ap_phi_reg_pp6_iter0_sum_3_reg_857 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_4_1_reg_989() {
    ap_phi_reg_pp6_iter0_sum_4_1_reg_989 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_4_2_reg_1099() {
    ap_phi_reg_pp6_iter0_sum_4_2_reg_1099 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_4_3_reg_1209() {
    ap_phi_reg_pp6_iter0_sum_4_3_reg_1209 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_4_4_reg_1319() {
    ap_phi_reg_pp6_iter0_sum_4_4_reg_1319 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_4_reg_879() {
    ap_phi_reg_pp6_iter0_sum_4_reg_879 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_5_1_reg_1011() {
    ap_phi_reg_pp6_iter0_sum_5_1_reg_1011 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_5_2_reg_1121() {
    ap_phi_reg_pp6_iter0_sum_5_2_reg_1121 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_5_3_reg_1231() {
    ap_phi_reg_pp6_iter0_sum_5_3_reg_1231 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_5_4_reg_1341() {
    ap_phi_reg_pp6_iter0_sum_5_4_reg_1341 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_sum_5_reg_901() {
    ap_phi_reg_pp6_iter0_sum_5_reg_901 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_1_1_reg_934() {
    ap_phi_reg_pp6_iter0_t_1_1_reg_934 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_1_2_reg_1044() {
    ap_phi_reg_pp6_iter0_t_1_2_reg_1044 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_1_3_reg_1154() {
    ap_phi_reg_pp6_iter0_t_1_3_reg_1154 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_1_4_reg_1264() {
    ap_phi_reg_pp6_iter0_t_1_4_reg_1264 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_1_reg_823() {
    ap_phi_reg_pp6_iter0_t_1_reg_823 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_2_1_reg_956() {
    ap_phi_reg_pp6_iter0_t_2_1_reg_956 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_2_2_reg_1066() {
    ap_phi_reg_pp6_iter0_t_2_2_reg_1066 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_2_3_reg_1176() {
    ap_phi_reg_pp6_iter0_t_2_3_reg_1176 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_2_4_reg_1286() {
    ap_phi_reg_pp6_iter0_t_2_4_reg_1286 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_2_reg_846() {
    ap_phi_reg_pp6_iter0_t_2_reg_846 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_3_1_reg_978() {
    ap_phi_reg_pp6_iter0_t_3_1_reg_978 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_3_2_reg_1088() {
    ap_phi_reg_pp6_iter0_t_3_2_reg_1088 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_3_3_reg_1198() {
    ap_phi_reg_pp6_iter0_t_3_3_reg_1198 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_3_4_reg_1308() {
    ap_phi_reg_pp6_iter0_t_3_4_reg_1308 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_3_reg_868() {
    ap_phi_reg_pp6_iter0_t_3_reg_868 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_4_1_reg_1000() {
    ap_phi_reg_pp6_iter0_t_4_1_reg_1000 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_4_2_reg_1110() {
    ap_phi_reg_pp6_iter0_t_4_2_reg_1110 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_4_3_reg_1220() {
    ap_phi_reg_pp6_iter0_t_4_3_reg_1220 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_4_4_reg_1330() {
    ap_phi_reg_pp6_iter0_t_4_4_reg_1330 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_4_reg_890() {
    ap_phi_reg_pp6_iter0_t_4_reg_890 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_5_1_reg_1022() {
    ap_phi_reg_pp6_iter0_t_5_1_reg_1022 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_5_2_reg_1132() {
    ap_phi_reg_pp6_iter0_t_5_2_reg_1132 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_5_3_reg_1242() {
    ap_phi_reg_pp6_iter0_t_5_3_reg_1242 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_5_4_reg_1352() {
    ap_phi_reg_pp6_iter0_t_5_4_reg_1352 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_phi_reg_pp6_iter0_t_5_reg_912() {
    ap_phi_reg_pp6_iter0_t_5_reg_912 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void bilateralFilterKernel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_2_fu_1945_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void bilateralFilterKernel::thread_ap_sig_ioackin_gaussian_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gaussian_ARREADY.read())) {
        ap_sig_ioackin_gaussian_ARREADY = gaussian_ARREADY.read();
    } else {
        ap_sig_ioackin_gaussian_ARREADY = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_ap_sig_ioackin_out_r_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_out_r_AWREADY.read())) {
        ap_sig_ioackin_out_r_AWREADY = out_r_AWREADY.read();
    } else {
        ap_sig_ioackin_out_r_AWREADY = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_ap_sig_ioackin_out_r_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_out_r_WREADY.read())) {
        ap_sig_ioackin_out_r_WREADY = out_r_WREADY.read();
    } else {
        ap_sig_ioackin_out_r_WREADY = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_ap_sig_ioackin_pad_depth_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) {
        ap_sig_ioackin_pad_depth_ARREADY = pad_depth_ARREADY.read();
    } else {
        ap_sig_ioackin_pad_depth_ARREADY = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_depthsize_x_fu_1872_p2() {
    depthsize_x_fu_1872_p2 = (!size_x_read_reg_2635.read().is_01() || !ap_const_lv32_4.is_01())? sc_lv<32>(): (sc_bigint<32>(size_x_read_reg_2635.read()) + sc_biguint<32>(ap_const_lv32_4));
}

void bilateralFilterKernel::thread_exitcond1_fu_1978_p2() {
    exitcond1_fu_1978_p2 = (!ap_phi_mux_indvar2_phi_fu_744_p4.read().is_01() || !ap_const_lv9_144.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar2_phi_fu_744_p4.read() == ap_const_lv9_144);
}

void bilateralFilterKernel::thread_exitcond2_fu_2015_p2() {
    exitcond2_fu_2015_p2 = (!ap_phi_mux_indvar4_phi_fu_756_p4.read().is_01() || !ap_const_lv9_144.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar4_phi_fu_756_p4.read() == ap_const_lv9_144);
}

void bilateralFilterKernel::thread_exitcond3_fu_2052_p2() {
    exitcond3_fu_2052_p2 = (!ap_phi_mux_indvar6_phi_fu_768_p4.read().is_01() || !ap_const_lv9_144.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar6_phi_fu_768_p4.read() == ap_const_lv9_144);
}

void bilateralFilterKernel::thread_exitcond4_fu_2143_p2() {
    exitcond4_fu_2143_p2 = (!ap_phi_mux_val_x_phi_fu_804_p4.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_val_x_phi_fu_804_p4.read() == ap_const_lv9_140);
}

void bilateralFilterKernel::thread_exitcond5_fu_2089_p2() {
    exitcond5_fu_2089_p2 = (!ap_phi_mux_indvar8_phi_fu_780_p4.read().is_01() || !ap_const_lv9_144.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar8_phi_fu_780_p4.read() == ap_const_lv9_144);
}

void bilateralFilterKernel::thread_exitcond6_fu_2126_p2() {
    exitcond6_fu_2126_p2 = (!ap_phi_mux_indvar10_phi_fu_792_p4.read().is_01() || !ap_const_lv9_144.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar10_phi_fu_792_p4.read() == ap_const_lv9_144);
}

void bilateralFilterKernel::thread_exitcond7_fu_2588_p2() {
    exitcond7_fu_2588_p2 = (!indvar12_reg_1363.read().is_01() || !tmp_35_reg_2817.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar12_reg_1363.read() == tmp_35_reg_2817.read());
}

void bilateralFilterKernel::thread_exitcond9_fu_1877_p2() {
    exitcond9_fu_1877_p2 = (!ap_phi_mux_indvar_phi_fu_722_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_722_p4.read() == ap_const_lv3_5);
}

void bilateralFilterKernel::thread_gaussian_ARADDR() {
    gaussian_ARADDR =  (sc_lv<32>) (tmp_4_fu_1856_p1.read());
}

void bilateralFilterKernel::thread_gaussian_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_gaussian_ARREADY.read()))) {
        gaussian_ARVALID = ap_const_logic_1;
    } else {
        gaussian_ARVALID = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_gaussian_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        gaussian_RREADY = ap_const_logic_1;
    } else {
        gaussian_RREADY = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_gaussian_array_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        gaussian_array_address0 =  (sc_lv<3>) (tmp_14_4_fu_1933_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        gaussian_array_address0 =  (sc_lv<3>) (tmp_14_2_fu_1914_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        gaussian_array_address0 =  (sc_lv<3>) (tmp_8_fu_1899_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        gaussian_array_address0 =  (sc_lv<3>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        gaussian_array_address0 =  (sc_lv<3>) (ap_const_lv64_0);
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        gaussian_array_address0 =  (sc_lv<3>) (indvar1_fu_1889_p1.read());
    } else {
        gaussian_array_address0 = "XXX";
    }
}

void bilateralFilterKernel::thread_gaussian_array_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        gaussian_array_address1 =  (sc_lv<3>) (tmp_14_3_fu_1923_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        gaussian_array_address1 =  (sc_lv<3>) (tmp_14_1_fu_1909_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        gaussian_array_address1 =  (sc_lv<3>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        gaussian_array_address1 =  (sc_lv<3>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        gaussian_array_address1 =  (sc_lv<3>) (ap_const_lv64_1);
    } else {
        gaussian_array_address1 = "XXX";
    }
}

void bilateralFilterKernel::thread_gaussian_array_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())))) {
        gaussian_array_ce0 = ap_const_logic_1;
    } else {
        gaussian_array_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_gaussian_array_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        gaussian_array_ce1 = ap_const_logic_1;
    } else {
        gaussian_array_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_gaussian_array_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682_pp0_iter1_reg.read()))) {
        gaussian_array_we0 = ap_const_logic_1;
    } else {
        gaussian_array_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_gaussian_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        gaussian_blk_n_AR = m_axi_gaussian_ARREADY.read();
    } else {
        gaussian_blk_n_AR = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_gaussian_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_2682.read()))) {
        gaussian_blk_n_R = m_axi_gaussian_RVALID.read();
    } else {
        gaussian_blk_n_R = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_grp_fu_1374_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1374_p0 = pad_depth_array_4_lo_3_reg_3242_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1374_p0 = pad_depth_array_3_lo_1_reg_3186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1374_p0 = pad_depth_array_1_lo_reg_3073.read();
    } else {
        grp_fu_1374_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1374_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1374_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1374_p1 = center_reg_3058.read();
    } else {
        grp_fu_1374_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1378_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1378_p0 = pad_depth_array_5_lo_3_reg_3249_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1378_p0 = pad_depth_array_1_lo_2_reg_3193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1378_p0 = pad_depth_array_2_lo_reg_3080.read();
    } else {
        grp_fu_1378_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1378_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1378_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1378_p1 = center_reg_3058.read();
    } else {
        grp_fu_1378_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1382_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1382_p0 = pad_depth_array_1_lo_4_reg_3281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1382_p0 = pad_depth_array_2_lo_2_reg_3200.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1382_p0 = pad_depth_array_3_lo_reg_3087.read();
    } else {
        grp_fu_1382_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1382_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1382_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1382_p1 = center_reg_3058.read();
    } else {
        grp_fu_1382_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1386_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1386_p0 = pad_depth_array_2_lo_4_reg_3288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1386_p0 = pad_depth_array_4_lo_2_reg_3207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1386_p0 = pad_depth_array_4_lo_reg_3094.read();
    } else {
        grp_fu_1386_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1386_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1386_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1386_p1 = center_reg_3058.read();
    } else {
        grp_fu_1386_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1390_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1390_p0 = pad_depth_array_3_lo_3_reg_3295.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1390_p0 = pad_depth_array_5_lo_2_reg_3214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1390_p0 = pad_depth_array_5_lo_reg_3101.read();
    } else {
        grp_fu_1390_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1390_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1390_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1390_p1 = center_reg_3058.read();
    } else {
        grp_fu_1390_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1394_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1394_p0 = pad_depth_array_4_lo_4_reg_3302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1394_p0 = pad_depth_array_1_lo_3_reg_3221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1394_p0 = pad_depth_array_1_lo_1_reg_3108.read();
    } else {
        grp_fu_1394_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1394_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1394_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1394_p1 = center_reg_3058.read();
    } else {
        grp_fu_1394_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1398_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1398_p0 = pad_depth_array_5_lo_4_reg_3309.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1398_p0 = pad_depth_array_2_lo_3_reg_3228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1398_p0 = pad_depth_array_2_lo_1_reg_3115.read();
    } else {
        grp_fu_1398_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1398_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1398_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1398_p1 = center_reg_3058.read();
    } else {
        grp_fu_1398_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1402_opcode() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_00001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_1725_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter1_reg.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_00001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_1730_p2.read())))) {
        grp_fu_1402_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter28_reg.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0_00001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_reg_3320_pp6_iter28_reg.read()))) {
        grp_fu_1402_opcode = ap_const_lv2_0;
    } else {
        grp_fu_1402_opcode =  (sc_lv<2>) ("XX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1402_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1402_p0 = ap_phi_reg_pp6_iter29_t_1_reg_823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1402_p0 = pad_depth_array_3_lo_2_reg_3235.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1402_p0 = pad_depth_array_4_lo_1_reg_3127.read();
    } else {
        grp_fu_1402_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1402_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1402_p1 = tmp_18_reg_4215.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1402_p1 = center_reg_3058_pp6_iter1_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1402_p1 = center_reg_3058.read();
    } else {
        grp_fu_1402_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1406_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1_00001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, grp_fu_1730_p2.read()))) {
        grp_fu_1406_opcode = ap_const_lv2_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter28_reg.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0_00001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, tmp_14_reg_3320_pp6_iter28_reg.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter32_reg.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2_00001.read(), ap_const_boolean_0) && 
                 esl_seteq<1,1,1>(ap_const_lv1_1, tmp_19_reg_3324_pp6_iter32_reg.read())))) {
        grp_fu_1406_opcode = ap_const_lv2_0;
    } else {
        grp_fu_1406_opcode =  (sc_lv<2>) ("XX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1406_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1406_p0 = ap_phi_reg_pp6_iter32_t_2_reg_846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1406_p0 = ap_phi_reg_pp6_iter29_sum_1_reg_811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1406_p0 = pad_depth_array_5_lo_1_reg_3134.read();
    } else {
        grp_fu_1406_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1406_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1406_p1 = tmp_23_reg_4220_pp6_iter32_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter29.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1406_p1 = factor_1_reg_4072_pp6_iter28_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1406_p1 = center_reg_3058.read();
    } else {
        grp_fu_1406_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1413_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter40.read()))) {
        grp_fu_1413_p0 = ap_phi_reg_pp6_iter40_t_4_reg_890.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1413_p0 = ap_phi_reg_pp6_iter36_t_3_reg_868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1413_p0 = ap_phi_reg_pp6_iter32_sum_2_reg_835.read();
    } else {
        grp_fu_1413_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1413_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter40.read()))) {
        grp_fu_1413_p1 = tmp_33_reg_4230_pp6_iter39_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1413_p1 = tmp_28_reg_4225_pp6_iter35_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter32.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1413_p1 = factor_2_reg_4078_pp6_iter32_reg.read();
    } else {
        grp_fu_1413_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1419_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter43.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1419_p0 = ap_phi_reg_pp6_iter43_t_5_reg_912.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter40.read()))) {
        grp_fu_1419_p0 = ap_phi_reg_pp6_iter40_sum_4_reg_879.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1419_p0 = ap_phi_reg_pp6_iter36_sum_3_reg_857.read();
    } else {
        grp_fu_1419_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1419_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter43.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1419_p1 = tmp_19_1_reg_4235_pp6_iter43_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter40.read()))) {
        grp_fu_1419_p1 = factor_4_reg_4090_pp6_iter39_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1419_p1 = factor_3_reg_4084_pp6_iter35_reg.read();
    } else {
        grp_fu_1419_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1427_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter51.read()))) {
        grp_fu_1427_p0 = ap_phi_reg_pp6_iter51_t_2_1_reg_956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter47.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1427_p0 = ap_phi_reg_pp6_iter47_t_1_1_reg_934.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1427_p0 = ap_phi_reg_pp6_iter43_sum_5_reg_901.read();
    } else {
        grp_fu_1427_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1427_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter51.read()))) {
        grp_fu_1427_p1 = tmp_39_1_reg_4245_pp6_iter50_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter47.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1427_p1 = tmp_29_1_reg_4240_pp6_iter46_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter43.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1427_p1 = factor_s_reg_4096_pp6_iter43_reg.read();
    } else {
        grp_fu_1427_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1433_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1433_p0 = ap_phi_reg_pp6_iter54_t_3_1_reg_978.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter51.read()))) {
        grp_fu_1433_p0 = ap_phi_reg_pp6_iter51_sum_2_1_reg_945.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter47.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1433_p0 = ap_phi_reg_pp6_iter47_sum_1_1_reg_923.read();
    } else {
        grp_fu_1433_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1433_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1433_p1 = tmp_49_1_reg_4250_pp6_iter53_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter51.read()))) {
        grp_fu_1433_p1 = factor_2_1_reg_4114_pp6_iter50_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter47.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1433_p1 = factor_1_1_reg_4102_pp6_iter46_reg.read();
    } else {
        grp_fu_1433_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1441_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter62.read()))) {
        grp_fu_1441_p0 = ap_phi_reg_pp6_iter62_t_5_1_reg_1022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter58.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1441_p0 = ap_phi_reg_pp6_iter58_t_4_1_reg_1000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter54.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1441_p0 = ap_phi_reg_pp6_iter54_sum_3_1_reg_967.read();
    } else {
        grp_fu_1441_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1441_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter62.read()))) {
        grp_fu_1441_p1 = tmp_19_2_reg_4260_pp6_iter61_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter58.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1441_p1 = tmp_59_1_reg_4255_pp6_iter57_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter54.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1441_p1 = factor_3_1_reg_4108_pp6_iter54_reg.read();
    } else {
        grp_fu_1441_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1447_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter65.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1447_p0 = ap_phi_reg_pp6_iter65_t_1_2_reg_1044.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter62.read()))) {
        grp_fu_1447_p0 = ap_phi_reg_pp6_iter62_sum_5_1_reg_1011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter58.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1447_p0 = ap_phi_reg_pp6_iter58_sum_4_1_reg_989.read();
    } else {
        grp_fu_1447_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1447_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter65.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1447_p1 = tmp_29_2_reg_4265_pp6_iter64_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter62.read()))) {
        grp_fu_1447_p1 = factor_5_reg_4126_pp6_iter61_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter58.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1447_p1 = factor_4_1_reg_4120_pp6_iter57_reg.read();
    } else {
        grp_fu_1447_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1455_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter73.read()))) {
        grp_fu_1455_p0 = ap_phi_reg_pp6_iter73_t_3_2_reg_1088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter69.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1455_p0 = ap_phi_reg_pp6_iter69_t_2_2_reg_1066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter65.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1455_p0 = ap_phi_reg_pp6_iter65_sum_1_2_reg_1033.read();
    } else {
        grp_fu_1455_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1455_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter73.read()))) {
        grp_fu_1455_p1 = tmp_49_2_reg_4270_pp6_iter72_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter69.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1455_p1 = tmp_39_2_reg_3701_pp6_iter68_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter65.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1455_p1 = factor_1_2_reg_4132_pp6_iter64_reg.read();
    } else {
        grp_fu_1455_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1461_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter76.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1461_p0 = ap_phi_reg_pp6_iter76_t_4_2_reg_1110.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter73.read()))) {
        grp_fu_1461_p0 = ap_phi_reg_pp6_iter73_sum_3_2_reg_1077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter69.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1461_p0 = ap_phi_reg_pp6_iter69_sum_2_2_reg_1055.read();
    } else {
        grp_fu_1461_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1461_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter76.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1461_p1 = tmp_59_2_reg_4275_pp6_iter75_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter73.read()))) {
        grp_fu_1461_p1 = factor_3_2_reg_4138_pp6_iter72_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter69.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1461_p1 = factor_2_2_reg_3695_pp6_iter68_reg.read();
    } else {
        grp_fu_1461_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1469_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter84.read()))) {
        grp_fu_1469_p0 = ap_phi_reg_pp6_iter84_t_1_3_reg_1154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter80.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1469_p0 = ap_phi_reg_pp6_iter80_t_5_2_reg_1132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter76.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1469_p0 = ap_phi_reg_pp6_iter76_sum_4_2_reg_1099.read();
    } else {
        grp_fu_1469_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1469_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter84.read()))) {
        grp_fu_1469_p1 = tmp_29_3_reg_4285_pp6_iter83_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter80.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1469_p1 = tmp_19_3_reg_4280_pp6_iter79_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter76.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1469_p1 = factor_4_2_reg_4144_pp6_iter75_reg.read();
    } else {
        grp_fu_1469_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1475_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter87.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1475_p0 = ap_phi_reg_pp6_iter87_t_2_3_reg_1176.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter84.read()))) {
        grp_fu_1475_p0 = ap_phi_reg_pp6_iter84_sum_1_3_reg_1143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter80.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1475_p0 = ap_phi_reg_pp6_iter80_sum_5_2_reg_1121.read();
    } else {
        grp_fu_1475_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1475_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter87.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1475_p1 = tmp_39_3_reg_4290_pp6_iter87_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter84.read()))) {
        grp_fu_1475_p1 = factor_1_3_reg_4156_pp6_iter83_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter80.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1475_p1 = factor_6_reg_4150_pp6_iter79_reg.read();
    } else {
        grp_fu_1475_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1483_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter95.read()))) {
        grp_fu_1483_p0 = ap_phi_reg_pp6_iter95_t_4_3_reg_1220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter91.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1483_p0 = ap_phi_reg_pp6_iter91_t_3_3_reg_1198.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter87.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1483_p0 = ap_phi_reg_pp6_iter87_sum_2_3_reg_1165.read();
    } else {
        grp_fu_1483_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1483_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter95.read()))) {
        grp_fu_1483_p1 = tmp_59_3_reg_4300_pp6_iter94_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter91.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1483_p1 = tmp_49_3_reg_4295_pp6_iter91_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter87.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1483_p1 = factor_2_3_reg_4162_pp6_iter87_reg.read();
    } else {
        grp_fu_1483_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1489_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter98.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1489_p0 = ap_phi_reg_pp6_iter98_t_5_3_reg_1242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter95.read()))) {
        grp_fu_1489_p0 = ap_phi_reg_pp6_iter95_sum_4_3_reg_1209.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter91.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1489_p0 = ap_phi_reg_pp6_iter91_sum_3_3_reg_1187.read();
    } else {
        grp_fu_1489_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1489_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter98.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1489_p1 = tmp_19_4_reg_4305_pp6_iter98_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter95.read()))) {
        grp_fu_1489_p1 = factor_4_3_reg_4174_pp6_iter94_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter91.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1489_p1 = factor_3_3_reg_4168_pp6_iter91_reg.read();
    } else {
        grp_fu_1489_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1497_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter106.read()))) {
        grp_fu_1497_p0 = ap_phi_reg_pp6_iter106_t_2_4_reg_1286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter102.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1497_p0 = ap_phi_reg_pp6_iter102_t_1_4_reg_1264.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter98.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1497_p0 = ap_phi_reg_pp6_iter98_sum_5_3_reg_1231.read();
    } else {
        grp_fu_1497_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1497_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter106.read()))) {
        grp_fu_1497_p1 = tmp_39_4_reg_4315_pp6_iter105_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter102.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1497_p1 = tmp_29_4_reg_4310_pp6_iter102_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter98.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1497_p1 = factor_7_reg_4180_pp6_iter98_reg.read();
    } else {
        grp_fu_1497_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1503_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter109.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1503_p0 = ap_phi_reg_pp6_iter109_t_3_4_reg_1308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter106.read()))) {
        grp_fu_1503_p0 = ap_phi_reg_pp6_iter106_sum_2_4_reg_1275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter102.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1503_p0 = ap_phi_reg_pp6_iter102_sum_1_4_reg_1253.read();
    } else {
        grp_fu_1503_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1503_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter109.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1503_p1 = tmp_49_4_reg_4320_pp6_iter109_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter106.read()))) {
        grp_fu_1503_p1 = factor_2_4_reg_4192_pp6_iter105_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter102.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1503_p1 = factor_1_4_reg_4186_pp6_iter102_reg.read();
    } else {
        grp_fu_1503_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1511_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter114.read()))) {
        grp_fu_1511_p0 = sum_4_4_reg_1319.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter113.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1511_p0 = ap_phi_reg_pp6_iter113_t_4_4_reg_1330.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter109.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1511_p0 = ap_phi_reg_pp6_iter109_sum_3_4_reg_1297.read();
    } else {
        grp_fu_1511_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1511_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter114.read()))) {
        grp_fu_1511_p1 = factor_4_4_reg_4204_pp6_iter113_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter113.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1511_p1 = tmp_59_4_reg_4325_pp6_iter113_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter109.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1511_p1 = factor_3_4_reg_4198_pp6_iter109_reg.read();
    } else {
        grp_fu_1511_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1518_ce() {
    if (((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_gaussian_ARREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()))) {
        grp_fu_1518_ce = ap_const_logic_1;
    } else {
        grp_fu_1518_ce = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_grp_fu_1518_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1518_p0 = r_assign_16_reg_3518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1518_p0 = r_assign_7_reg_3470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1518_p0 = r_assign_reg_3416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_fu_1518_p0 = reg_1780.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1518_p0 = e_d_read_reg_2629.read();
    } else {
        grp_fu_1518_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1518_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1518_p1 = r_assign_16_reg_3518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1518_p1 = r_assign_7_reg_3470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1518_p1 = r_assign_reg_3416.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        grp_fu_1518_p1 = e_d_read_reg_2629.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        grp_fu_1518_p1 = ap_const_lv32_40000000;
    } else {
        grp_fu_1518_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1523_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1523_p0 = r_assign_17_reg_3524.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1523_p0 = r_assign_s_reg_3476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1523_p0 = r_assign_1_reg_3422.read();
    } else {
        grp_fu_1523_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1523_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1523_p1 = r_assign_17_reg_3524.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1523_p1 = r_assign_s_reg_3476.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1523_p1 = r_assign_1_reg_3422.read();
    } else {
        grp_fu_1523_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1527_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1527_p0 = r_assign_18_reg_3530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1527_p0 = r_assign_10_reg_3482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1527_p0 = r_assign_2_reg_3428.read();
    } else {
        grp_fu_1527_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1527_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1527_p1 = r_assign_18_reg_3530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1527_p1 = r_assign_10_reg_3482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1527_p1 = r_assign_2_reg_3428.read();
    } else {
        grp_fu_1527_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1531_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1531_p0 = r_assign_19_reg_3536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1531_p0 = r_assign_11_reg_3488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1531_p0 = r_assign_3_reg_3434.read();
    } else {
        grp_fu_1531_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1531_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1531_p1 = r_assign_19_reg_3536.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1531_p1 = r_assign_11_reg_3488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1531_p1 = r_assign_3_reg_3434.read();
    } else {
        grp_fu_1531_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1535_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1535_p0 = r_assign_20_reg_3542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1535_p0 = r_assign_12_reg_3494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1535_p0 = r_assign_4_reg_3440.read();
    } else {
        grp_fu_1535_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1535_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1535_p1 = r_assign_20_reg_3542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1535_p1 = r_assign_12_reg_3494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1535_p1 = r_assign_4_reg_3440.read();
    } else {
        grp_fu_1535_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1539_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1539_p0 = r_assign_21_reg_3548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1539_p0 = r_assign_13_reg_3500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1539_p0 = r_assign_5_reg_3446.read();
    } else {
        grp_fu_1539_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1539_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1539_p1 = r_assign_21_reg_3548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1539_p1 = r_assign_13_reg_3500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1539_p1 = r_assign_5_reg_3446.read();
    } else {
        grp_fu_1539_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1543_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1543_p0 = r_assign_22_reg_3554.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1543_p0 = r_assign_14_reg_3506.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1543_p0 = r_assign_6_reg_3452.read();
    } else {
        grp_fu_1543_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1543_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1543_p1 = r_assign_22_reg_3554.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1543_p1 = r_assign_14_reg_3506.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1543_p1 = r_assign_6_reg_3452.read();
    } else {
        grp_fu_1543_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1547_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1547_p0 = gaussian_array_load_2_reg_2734.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1547_p0 = r_assign_15_reg_3512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1547_p0 = r_assign_8_reg_3458.read();
    } else {
        grp_fu_1547_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1547_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1547_p1 = tmp_38_3_reg_3906.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1547_p1 = r_assign_15_reg_3512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1547_p1 = r_assign_8_reg_3458.read();
    } else {
        grp_fu_1547_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1551_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1551_p0 = gaussian_array_load_3_reg_2742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter8.read()))) {
        grp_fu_1551_p0 = gaussian_array_load_2_reg_2734.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1551_p0 = r_assign_9_reg_3464.read();
    } else {
        grp_fu_1551_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1551_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1551_p1 = tmp_48_3_reg_3911.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter8.read()))) {
        grp_fu_1551_p1 = tmp_38_2_reg_3685.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1551_p1 = r_assign_9_reg_3464.read();
    } else {
        grp_fu_1551_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1555_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1555_p0 = gaussian_array_load_4_reg_2761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1555_p0 = gaussian_array_load_reg_2706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter10.read()))) {
        grp_fu_1555_p0 = tmp14_reg_3690.read();
    } else {
        grp_fu_1555_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1555_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1555_p1 = tmp_58_3_reg_3916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1555_p1 = tmp_12_reg_3826.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter10.read()))) {
        grp_fu_1555_p1 = gaussian_array_load_7_reg_2808.read();
    } else {
        grp_fu_1555_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1559_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1559_p0 = gaussian_array_load_reg_2706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1559_p0 = gaussian_array_load_1_reg_2715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter12.read()))) {
        grp_fu_1559_p0 = center_reg_3058_pp6_iter11_reg.read();
    } else {
        grp_fu_1559_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1559_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1559_p1 = tmp_18_4_reg_3921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1559_p1 = tmp_17_reg_3831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter12.read()))) {
        grp_fu_1559_p1 = factor_2_2_reg_3695.read();
    } else {
        grp_fu_1559_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1563_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1563_p0 = gaussian_array_load_1_reg_2715.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0)))) {
        grp_fu_1563_p0 = gaussian_array_load_2_reg_2734.read();
    } else {
        grp_fu_1563_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1563_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1563_p1 = tmp_28_4_reg_3926.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1563_p1 = tmp_38_1_reg_3871.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1563_p1 = tmp_22_reg_3836.read();
    } else {
        grp_fu_1563_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1567_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1567_p0 = gaussian_array_load_2_reg_2734.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1567_p0 = gaussian_array_load_reg_2706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1567_p0 = gaussian_array_load_3_reg_2742.read();
    } else {
        grp_fu_1567_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1567_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1567_p1 = tmp_38_4_reg_3931.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1567_p1 = tmp_18_2_reg_3876.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1567_p1 = tmp_27_reg_3841.read();
    } else {
        grp_fu_1567_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1571_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1571_p0 = gaussian_array_load_3_reg_2742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1571_p0 = gaussian_array_load_1_reg_2715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1571_p0 = gaussian_array_load_4_reg_2761.read();
    } else {
        grp_fu_1571_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1571_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1571_p1 = tmp_48_4_reg_3936.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1571_p1 = tmp_28_2_reg_3881.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1571_p1 = tmp_32_reg_3846.read();
    } else {
        grp_fu_1571_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1575_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1575_p0 = gaussian_array_load_4_reg_2761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1575_p0 = gaussian_array_load_3_reg_2742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1575_p0 = gaussian_array_load_reg_2706.read();
    } else {
        grp_fu_1575_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1575_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1575_p1 = tmp_58_4_reg_3941.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1575_p1 = tmp_48_2_reg_3886.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1575_p1 = tmp_18_1_reg_3851.read();
    } else {
        grp_fu_1575_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1579_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1579_p0 = tmp18_reg_4021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1579_p0 = gaussian_array_load_4_reg_2761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1579_p0 = gaussian_array_load_1_reg_2715.read();
    } else {
        grp_fu_1579_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1579_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1579_p1 = gaussian_array_load_8_reg_2827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1579_p1 = tmp_58_2_reg_3891.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1579_p1 = tmp_28_1_reg_3856.read();
    } else {
        grp_fu_1579_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1583_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1583_p0 = tmp19_reg_4026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1583_p0 = gaussian_array_load_reg_2706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1583_p0 = gaussian_array_load_3_reg_2742.read();
    } else {
        grp_fu_1583_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1583_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1583_p1 = gaussian_array_load_8_reg_2827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1583_p1 = tmp_18_3_reg_3896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1583_p1 = tmp_48_1_reg_3861.read();
    } else {
        grp_fu_1583_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1587_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1587_p0 = tmp20_reg_4031.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1587_p0 = gaussian_array_load_1_reg_2715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1587_p0 = gaussian_array_load_4_reg_2761.read();
    } else {
        grp_fu_1587_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1587_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1587_p1 = gaussian_array_load_8_reg_2827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter23.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1587_p1 = tmp_28_3_reg_3901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter22.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1587_p1 = tmp_58_1_reg_3866.read();
    } else {
        grp_fu_1587_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1591_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1591_p0 = tmp21_reg_4036.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1591_p0 = tmp9_reg_3991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1591_p0 = tmp2_reg_3946.read();
    } else {
        grp_fu_1591_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1591_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1591_p1 = gaussian_array_load_8_reg_2827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1591_p1 = gaussian_array_load_6_reg_2799.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1591_p1 = gaussian_array_load_5_reg_2780.read();
    } else {
        grp_fu_1591_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1595_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1595_p0 = tmp22_reg_4041.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1595_p0 = tmp11_reg_3986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1595_p0 = tmp3_reg_3951.read();
    } else {
        grp_fu_1595_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1595_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1595_p1 = gaussian_array_load_9_reg_2836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1595_p1 = gaussian_array_load_6_reg_2799.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1595_p1 = gaussian_array_load_5_reg_2780.read();
    } else {
        grp_fu_1595_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1599_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1599_p0 = tmp23_reg_4046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1599_p0 = tmp12_reg_3996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1599_p0 = tmp4_reg_3956.read();
    } else {
        grp_fu_1599_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1599_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1599_p1 = gaussian_array_load_9_reg_2836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1599_p1 = gaussian_array_load_7_reg_2808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1599_p1 = gaussian_array_load_5_reg_2780.read();
    } else {
        grp_fu_1599_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1603_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1603_p0 = tmp24_reg_4051.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1603_p0 = tmp13_reg_4001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1603_p0 = tmp5_reg_3961.read();
    } else {
        grp_fu_1603_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1603_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1603_p1 = gaussian_array_load_9_reg_2836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1603_p1 = gaussian_array_load_7_reg_2808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1603_p1 = gaussian_array_load_5_reg_2780.read();
    } else {
        grp_fu_1603_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1607_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1607_p0 = tmp25_reg_4056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1607_p0 = tmp15_reg_4006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1607_p0 = tmp6_reg_3966.read();
    } else {
        grp_fu_1607_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1607_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1607_p1 = gaussian_array_load_9_reg_2836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1607_p1 = gaussian_array_load_7_reg_2808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1607_p1 = gaussian_array_load_5_reg_2780.read();
    } else {
        grp_fu_1607_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1611_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1611_p0 = tmp26_reg_4061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1611_p0 = tmp16_reg_4011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1611_p0 = tmp7_reg_3971.read();
    } else {
        grp_fu_1611_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1611_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1611_p1 = gaussian_array_load_9_reg_2836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1611_p1 = gaussian_array_load_7_reg_2808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1611_p1 = gaussian_array_load_6_reg_2799.read();
    } else {
        grp_fu_1611_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1615_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1615_p0 = pad_depth_array_2_lo_3_reg_3228_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1615_p0 = tmp17_reg_4016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1615_p0 = tmp8_reg_3976.read();
    } else {
        grp_fu_1615_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1615_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1615_p1 = factor_1_3_reg_4156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter25.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1615_p1 = gaussian_array_load_8_reg_2827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1615_p1 = gaussian_array_load_6_reg_2799.read();
    } else {
        grp_fu_1615_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1619_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1619_p0 = pad_depth_array_3_lo_2_reg_3235_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1619_p0 = pad_depth_array_3_lo_1_reg_3186_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1619_p0 = tmp10_reg_3981.read();
    } else {
        grp_fu_1619_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1619_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1619_p1 = factor_2_3_reg_4162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1619_p1 = factor_2_1_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter24.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1619_p1 = gaussian_array_load_6_reg_2799.read();
    } else {
        grp_fu_1619_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1623_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1623_p0 = pad_depth_array_4_lo_3_reg_3242_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1623_p0 = pad_depth_array_4_lo_1_reg_3127_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1623_p0 = pad_depth_array_1_lo_reg_3073_pp6_iter26_reg.read();
    } else {
        grp_fu_1623_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1623_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1623_p1 = factor_3_3_reg_4168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1623_p1 = factor_3_1_reg_4108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1623_p1 = factor_reg_4066.read();
    } else {
        grp_fu_1623_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1627_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1627_p0 = pad_depth_array_5_lo_3_reg_3249_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1627_p0 = pad_depth_array_5_lo_1_reg_3134_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1627_p0 = pad_depth_array_2_lo_reg_3080_pp6_iter26_reg.read();
    } else {
        grp_fu_1627_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1627_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1627_p1 = factor_4_3_reg_4174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1627_p1 = factor_4_1_reg_4120.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1627_p1 = factor_1_reg_4072.read();
    } else {
        grp_fu_1627_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1631_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1631_p0 = pad_depth_array_1_lo_4_reg_3281_pp6_iter27_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1631_p0 = pad_depth_array_1_lo_2_reg_3193_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1631_p0 = pad_depth_array_3_lo_reg_3087_pp6_iter26_reg.read();
    } else {
        grp_fu_1631_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1631_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1631_p1 = factor_7_reg_4180.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1631_p1 = factor_5_reg_4126.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1631_p1 = factor_2_reg_4078.read();
    } else {
        grp_fu_1631_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1635_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1635_p0 = pad_depth_array_2_lo_4_reg_3288_pp6_iter27_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1635_p0 = pad_depth_array_2_lo_2_reg_3200_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1635_p0 = pad_depth_array_4_lo_reg_3094_pp6_iter26_reg.read();
    } else {
        grp_fu_1635_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1635_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1635_p1 = factor_1_4_reg_4186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1635_p1 = factor_1_2_reg_4132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1635_p1 = factor_3_reg_4084.read();
    } else {
        grp_fu_1635_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1639_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1639_p0 = pad_depth_array_3_lo_3_reg_3295_pp6_iter27_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1639_p0 = pad_depth_array_4_lo_2_reg_3207_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1639_p0 = pad_depth_array_5_lo_reg_3101_pp6_iter26_reg.read();
    } else {
        grp_fu_1639_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1639_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1639_p1 = factor_2_4_reg_4192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1639_p1 = factor_3_2_reg_4138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1639_p1 = factor_4_reg_4090.read();
    } else {
        grp_fu_1639_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1643_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1643_p0 = pad_depth_array_4_lo_4_reg_3302_pp6_iter27_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1643_p0 = pad_depth_array_5_lo_2_reg_3214_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1643_p0 = pad_depth_array_1_lo_1_reg_3108_pp6_iter26_reg.read();
    } else {
        grp_fu_1643_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1643_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1643_p1 = factor_3_4_reg_4198.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1643_p1 = factor_4_2_reg_4144.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1643_p1 = factor_s_reg_4096.read();
    } else {
        grp_fu_1643_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1647_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1647_p0 = pad_depth_array_5_lo_4_reg_3309_pp6_iter27_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1647_p0 = pad_depth_array_1_lo_3_reg_3221_pp6_iter26_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1647_p0 = pad_depth_array_2_lo_1_reg_3115_pp6_iter26_reg.read();
    } else {
        grp_fu_1647_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1647_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1647_p1 = factor_4_4_reg_4204.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter27.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1647_p1 = factor_6_reg_4150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter26.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1647_p1 = factor_1_1_reg_4102.read();
    } else {
        grp_fu_1647_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1651_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1651_p0 = tmp_46_3_fu_2475_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1651_p0 = tmp_36_1_fu_2355_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1651_p0 = tmp_10_fu_2221_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        grp_fu_1651_p0 = ap_const_lv32_80000000;
    } else {
        grp_fu_1651_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1656_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1656_p0 = tmp_56_3_fu_2490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1656_p0 = tmp_16_2_fu_2370_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1656_p0 = tmp_15_fu_2236_p1.read();
    } else {
        grp_fu_1656_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1660_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1660_p0 = tmp_16_4_fu_2505_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1660_p0 = tmp_26_2_fu_2385_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1660_p0 = tmp_20_fu_2251_p1.read();
    } else {
        grp_fu_1660_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1664_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1664_p0 = tmp_26_4_fu_2520_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1664_p0 = tmp_46_2_fu_2400_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1664_p0 = tmp_25_fu_2266_p1.read();
    } else {
        grp_fu_1664_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1668_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1668_p0 = tmp_36_4_fu_2535_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1668_p0 = tmp_56_2_fu_2415_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1668_p0 = tmp_30_fu_2281_p1.read();
    } else {
        grp_fu_1668_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1672_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1672_p0 = tmp_46_4_fu_2550_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1672_p0 = tmp_16_3_fu_2430_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1672_p0 = tmp_16_1_fu_2296_p1.read();
    } else {
        grp_fu_1672_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1676_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1676_p0 = tmp_56_4_fu_2565_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1676_p0 = tmp_26_3_fu_2445_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1676_p0 = tmp_26_1_fu_2311_p1.read();
    } else {
        grp_fu_1676_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1680_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1680_p0 = tmp_36_3_fu_2460_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1680_p0 = tmp_46_1_fu_2326_p1.read();
    } else {
        grp_fu_1680_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1684_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter118.read()))) {
        grp_fu_1684_p0 = t_5_4_reg_1352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1684_p0 = tmp_56_1_fu_2340_p1.read();
    } else {
        grp_fu_1684_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1684_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter118.read()))) {
        grp_fu_1684_p1 = sum_5_4_reg_1341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1684_p1 = reg_1780.read();
    } else {
        grp_fu_1684_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1690_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1690_p0 = pad_depth_array_4_lo_3_reg_3242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1690_p0 = pad_depth_array_3_lo_1_reg_3186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1690_p0 = pad_depth_array_1_lo_reg_3073.read();
    } else {
        grp_fu_1690_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1695_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1695_p0 = pad_depth_array_5_lo_3_reg_3249.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1695_p0 = pad_depth_array_1_lo_2_reg_3193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1695_p0 = pad_depth_array_2_lo_reg_3080.read();
    } else {
        grp_fu_1695_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1700_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1700_p0 = pad_depth_array_1_lo_4_reg_3281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1700_p0 = pad_depth_array_2_lo_2_reg_3200.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1700_p0 = pad_depth_array_3_lo_reg_3087.read();
    } else {
        grp_fu_1700_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1705_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1705_p0 = pad_depth_array_2_lo_4_reg_3288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1705_p0 = center_reg_3058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1705_p0 = pad_depth_array_4_lo_reg_3094.read();
    } else {
        grp_fu_1705_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1710_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1710_p0 = pad_depth_array_3_lo_3_reg_3295.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1710_p0 = pad_depth_array_4_lo_2_reg_3207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1710_p0 = pad_depth_array_5_lo_reg_3101.read();
    } else {
        grp_fu_1710_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1715_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1715_p0 = pad_depth_array_4_lo_4_reg_3302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1715_p0 = pad_depth_array_5_lo_2_reg_3214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1715_p0 = pad_depth_array_1_lo_1_reg_3108.read();
    } else {
        grp_fu_1715_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1720_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1720_p0 = pad_depth_array_5_lo_4_reg_3309.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1720_p0 = pad_depth_array_1_lo_3_reg_3221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1720_p0 = pad_depth_array_2_lo_1_reg_3115.read();
    } else {
        grp_fu_1720_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1725_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1725_p0 = pad_depth_array_2_lo_3_reg_3228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1725_p0 = pad_depth_array_4_lo_1_reg_3127.read();
    } else {
        grp_fu_1725_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1730_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1730_p0 = pad_depth_array_3_lo_2_reg_3235.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1730_p0 = pad_depth_array_5_lo_1_reg_3134.read();
    } else {
        grp_fu_1730_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1735_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1735_p1 = tmp_47_3_reg_3791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1735_p1 = tmp_11_reg_3706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1735_p1 = tmp_37_2_reg_2845.read();
    } else {
        grp_fu_1735_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1740_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1740_p1 = tmp_57_3_reg_3796.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1740_p1 = tmp_37_1_reg_3751.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1740_p1 = tmp_16_reg_3711.read();
    } else {
        grp_fu_1740_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1745_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1745_p1 = tmp_17_4_reg_3801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1745_p1 = tmp_17_2_reg_3756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1745_p1 = tmp_21_reg_3716.read();
    } else {
        grp_fu_1745_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1750_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1750_p1 = tmp_27_4_reg_3806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1750_p1 = tmp_27_2_reg_3761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1750_p1 = tmp_26_reg_3721.read();
    } else {
        grp_fu_1750_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1755_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1755_p1 = tmp_37_4_reg_3811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1755_p1 = tmp_47_2_reg_3766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1755_p1 = tmp_31_reg_3726.read();
    } else {
        grp_fu_1755_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1760_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1760_p1 = tmp_47_4_reg_3816.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1760_p1 = tmp_57_2_reg_3771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1760_p1 = tmp_17_1_reg_3731.read();
    } else {
        grp_fu_1760_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1765_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        grp_fu_1765_p1 = tmp_57_4_reg_3821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1765_p1 = tmp_17_3_reg_3776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1765_p1 = tmp_27_1_reg_3736.read();
    } else {
        grp_fu_1765_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1770_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1770_p1 = tmp_27_3_reg_3781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1770_p1 = tmp_47_1_reg_3741.read();
    } else {
        grp_fu_1770_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_grp_fu_1775_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        grp_fu_1775_p1 = tmp_37_3_reg_3786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter16.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_1775_p1 = tmp_57_1_reg_3746.read();
    } else {
        grp_fu_1775_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_indvar11_fu_2138_p1() {
    indvar11_fu_2138_p1 = esl_zext<64,9>(indvar10_reg_788_pp5_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar13_fu_2599_p1() {
    indvar13_fu_2599_p1 = esl_zext<64,30>(indvar12_reg_1363.read());
}

void bilateralFilterKernel::thread_indvar1_fu_1889_p1() {
    indvar1_fu_1889_p1 = esl_zext<64,3>(indvar_reg_718_pp0_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar3_fu_1990_p1() {
    indvar3_fu_1990_p1 = esl_zext<64,9>(indvar2_reg_740_pp1_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar5_fu_2027_p1() {
    indvar5_fu_2027_p1 = esl_zext<64,9>(indvar4_reg_752_pp2_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar7_fu_2064_p1() {
    indvar7_fu_2064_p1 = esl_zext<64,9>(indvar6_reg_764_pp3_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar9_fu_2101_p1() {
    indvar9_fu_2101_p1 = esl_zext<64,9>(indvar8_reg_776_pp4_iter1_reg.read());
}

void bilateralFilterKernel::thread_indvar_next1_fu_1984_p2() {
    indvar_next1_fu_1984_p2 = (!ap_phi_mux_indvar2_phi_fu_744_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_indvar2_phi_fu_744_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_indvar_next2_fu_2021_p2() {
    indvar_next2_fu_2021_p2 = (!ap_phi_mux_indvar4_phi_fu_756_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_indvar4_phi_fu_756_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_indvar_next3_fu_2058_p2() {
    indvar_next3_fu_2058_p2 = (!ap_phi_mux_indvar6_phi_fu_768_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_indvar6_phi_fu_768_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_indvar_next4_fu_2095_p2() {
    indvar_next4_fu_2095_p2 = (!ap_phi_mux_indvar8_phi_fu_780_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_indvar8_phi_fu_780_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_indvar_next5_fu_2132_p2() {
    indvar_next5_fu_2132_p2 = (!ap_phi_mux_indvar10_phi_fu_792_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_indvar10_phi_fu_792_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_indvar_next6_fu_2593_p2() {
    indvar_next6_fu_2593_p2 = (!indvar12_reg_1363.read().is_01() || !ap_const_lv30_1.is_01())? sc_lv<30>(): (sc_biguint<30>(indvar12_reg_1363.read()) + sc_biguint<30>(ap_const_lv30_1));
}

void bilateralFilterKernel::thread_indvar_next_fu_1883_p2() {
    indvar_next_fu_1883_p2 = (!ap_phi_mux_indvar_phi_fu_722_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(ap_phi_mux_indvar_phi_fu_722_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void bilateralFilterKernel::thread_out2_sum_cast_fu_2578_p1() {
    out2_sum_cast_fu_2578_p1 = esl_zext<64,33>(out2_sum_fu_2573_p2.read());
}

void bilateralFilterKernel::thread_out2_sum_fu_2573_p2() {
    out2_sum_fu_2573_p2 = (!tmp_5_cast_fu_2570_p1.read().is_01() || !tmp_36_cast_reg_2672.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_5_cast_fu_2570_p1.read()) + sc_biguint<33>(tmp_36_cast_reg_2672.read()));
}

void bilateralFilterKernel::thread_out_array_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()))) {
        out_array_address0 =  (sc_lv<9>) (indvar13_fu_2599_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter128.read()))) {
        out_array_address0 =  (sc_lv<9>) (tmp_1_reg_2993_pp6_iter127_reg.read());
    } else {
        out_array_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_out_array_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter128.read())))) {
        out_array_ce0 = ap_const_logic_1;
    } else {
        out_array_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_out_array_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_2971_pp6_iter127_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter128.read()))) {
        out_array_we0 = ap_const_logic_1;
    } else {
        out_array_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_out_r_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_out_r_AWREADY.read()))) {
        out_r_AWVALID = ap_const_logic_1;
    } else {
        out_r_AWVALID = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_out_r_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read()) && 
         esl_seteq<1,1,1>(out_r_BVALID.read(), ap_const_logic_1))) {
        out_r_BREADY = ap_const_logic_1;
    } else {
        out_r_BREADY = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_out_r_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter2.read()) && 
         esl_seteq<1,1,1>(exitcond7_reg_4581_pp7_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_out_r_WREADY.read()))) {
        out_r_WVALID = ap_const_logic_1;
    } else {
        out_r_WVALID = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_out_r_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state491.read())) {
        out_r_blk_n_AW = m_axi_out_r_AWREADY.read();
    } else {
        out_r_blk_n_AW = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_out_r_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state499.read())) {
        out_r_blk_n_B = m_axi_out_r_BVALID.read();
    } else {
        out_r_blk_n_B = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_out_r_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond7_reg_4581_pp7_iter1_reg.read(), ap_const_lv1_0))) {
        out_r_blk_n_W = m_axi_out_r_WREADY.read();
    } else {
        out_r_blk_n_W = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_p_i32_shr_cast_fu_1941_p1() {
    p_i32_shr_cast_fu_1941_p1 = esl_zext<32,30>(tmp_35_fu_1938_p1.read());
}

void bilateralFilterKernel::thread_p_sum1_fu_2032_p2() {
    p_sum1_fu_2032_p2 = (!tmp_4_cast_reg_2858.read().is_01() || !ap_const_lv33_288.is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_reg_2858.read()) + sc_biguint<33>(ap_const_lv33_288));
}

void bilateralFilterKernel::thread_p_sum2_fu_2069_p2() {
    p_sum2_fu_2069_p2 = (!tmp_4_cast_reg_2858.read().is_01() || !ap_const_lv33_3CC.is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_reg_2858.read()) + sc_biguint<33>(ap_const_lv33_3CC));
}

void bilateralFilterKernel::thread_p_sum3_fu_2106_p2() {
    p_sum3_fu_2106_p2 = (!tmp_4_cast_reg_2858.read().is_01() || !ap_const_lv33_510.is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_reg_2858.read()) + sc_biguint<33>(ap_const_lv33_510));
}

void bilateralFilterKernel::thread_p_sum_fu_1995_p2() {
    p_sum_fu_1995_p2 = (!tmp_4_cast_reg_2858.read().is_01() || !ap_const_lv33_144.is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_reg_2858.read()) + sc_biguint<33>(ap_const_lv33_144));
}

void bilateralFilterKernel::thread_pad_depth4_sum1_cast_fu_2042_p1() {
    pad_depth4_sum1_cast_fu_2042_p1 = esl_zext<64,33>(pad_depth4_sum1_fu_2037_p2.read());
}

void bilateralFilterKernel::thread_pad_depth4_sum1_fu_2037_p2() {
    pad_depth4_sum1_fu_2037_p2 = (!p_sum1_fu_2032_p2.read().is_01() || !tmp_35_cast_reg_2663.read().is_01())? sc_lv<33>(): (sc_biguint<33>(p_sum1_fu_2032_p2.read()) + sc_biguint<33>(tmp_35_cast_reg_2663.read()));
}

void bilateralFilterKernel::thread_pad_depth4_sum2_cast_fu_2079_p1() {
    pad_depth4_sum2_cast_fu_2079_p1 = esl_zext<64,33>(pad_depth4_sum2_fu_2074_p2.read());
}

void bilateralFilterKernel::thread_pad_depth4_sum2_fu_2074_p2() {
    pad_depth4_sum2_fu_2074_p2 = (!p_sum2_fu_2069_p2.read().is_01() || !tmp_35_cast_reg_2663.read().is_01())? sc_lv<33>(): (sc_biguint<33>(p_sum2_fu_2069_p2.read()) + sc_biguint<33>(tmp_35_cast_reg_2663.read()));
}

void bilateralFilterKernel::thread_pad_depth4_sum4_cast_fu_2116_p1() {
    pad_depth4_sum4_cast_fu_2116_p1 = esl_zext<64,33>(pad_depth4_sum4_fu_2111_p2.read());
}

void bilateralFilterKernel::thread_pad_depth4_sum4_fu_2111_p2() {
    pad_depth4_sum4_fu_2111_p2 = (!p_sum3_fu_2106_p2.read().is_01() || !tmp_35_cast_reg_2663.read().is_01())? sc_lv<33>(): (sc_biguint<33>(p_sum3_fu_2106_p2.read()) + sc_biguint<33>(tmp_35_cast_reg_2663.read()));
}

void bilateralFilterKernel::thread_pad_depth4_sum8_cast_fu_2005_p1() {
    pad_depth4_sum8_cast_fu_2005_p1 = esl_zext<64,33>(pad_depth4_sum8_fu_2000_p2.read());
}

void bilateralFilterKernel::thread_pad_depth4_sum8_fu_2000_p2() {
    pad_depth4_sum8_fu_2000_p2 = (!p_sum_fu_1995_p2.read().is_01() || !tmp_35_cast_reg_2663.read().is_01())? sc_lv<33>(): (sc_biguint<33>(p_sum_fu_1995_p2.read()) + sc_biguint<33>(tmp_35_cast_reg_2663.read()));
}

void bilateralFilterKernel::thread_pad_depth4_sum_cast_fu_1963_p1() {
    pad_depth4_sum_cast_fu_1963_p1 = esl_zext<64,33>(pad_depth4_sum_fu_1958_p2.read());
}

void bilateralFilterKernel::thread_pad_depth4_sum_fu_1958_p2() {
    pad_depth4_sum_fu_1958_p2 = (!tmp_4_cast_fu_1955_p1.read().is_01() || !tmp_35_cast_reg_2663.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_fu_1955_p1.read()) + sc_biguint<33>(tmp_35_cast_reg_2663.read()));
}

void bilateralFilterKernel::thread_pad_depth_ARADDR() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
            pad_depth_ARADDR = pad_depth_addr_4_reg_2951.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read())) {
            pad_depth_ARADDR = pad_depth_addr_3_reg_2931.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read())) {
            pad_depth_ARADDR = pad_depth_addr_2_reg_2911.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
            pad_depth_ARADDR = pad_depth_addr_1_reg_2891.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
            pad_depth_ARADDR = pad_depth_addr_reg_2866.read();
        } else {
            pad_depth_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        pad_depth_ARADDR =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_ARVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_pad_depth_ARREADY.read())))) {
        pad_depth_ARVALID = ap_const_logic_1;
    } else {
        pad_depth_ARVALID = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_RREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)))) {
        pad_depth_RREADY = ap_const_logic_1;
    } else {
        pad_depth_RREADY = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        pad_depth_array_1_address0 =  (sc_lv<9>) (tmp_10_3_fu_2195_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        pad_depth_array_1_address0 =  (sc_lv<9>) (tmp_1_fu_2166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        pad_depth_array_1_address0 =  (sc_lv<9>) (indvar3_fu_1990_p1.read());
    } else {
        pad_depth_array_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
            pad_depth_array_1_address1 =  (sc_lv<9>) (tmp_10_4_fu_2203_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
            pad_depth_array_1_address1 =  (sc_lv<9>) (tmp_7_reg_2980.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
            pad_depth_array_1_address1 =  (sc_lv<9>) (tmp_10_1_fu_2175_p1.read());
        } else {
            pad_depth_array_1_address1 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        pad_depth_array_1_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        pad_depth_array_1_ce0 = ap_const_logic_1;
    } else {
        pad_depth_array_1_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())))) {
        pad_depth_array_1_ce1 = ap_const_logic_1;
    } else {
        pad_depth_array_1_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_1_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877_pp1_iter1_reg.read()))) {
        pad_depth_array_1_we0 = ap_const_logic_1;
    } else {
        pad_depth_array_1_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        pad_depth_array_2_address0 =  (sc_lv<9>) (tmp_10_3_fu_2195_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        pad_depth_array_2_address0 =  (sc_lv<9>) (tmp_1_fu_2166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        pad_depth_array_2_address0 =  (sc_lv<9>) (indvar5_fu_2027_p1.read());
    } else {
        pad_depth_array_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
            pad_depth_array_2_address1 =  (sc_lv<9>) (tmp_10_4_fu_2203_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
            pad_depth_array_2_address1 =  (sc_lv<9>) (tmp_7_reg_2980.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
            pad_depth_array_2_address1 =  (sc_lv<9>) (tmp_10_1_fu_2175_p1.read());
        } else {
            pad_depth_array_2_address1 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        pad_depth_array_2_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        pad_depth_array_2_ce0 = ap_const_logic_1;
    } else {
        pad_depth_array_2_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())))) {
        pad_depth_array_2_ce1 = ap_const_logic_1;
    } else {
        pad_depth_array_2_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_2_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897_pp2_iter1_reg.read()))) {
        pad_depth_array_2_we0 = ap_const_logic_1;
    } else {
        pad_depth_array_2_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        pad_depth_array_3_address0 =  (sc_lv<9>) (tmp_10_3_fu_2195_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        pad_depth_array_3_address0 =  (sc_lv<9>) (tmp_7_fu_2161_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        pad_depth_array_3_address0 =  (sc_lv<9>) (indvar7_fu_2064_p1.read());
    } else {
        pad_depth_array_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
            pad_depth_array_3_address1 =  (sc_lv<9>) (tmp_10_4_fu_2203_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
            pad_depth_array_3_address1 =  (sc_lv<9>) (tmp_10_1_reg_3023.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
            pad_depth_array_3_address1 =  (sc_lv<9>) (tmp_1_fu_2166_p1.read());
        } else {
            pad_depth_array_3_address1 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        pad_depth_array_3_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        pad_depth_array_3_ce0 = ap_const_logic_1;
    } else {
        pad_depth_array_3_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())))) {
        pad_depth_array_3_ce1 = ap_const_logic_1;
    } else {
        pad_depth_array_3_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_3_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917_pp3_iter1_reg.read()))) {
        pad_depth_array_3_we0 = ap_const_logic_1;
    } else {
        pad_depth_array_3_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        pad_depth_array_4_address0 =  (sc_lv<9>) (tmp_10_3_fu_2195_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        pad_depth_array_4_address0 =  (sc_lv<9>) (tmp_1_fu_2166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()))) {
        pad_depth_array_4_address0 =  (sc_lv<9>) (indvar9_fu_2101_p1.read());
    } else {
        pad_depth_array_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
            pad_depth_array_4_address1 =  (sc_lv<9>) (tmp_10_4_fu_2203_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
            pad_depth_array_4_address1 =  (sc_lv<9>) (tmp_7_reg_2980.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
            pad_depth_array_4_address1 =  (sc_lv<9>) (tmp_10_1_fu_2175_p1.read());
        } else {
            pad_depth_array_4_address1 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        pad_depth_array_4_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read())))) {
        pad_depth_array_4_ce0 = ap_const_logic_1;
    } else {
        pad_depth_array_4_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())))) {
        pad_depth_array_4_ce1 = ap_const_logic_1;
    } else {
        pad_depth_array_4_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_4_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937_pp4_iter1_reg.read()))) {
        pad_depth_array_4_we0 = ap_const_logic_1;
    } else {
        pad_depth_array_4_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
        pad_depth_array_5_address0 =  (sc_lv<9>) (tmp_10_3_fu_2195_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        pad_depth_array_5_address0 =  (sc_lv<9>) (tmp_1_fu_2166_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()))) {
        pad_depth_array_5_address0 =  (sc_lv<9>) (indvar11_fu_2138_p1.read());
    } else {
        pad_depth_array_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
            pad_depth_array_5_address1 =  (sc_lv<9>) (tmp_10_4_fu_2203_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage1.read(), ap_const_boolean_0))) {
            pad_depth_array_5_address1 =  (sc_lv<9>) (tmp_7_reg_2980.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
            pad_depth_array_5_address1 =  (sc_lv<9>) (tmp_10_1_fu_2175_p1.read());
        } else {
            pad_depth_array_5_address1 =  (sc_lv<9>) ("XXXXXXXXX");
        }
    } else {
        pad_depth_array_5_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bilateralFilterKernel::thread_pad_depth_array_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read())))) {
        pad_depth_array_5_ce0 = ap_const_logic_1;
    } else {
        pad_depth_array_5_ce0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp6_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage1_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())))) {
        pad_depth_array_5_ce1 = ap_const_logic_1;
    } else {
        pad_depth_array_5_ce1 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_array_5_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957_pp5_iter1_reg.read()))) {
        pad_depth_array_5_we0 = ap_const_logic_1;
    } else {
        pad_depth_array_5_we0 = ap_const_logic_0;
    }
}

void bilateralFilterKernel::thread_pad_depth_blk_n_AR() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state72.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state83.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()))) {
        pad_depth_blk_n_AR = m_axi_pad_depth_ARREADY.read();
    } else {
        pad_depth_blk_n_AR = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_pad_depth_blk_n_R() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_2877.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_reg_2897.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_2917.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_2937.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_2957.read())))) {
        pad_depth_blk_n_R = m_axi_pad_depth_RVALID.read();
    } else {
        pad_depth_blk_n_R = ap_const_logic_1;
    }
}

void bilateralFilterKernel::thread_tmp_10_1_fu_2175_p1() {
    tmp_10_1_fu_2175_p1 = esl_zext<64,9>(x_fu_2149_p2.read());
}

void bilateralFilterKernel::thread_tmp_10_3_fu_2195_p1() {
    tmp_10_3_fu_2195_p1 = esl_zext<64,9>(val_x_3_reg_3048.read());
}

void bilateralFilterKernel::thread_tmp_10_4_fu_2203_p1() {
    tmp_10_4_fu_2203_p1 = esl_zext<64,9>(val_x_4_reg_3053.read());
}

void bilateralFilterKernel::thread_tmp_10_fu_2221_p1() {
    tmp_10_fu_2221_p1 = tmp_16_neg_fu_2215_p2.read();
}

void bilateralFilterKernel::thread_tmp_13_1_fu_1904_p2() {
    tmp_13_1_fu_1904_p2 = (!ap_const_lv32_FFFFFFFF.is_01() || !r_read_reg_2620.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFF) + sc_bigint<32>(r_read_reg_2620.read()));
}

void bilateralFilterKernel::thread_tmp_13_3_fu_1918_p2() {
    tmp_13_3_fu_1918_p2 = (!ap_const_lv32_1.is_01() || !r_read_reg_2620.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_bigint<32>(r_read_reg_2620.read()));
}

void bilateralFilterKernel::thread_tmp_13_4_fu_1928_p2() {
    tmp_13_4_fu_1928_p2 = (!ap_const_lv32_2.is_01() || !r_read_reg_2620.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2) + sc_bigint<32>(r_read_reg_2620.read()));
}

void bilateralFilterKernel::thread_tmp_14_1_fu_1909_p1() {
    tmp_14_1_fu_1909_p1 = esl_sext<64,32>(tmp_13_1_fu_1904_p2.read());
}

void bilateralFilterKernel::thread_tmp_14_2_fu_1914_p1() {
    tmp_14_2_fu_1914_p1 = esl_sext<64,32>(r_read_reg_2620.read());
}

void bilateralFilterKernel::thread_tmp_14_3_fu_1923_p1() {
    tmp_14_3_fu_1923_p1 = esl_sext<64,32>(tmp_13_3_fu_1918_p2.read());
}

void bilateralFilterKernel::thread_tmp_14_4_fu_1933_p1() {
    tmp_14_4_fu_1933_p1 = esl_sext<64,32>(tmp_13_4_fu_1928_p2.read());
}

void bilateralFilterKernel::thread_tmp_15_fu_2236_p1() {
    tmp_15_fu_2236_p1 = tmp_26_neg_fu_2230_p2.read();
}

void bilateralFilterKernel::thread_tmp_16_1_fu_2296_p1() {
    tmp_16_1_fu_2296_p1 = tmp_16_neg_1_fu_2290_p2.read();
}

void bilateralFilterKernel::thread_tmp_16_2_fu_2370_p1() {
    tmp_16_2_fu_2370_p1 = tmp_16_neg_2_fu_2364_p2.read();
}

void bilateralFilterKernel::thread_tmp_16_3_fu_2430_p1() {
    tmp_16_3_fu_2430_p1 = tmp_16_neg_3_fu_2424_p2.read();
}

void bilateralFilterKernel::thread_tmp_16_4_fu_2505_p1() {
    tmp_16_4_fu_2505_p1 = tmp_16_neg_4_fu_2499_p2.read();
}

void bilateralFilterKernel::thread_tmp_16_neg_1_fu_2290_p2() {
    tmp_16_neg_1_fu_2290_p2 = (tmp_16_to_int_1_fu_2286_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_16_neg_2_fu_2364_p2() {
    tmp_16_neg_2_fu_2364_p2 = (tmp_16_to_int_2_fu_2360_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_16_neg_3_fu_2424_p2() {
    tmp_16_neg_3_fu_2424_p2 = (tmp_16_to_int_3_fu_2420_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_16_neg_4_fu_2499_p2() {
    tmp_16_neg_4_fu_2499_p2 = (tmp_16_to_int_4_fu_2495_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_16_neg_fu_2215_p2() {
    tmp_16_neg_fu_2215_p2 = (tmp_16_to_int_fu_2211_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_16_to_int_1_fu_2286_p1() {
    tmp_16_to_int_1_fu_2286_p1 = reg_1814.read();
}

void bilateralFilterKernel::thread_tmp_16_to_int_2_fu_2360_p1() {
    tmp_16_to_int_2_fu_2360_p1 = reg_1798.read();
}

void bilateralFilterKernel::thread_tmp_16_to_int_3_fu_2420_p1() {
    tmp_16_to_int_3_fu_2420_p1 = reg_1814.read();
}

void bilateralFilterKernel::thread_tmp_16_to_int_4_fu_2495_p1() {
    tmp_16_to_int_4_fu_2495_p1 = reg_1802.read();
}

void bilateralFilterKernel::thread_tmp_16_to_int_fu_2211_p1() {
    tmp_16_to_int_fu_2211_p1 = reg_1794.read();
}

void bilateralFilterKernel::thread_tmp_1_fu_2166_p1() {
    tmp_1_fu_2166_p1 = esl_zext<64,9>(ap_phi_mux_val_x_phi_fu_804_p4.read());
}

void bilateralFilterKernel::thread_tmp_20_fu_2251_p1() {
    tmp_20_fu_2251_p1 = tmp_36_neg_fu_2245_p2.read();
}

void bilateralFilterKernel::thread_tmp_25_fu_2266_p1() {
    tmp_25_fu_2266_p1 = tmp_46_neg_fu_2260_p2.read();
}

void bilateralFilterKernel::thread_tmp_26_1_fu_2311_p1() {
    tmp_26_1_fu_2311_p1 = tmp_26_neg_1_fu_2305_p2.read();
}

void bilateralFilterKernel::thread_tmp_26_2_fu_2385_p1() {
    tmp_26_2_fu_2385_p1 = tmp_26_neg_2_fu_2379_p2.read();
}

void bilateralFilterKernel::thread_tmp_26_3_fu_2445_p1() {
    tmp_26_3_fu_2445_p1 = tmp_26_neg_3_fu_2439_p2.read();
}

void bilateralFilterKernel::thread_tmp_26_4_fu_2520_p1() {
    tmp_26_4_fu_2520_p1 = tmp_26_neg_4_fu_2514_p2.read();
}

void bilateralFilterKernel::thread_tmp_26_neg_1_fu_2305_p2() {
    tmp_26_neg_1_fu_2305_p2 = (tmp_26_to_int_1_fu_2301_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_26_neg_2_fu_2379_p2() {
    tmp_26_neg_2_fu_2379_p2 = (tmp_26_to_int_2_fu_2375_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_26_neg_3_fu_2439_p2() {
    tmp_26_neg_3_fu_2439_p2 = (tmp_26_to_int_3_fu_2435_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_26_neg_4_fu_2514_p2() {
    tmp_26_neg_4_fu_2514_p2 = (tmp_26_to_int_4_fu_2510_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_26_neg_fu_2230_p2() {
    tmp_26_neg_fu_2230_p2 = (tmp_26_to_int_fu_2226_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_26_to_int_1_fu_2301_p1() {
    tmp_26_to_int_1_fu_2301_p1 = reg_1818.read();
}

void bilateralFilterKernel::thread_tmp_26_to_int_2_fu_2375_p1() {
    tmp_26_to_int_2_fu_2375_p1 = reg_1802.read();
}

void bilateralFilterKernel::thread_tmp_26_to_int_3_fu_2435_p1() {
    tmp_26_to_int_3_fu_2435_p1 = reg_1818.read();
}

void bilateralFilterKernel::thread_tmp_26_to_int_4_fu_2510_p1() {
    tmp_26_to_int_4_fu_2510_p1 = reg_1806.read();
}

void bilateralFilterKernel::thread_tmp_26_to_int_fu_2226_p1() {
    tmp_26_to_int_fu_2226_p1 = reg_1798.read();
}

void bilateralFilterKernel::thread_tmp_2_fu_1945_p2() {
    tmp_2_fu_1945_p2 = (!y_reg_730.read().is_01() || !end_read_reg_2610.read().is_01())? sc_lv<1>(): (sc_biguint<32>(y_reg_730.read()) < sc_biguint<32>(end_read_reg_2610.read()));
}

void bilateralFilterKernel::thread_tmp_30_fu_2281_p1() {
    tmp_30_fu_2281_p1 = tmp_56_neg_fu_2275_p2.read();
}

void bilateralFilterKernel::thread_tmp_35_cast_fu_1866_p1() {
    tmp_35_cast_fu_1866_p1 = esl_zext<33,30>(tmp_5_reg_2647.read());
}

void bilateralFilterKernel::thread_tmp_35_fu_1938_p1() {
    tmp_35_fu_1938_p1 = size_x_read_reg_2635.read().range(30-1, 0);
}

void bilateralFilterKernel::thread_tmp_36_1_fu_2355_p1() {
    tmp_36_1_fu_2355_p1 = tmp_36_neg_1_fu_2349_p2.read();
}

void bilateralFilterKernel::thread_tmp_36_3_fu_2460_p1() {
    tmp_36_3_fu_2460_p1 = tmp_36_neg_3_fu_2454_p2.read();
}

void bilateralFilterKernel::thread_tmp_36_4_fu_2535_p1() {
    tmp_36_4_fu_2535_p1 = tmp_36_neg_4_fu_2529_p2.read();
}

void bilateralFilterKernel::thread_tmp_36_cast_fu_1869_p1() {
    tmp_36_cast_fu_1869_p1 = esl_zext<33,30>(tmp_34_reg_2652.read());
}

void bilateralFilterKernel::thread_tmp_36_neg_1_fu_2349_p2() {
    tmp_36_neg_1_fu_2349_p2 = (tmp_36_to_int_1_fu_2345_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_36_neg_3_fu_2454_p2() {
    tmp_36_neg_3_fu_2454_p2 = (tmp_36_to_int_3_fu_2450_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_36_neg_4_fu_2529_p2() {
    tmp_36_neg_4_fu_2529_p2 = (tmp_36_to_int_4_fu_2525_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_36_neg_fu_2245_p2() {
    tmp_36_neg_fu_2245_p2 = (tmp_36_to_int_fu_2241_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_36_to_int_1_fu_2345_p1() {
    tmp_36_to_int_1_fu_2345_p1 = reg_1794.read();
}

void bilateralFilterKernel::thread_tmp_36_to_int_3_fu_2450_p1() {
    tmp_36_to_int_3_fu_2450_p1 = reg_1822.read();
}

void bilateralFilterKernel::thread_tmp_36_to_int_4_fu_2525_p1() {
    tmp_36_to_int_4_fu_2525_p1 = reg_1810.read();
}

void bilateralFilterKernel::thread_tmp_36_to_int_fu_2241_p1() {
    tmp_36_to_int_fu_2241_p1 = reg_1802.read();
}

void bilateralFilterKernel::thread_tmp_46_1_fu_2326_p1() {
    tmp_46_1_fu_2326_p1 = tmp_46_neg_1_fu_2320_p2.read();
}

void bilateralFilterKernel::thread_tmp_46_2_fu_2400_p1() {
    tmp_46_2_fu_2400_p1 = tmp_46_neg_2_fu_2394_p2.read();
}

void bilateralFilterKernel::thread_tmp_46_3_fu_2475_p1() {
    tmp_46_3_fu_2475_p1 = tmp_46_neg_3_fu_2469_p2.read();
}

void bilateralFilterKernel::thread_tmp_46_4_fu_2550_p1() {
    tmp_46_4_fu_2550_p1 = tmp_46_neg_4_fu_2544_p2.read();
}

void bilateralFilterKernel::thread_tmp_46_neg_1_fu_2320_p2() {
    tmp_46_neg_1_fu_2320_p2 = (tmp_46_to_int_1_fu_2316_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_46_neg_2_fu_2394_p2() {
    tmp_46_neg_2_fu_2394_p2 = (tmp_46_to_int_2_fu_2390_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_46_neg_3_fu_2469_p2() {
    tmp_46_neg_3_fu_2469_p2 = (tmp_46_to_int_3_fu_2465_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_46_neg_4_fu_2544_p2() {
    tmp_46_neg_4_fu_2544_p2 = (tmp_46_to_int_4_fu_2540_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_46_neg_fu_2260_p2() {
    tmp_46_neg_fu_2260_p2 = (tmp_46_to_int_fu_2256_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_46_to_int_1_fu_2316_p1() {
    tmp_46_to_int_1_fu_2316_p1 = reg_1822.read();
}

void bilateralFilterKernel::thread_tmp_46_to_int_2_fu_2390_p1() {
    tmp_46_to_int_2_fu_2390_p1 = reg_1806.read();
}

void bilateralFilterKernel::thread_tmp_46_to_int_3_fu_2465_p1() {
    tmp_46_to_int_3_fu_2465_p1 = reg_1794.read();
}

void bilateralFilterKernel::thread_tmp_46_to_int_4_fu_2540_p1() {
    tmp_46_to_int_4_fu_2540_p1 = reg_1814.read();
}

void bilateralFilterKernel::thread_tmp_46_to_int_fu_2256_p1() {
    tmp_46_to_int_fu_2256_p1 = reg_1806.read();
}

void bilateralFilterKernel::thread_tmp_4_cast_fu_1955_p1() {
    tmp_4_cast_fu_1955_p1 = esl_zext<33,32>(tmp_3_reg_2853.read());
}

void bilateralFilterKernel::thread_tmp_4_fu_1856_p1() {
    tmp_4_fu_1856_p1 = esl_zext<64,30>(gaussian_offset5_reg_2642.read());
}

void bilateralFilterKernel::thread_tmp_56_1_fu_2340_p1() {
    tmp_56_1_fu_2340_p1 = tmp_56_neg_1_fu_2334_p2.read();
}

void bilateralFilterKernel::thread_tmp_56_2_fu_2415_p1() {
    tmp_56_2_fu_2415_p1 = tmp_56_neg_2_fu_2409_p2.read();
}

void bilateralFilterKernel::thread_tmp_56_3_fu_2490_p1() {
    tmp_56_3_fu_2490_p1 = tmp_56_neg_3_fu_2484_p2.read();
}

void bilateralFilterKernel::thread_tmp_56_4_fu_2565_p1() {
    tmp_56_4_fu_2565_p1 = tmp_56_neg_4_fu_2559_p2.read();
}

void bilateralFilterKernel::thread_tmp_56_neg_1_fu_2334_p2() {
    tmp_56_neg_1_fu_2334_p2 = (tmp_56_to_int_1_fu_2331_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_56_neg_2_fu_2409_p2() {
    tmp_56_neg_2_fu_2409_p2 = (tmp_56_to_int_2_fu_2405_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_56_neg_3_fu_2484_p2() {
    tmp_56_neg_3_fu_2484_p2 = (tmp_56_to_int_3_fu_2480_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_56_neg_4_fu_2559_p2() {
    tmp_56_neg_4_fu_2559_p2 = (tmp_56_to_int_4_fu_2555_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_56_neg_fu_2275_p2() {
    tmp_56_neg_fu_2275_p2 = (tmp_56_to_int_fu_2271_p1.read() ^ ap_const_lv32_80000000);
}

void bilateralFilterKernel::thread_tmp_56_to_int_1_fu_2331_p1() {
    tmp_56_to_int_1_fu_2331_p1 = tmp_i9_reg_3560.read();
}

void bilateralFilterKernel::thread_tmp_56_to_int_2_fu_2405_p1() {
    tmp_56_to_int_2_fu_2405_p1 = reg_1810.read();
}

void bilateralFilterKernel::thread_tmp_56_to_int_3_fu_2480_p1() {
    tmp_56_to_int_3_fu_2480_p1 = reg_1798.read();
}

void bilateralFilterKernel::thread_tmp_56_to_int_4_fu_2555_p1() {
    tmp_56_to_int_4_fu_2555_p1 = reg_1818.read();
}

void bilateralFilterKernel::thread_tmp_56_to_int_fu_2271_p1() {
    tmp_56_to_int_fu_2271_p1 = reg_1810.read();
}

void bilateralFilterKernel::thread_tmp_5_cast_fu_2570_p1() {
    tmp_5_cast_fu_2570_p1 = esl_zext<33,32>(pos_reg_2872.read());
}

void bilateralFilterKernel::thread_tmp_7_fu_2161_p1() {
    tmp_7_fu_2161_p1 = esl_zext<64,9>(val_x_2_fu_2155_p2.read());
}

void bilateralFilterKernel::thread_tmp_8_fu_1899_p1() {
    tmp_8_fu_1899_p1 = esl_sext<64,32>(tmp_s_fu_1894_p2.read());
}

void bilateralFilterKernel::thread_tmp_s_fu_1894_p2() {
    tmp_s_fu_1894_p2 = (!ap_const_lv32_FFFFFFFE.is_01() || !r_read_reg_2620.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFE) + sc_bigint<32>(r_read_reg_2620.read()));
}

void bilateralFilterKernel::thread_val_x_2_fu_2155_p2() {
    val_x_2_fu_2155_p2 = (!ap_phi_mux_val_x_phi_fu_804_p4.read().is_01() || !ap_const_lv9_2.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_val_x_phi_fu_804_p4.read()) + sc_biguint<9>(ap_const_lv9_2));
}

void bilateralFilterKernel::thread_val_x_3_fu_2183_p2() {
    val_x_3_fu_2183_p2 = (!ap_phi_mux_val_x_phi_fu_804_p4.read().is_01() || !ap_const_lv9_3.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_val_x_phi_fu_804_p4.read()) + sc_biguint<9>(ap_const_lv9_3));
}

void bilateralFilterKernel::thread_val_x_4_fu_2189_p2() {
    val_x_4_fu_2189_p2 = (!ap_phi_mux_val_x_phi_fu_804_p4.read().is_01() || !ap_const_lv9_4.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_val_x_phi_fu_804_p4.read()) + sc_biguint<9>(ap_const_lv9_4));
}

void bilateralFilterKernel::thread_x_fu_2149_p2() {
    x_fu_2149_p2 = (!ap_phi_mux_val_x_phi_fu_804_p4.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_val_x_phi_fu_804_p4.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void bilateralFilterKernel::thread_y_1_fu_2604_p2() {
    y_1_fu_2604_p2 = (!y_reg_730.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(y_reg_730.read()) + sc_biguint<32>(ap_const_lv32_1));
}

}

