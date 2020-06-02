#include "integrateKernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void integrateKernel::thread_T_idx_fu_1124_p2() {
    T_idx_fu_1124_p2 = (!tmp_fu_1119_p2.read().is_01() || !tmp_45_fu_1116_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_fu_1119_p2.read()) * sc_bigint<32>(tmp_45_fu_1116_p1.read());
}

void integrateKernel::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[8];
}

void integrateKernel::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[22];
}

void integrateKernel::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[30];
}

void integrateKernel::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[32];
}

void integrateKernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void integrateKernel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void integrateKernel::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void integrateKernel::thread_ap_CS_fsm_state139() {
    ap_CS_fsm_state139 = ap_CS_fsm.read()[31];
}

void integrateKernel::thread_ap_CS_fsm_state143() {
    ap_CS_fsm_state143 = ap_CS_fsm.read()[33];
}

void integrateKernel::thread_ap_CS_fsm_state147() {
    ap_CS_fsm_state147 = ap_CS_fsm.read()[37];
}

void integrateKernel::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[12];
}

void integrateKernel::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[13];
}

void integrateKernel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void integrateKernel::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void integrateKernel::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[16];
}

void integrateKernel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void integrateKernel::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[17];
}

void integrateKernel::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[18];
}

void integrateKernel::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[21];
}

void integrateKernel::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[23];
}

void integrateKernel::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[24];
}

void integrateKernel::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[25];
}

void integrateKernel::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[26];
}

void integrateKernel::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[27];
}

void integrateKernel::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[28];
}

void integrateKernel::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[29];
}

void integrateKernel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void integrateKernel::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()) && esl_seteq<1,1,1>(ap_const_logic_0, depth_RVALID.read()));
}

void integrateKernel::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()) && esl_seteq<1,1,1>(ap_const_logic_0, depth_RVALID.read()));
}

void integrateKernel::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, vol_data_RVALID.read()));
}

void integrateKernel::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, vol_data_RVALID.read()));
}

void integrateKernel::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp2_stage0_00001() {
    ap_block_pp2_stage0_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp3_stage0_01001() {
    ap_block_pp3_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state142_io.read()));
}

void integrateKernel::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state142_io.read()));
}

void integrateKernel::thread_ap_block_state100_pp2_stage0_iter65() {
    ap_block_state100_pp2_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state101_pp2_stage0_iter66() {
    ap_block_state101_pp2_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state102_pp2_stage0_iter67() {
    ap_block_state102_pp2_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state103_pp2_stage0_iter68() {
    ap_block_state103_pp2_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state104_pp2_stage0_iter69() {
    ap_block_state104_pp2_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state105_pp2_stage0_iter70() {
    ap_block_state105_pp2_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state106_pp2_stage0_iter71() {
    ap_block_state106_pp2_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state107_pp2_stage0_iter72() {
    ap_block_state107_pp2_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state108_pp2_stage0_iter73() {
    ap_block_state108_pp2_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state109_pp2_stage0_iter74() {
    ap_block_state109_pp2_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()) && esl_seteq<1,1,1>(ap_const_logic_0, depth_RVALID.read()));
}

void integrateKernel::thread_ap_block_state110_pp2_stage0_iter75() {
    ap_block_state110_pp2_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state111_pp2_stage0_iter76() {
    ap_block_state111_pp2_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state112_pp2_stage0_iter77() {
    ap_block_state112_pp2_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state113_pp2_stage0_iter78() {
    ap_block_state113_pp2_stage0_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state114_pp2_stage0_iter79() {
    ap_block_state114_pp2_stage0_iter79 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state115_pp2_stage0_iter80() {
    ap_block_state115_pp2_stage0_iter80 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state116_pp2_stage0_iter81() {
    ap_block_state116_pp2_stage0_iter81 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state117_pp2_stage0_iter82() {
    ap_block_state117_pp2_stage0_iter82 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state118_pp2_stage0_iter83() {
    ap_block_state118_pp2_stage0_iter83 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state119_pp2_stage0_iter84() {
    ap_block_state119_pp2_stage0_iter84 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state11_pp0_stage0_iter2() {
    ap_block_state11_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state120_pp2_stage0_iter85() {
    ap_block_state120_pp2_stage0_iter85 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state121_pp2_stage0_iter86() {
    ap_block_state121_pp2_stage0_iter86 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state122_pp2_stage0_iter87() {
    ap_block_state122_pp2_stage0_iter87 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state123_pp2_stage0_iter88() {
    ap_block_state123_pp2_stage0_iter88 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state124_pp2_stage0_iter89() {
    ap_block_state124_pp2_stage0_iter89 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state125_pp2_stage0_iter90() {
    ap_block_state125_pp2_stage0_iter90 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state126_pp2_stage0_iter91() {
    ap_block_state126_pp2_stage0_iter91 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state127_pp2_stage0_iter92() {
    ap_block_state127_pp2_stage0_iter92 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state128_pp2_stage0_iter93() {
    ap_block_state128_pp2_stage0_iter93 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state129_pp2_stage0_iter94() {
    ap_block_state129_pp2_stage0_iter94 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state130_pp2_stage0_iter95() {
    ap_block_state130_pp2_stage0_iter95 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state131_pp2_stage0_iter96() {
    ap_block_state131_pp2_stage0_iter96 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state132_pp2_stage0_iter97() {
    ap_block_state132_pp2_stage0_iter97 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state133_pp2_stage0_iter98() {
    ap_block_state133_pp2_stage0_iter98 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state134_pp2_stage0_iter99() {
    ap_block_state134_pp2_stage0_iter99 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state135_pp2_stage0_iter100() {
    ap_block_state135_pp2_stage0_iter100 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state136_pp2_stage0_iter101() {
    ap_block_state136_pp2_stage0_iter101 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state137_pp2_stage0_iter102() {
    ap_block_state137_pp2_stage0_iter102 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state138_pp2_stage0_iter103() {
    ap_block_state138_pp2_stage0_iter103 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state140_pp3_stage0_iter0() {
    ap_block_state140_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state141_pp3_stage0_iter1() {
    ap_block_state141_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state142_io() {
    ap_block_state142_io = (esl_seteq<1,1,1>(exitcond2_reg_3428_pp3_iter1_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_vol_data_WREADY.read()));
}

void integrateKernel::thread_ap_block_state142_pp3_stage0_iter2() {
    ap_block_state142_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state25_pp1_stage0_iter0() {
    ap_block_state25_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state26_pp1_stage0_iter1() {
    ap_block_state26_pp1_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, vol_data_RVALID.read());
}

void integrateKernel::thread_ap_block_state27_pp1_stage0_iter2() {
    ap_block_state27_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state35_pp2_stage0_iter0() {
    ap_block_state35_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state36_pp2_stage0_iter1() {
    ap_block_state36_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state37_pp2_stage0_iter2() {
    ap_block_state37_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state38_pp2_stage0_iter3() {
    ap_block_state38_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state39_pp2_stage0_iter4() {
    ap_block_state39_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state40_pp2_stage0_iter5() {
    ap_block_state40_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state41_pp2_stage0_iter6() {
    ap_block_state41_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state42_pp2_stage0_iter7() {
    ap_block_state42_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state43_pp2_stage0_iter8() {
    ap_block_state43_pp2_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state44_pp2_stage0_iter9() {
    ap_block_state44_pp2_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state45_pp2_stage0_iter10() {
    ap_block_state45_pp2_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state46_pp2_stage0_iter11() {
    ap_block_state46_pp2_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state47_pp2_stage0_iter12() {
    ap_block_state47_pp2_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state48_pp2_stage0_iter13() {
    ap_block_state48_pp2_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state49_pp2_stage0_iter14() {
    ap_block_state49_pp2_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state50_pp2_stage0_iter15() {
    ap_block_state50_pp2_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state51_pp2_stage0_iter16() {
    ap_block_state51_pp2_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state52_pp2_stage0_iter17() {
    ap_block_state52_pp2_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state53_pp2_stage0_iter18() {
    ap_block_state53_pp2_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state54_pp2_stage0_iter19() {
    ap_block_state54_pp2_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state55_pp2_stage0_iter20() {
    ap_block_state55_pp2_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state56_pp2_stage0_iter21() {
    ap_block_state56_pp2_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state57_pp2_stage0_iter22() {
    ap_block_state57_pp2_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state58_pp2_stage0_iter23() {
    ap_block_state58_pp2_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state59_pp2_stage0_iter24() {
    ap_block_state59_pp2_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state60_pp2_stage0_iter25() {
    ap_block_state60_pp2_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state61_pp2_stage0_iter26() {
    ap_block_state61_pp2_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state62_pp2_stage0_iter27() {
    ap_block_state62_pp2_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state63_pp2_stage0_iter28() {
    ap_block_state63_pp2_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state64_pp2_stage0_iter29() {
    ap_block_state64_pp2_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state65_pp2_stage0_iter30() {
    ap_block_state65_pp2_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state66_pp2_stage0_iter31() {
    ap_block_state66_pp2_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state67_pp2_stage0_iter32() {
    ap_block_state67_pp2_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state68_pp2_stage0_iter33() {
    ap_block_state68_pp2_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state69_pp2_stage0_iter34() {
    ap_block_state69_pp2_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state70_pp2_stage0_iter35() {
    ap_block_state70_pp2_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state71_pp2_stage0_iter36() {
    ap_block_state71_pp2_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state72_pp2_stage0_iter37() {
    ap_block_state72_pp2_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state73_pp2_stage0_iter38() {
    ap_block_state73_pp2_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state74_pp2_stage0_iter39() {
    ap_block_state74_pp2_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state75_pp2_stage0_iter40() {
    ap_block_state75_pp2_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state76_pp2_stage0_iter41() {
    ap_block_state76_pp2_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state77_pp2_stage0_iter42() {
    ap_block_state77_pp2_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state78_pp2_stage0_iter43() {
    ap_block_state78_pp2_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state79_pp2_stage0_iter44() {
    ap_block_state79_pp2_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state80_pp2_stage0_iter45() {
    ap_block_state80_pp2_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state81_pp2_stage0_iter46() {
    ap_block_state81_pp2_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state82_pp2_stage0_iter47() {
    ap_block_state82_pp2_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state83_pp2_stage0_iter48() {
    ap_block_state83_pp2_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state84_pp2_stage0_iter49() {
    ap_block_state84_pp2_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state85_pp2_stage0_iter50() {
    ap_block_state85_pp2_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state86_pp2_stage0_iter51() {
    ap_block_state86_pp2_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state87_pp2_stage0_iter52() {
    ap_block_state87_pp2_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state88_pp2_stage0_iter53() {
    ap_block_state88_pp2_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state89_pp2_stage0_iter54() {
    ap_block_state89_pp2_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state90_pp2_stage0_iter55() {
    ap_block_state90_pp2_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state91_pp2_stage0_iter56() {
    ap_block_state91_pp2_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state92_pp2_stage0_iter57() {
    ap_block_state92_pp2_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state93_pp2_stage0_iter58() {
    ap_block_state93_pp2_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state94_pp2_stage0_iter59() {
    ap_block_state94_pp2_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state95_pp2_stage0_iter60() {
    ap_block_state95_pp2_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state96_pp2_stage0_iter61() {
    ap_block_state96_pp2_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state97_pp2_stage0_iter62() {
    ap_block_state97_pp2_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state98_pp2_stage0_iter63() {
    ap_block_state98_pp2_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state99_pp2_stage0_iter64() {
    ap_block_state99_pp2_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_block_state9_pp0_stage0_iter0() {
    ap_block_state9_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void integrateKernel::thread_ap_condition_pp0_exit_iter0_state9() {
    if (esl_seteq<1,1,1>(exitcond_fu_996_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state9 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_condition_pp1_exit_iter0_state25() {
    if (esl_seteq<1,1,1>(exitcond1_fu_1149_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp1_exit_iter0_state25 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state25 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_condition_pp2_exit_iter0_state35() {
    if (esl_seteq<1,1,1>(tmp_13_fu_1200_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp2_exit_iter0_state35 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state35 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_condition_pp3_exit_iter0_state140() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond2_fu_2559_p2.read())) {
        ap_condition_pp3_exit_iter0_state140 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state140 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_1059_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void integrateKernel::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void integrateKernel::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void integrateKernel::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void integrateKernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter78.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter79.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter80.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter81.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter82.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter83.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter84.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter85.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter86.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter87.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter88.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter90.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter91.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter92.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter93.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter94.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter95.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter96.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter97.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter98.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter99.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter100.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter101.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter102.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter103.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_phi_mux_indvar_phi_fu_508_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()))) {
        ap_phi_mux_indvar_phi_fu_508_p4 = indvar_next_reg_2711.read();
    } else {
        ap_phi_mux_indvar_phi_fu_508_p4 = indvar_reg_504.read();
    }
}

void integrateKernel::thread_ap_phi_mux_x_phi_fu_562_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_13_reg_2847.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_x_phi_fu_562_p4 = x_1_1_reg_2861.read();
    } else {
        ap_phi_mux_x_phi_fu_562_p4 = x_reg_558.read();
    }
}

void integrateKernel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_1059_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void integrateKernel::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void integrateKernel::thread_ap_sig_ioackin_depth_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_depth_ARREADY.read())) {
        ap_sig_ioackin_depth_ARREADY = depth_ARREADY.read();
    } else {
        ap_sig_ioackin_depth_ARREADY = ap_const_logic_1;
    }
}

void integrateKernel::thread_ap_sig_ioackin_vol_data_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_ARREADY.read())) {
        ap_sig_ioackin_vol_data_ARREADY = vol_data_ARREADY.read();
    } else {
        ap_sig_ioackin_vol_data_ARREADY = ap_const_logic_1;
    }
}

void integrateKernel::thread_ap_sig_ioackin_vol_data_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_AWREADY.read())) {
        ap_sig_ioackin_vol_data_AWREADY = vol_data_AWREADY.read();
    } else {
        ap_sig_ioackin_vol_data_AWREADY = ap_const_logic_1;
    }
}

void integrateKernel::thread_ap_sig_ioackin_vol_data_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_WREADY.read())) {
        ap_sig_ioackin_vol_data_WREADY = vol_data_WREADY.read();
    } else {
        ap_sig_ioackin_vol_data_WREADY = ap_const_logic_1;
    }
}

void integrateKernel::thread_b_assign_1_fu_2241_p3() {
    b_assign_1_fu_2241_p3 = (!tmp_i_i_fu_926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i_i_fu_926_p2.read()[0].to_bool())? f_assign_7_reg_3386.read(): ap_const_lv32_3F800000);
}

void integrateKernel::thread_b_assign_3_fu_2249_p3() {
    b_assign_3_fu_2249_p3 = (!tmp_i_i1_fu_936_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i_i1_fu_936_p2.read()[0].to_bool())? f_assign_8_reg_3392.read(): ap_const_lv32_3F800000);
}

void integrateKernel::thread_depth_ARADDR() {
    depth_ARADDR =  (sc_lv<32>) (tmp_3_fu_983_p1.read());
}

void integrateKernel::thread_depth_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_depth_ARREADY.read()))) {
        depth_ARVALID = ap_const_logic_1;
    } else {
        depth_ARVALID = ap_const_logic_0;
    }
}

void integrateKernel::thread_depth_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        depth_RREADY = ap_const_logic_1;
    } else {
        depth_RREADY = ap_const_logic_0;
    }
}

void integrateKernel::thread_depth_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        depth_blk_n_AR = m_axi_depth_ARREADY.read();
    } else {
        depth_blk_n_AR = ap_const_logic_1;
    }
}

void integrateKernel::thread_depth_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707.read()))) {
        depth_blk_n_R = m_axi_depth_RVALID.read();
    } else {
        depth_blk_n_R = ap_const_logic_1;
    }
}

void integrateKernel::thread_depth_hls_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter51.read()))) {
        depth_hls_address0 =  (sc_lv<17>) (tmp_37_fu_1598_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        depth_hls_address0 =  (sc_lv<17>) (indvar7_fu_1008_p1.read());
    } else {
        depth_hls_address0 = "XXXXXXXXXXXXXXXXX";
    }
}

void integrateKernel::thread_depth_hls_address1() {
    depth_hls_address1 =  (sc_lv<17>) (tmp_37_1_fu_1874_p1.read());
}

void integrateKernel::thread_depth_hls_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter51.read())))) {
        depth_hls_ce0 = ap_const_logic_1;
    } else {
        depth_hls_ce0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_depth_hls_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter51.read()))) {
        depth_hls_ce1 = ap_const_logic_1;
    } else {
        depth_hls_ce1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_depth_hls_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_2707_pp0_iter1_reg.read()))) {
        depth_hls_we0 = ap_const_logic_1;
    } else {
        depth_hls_we0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_dim_x_load_fu_1245_p1() {
    dim_x_load_fu_1245_p1 = tmp_57_fu_1242_p1.read();
}

void integrateKernel::thread_dim_y_load_new_fu_1251_p4() {
    dim_y_load_new_fu_1251_p4 = dim_read_reg_2672.read().range(63, 32);
}

void integrateKernel::thread_dim_z_load_new_fu_1265_p4() {
    dim_z_load_new_fu_1265_p4 = dim_read_reg_2672.read().range(95, 64);
}

void integrateKernel::thread_exitcond1_fu_1149_p2() {
    exitcond1_fu_1149_p2 = (!indvar1_reg_547.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_547.read() == ap_const_lv9_100);
}

void integrateKernel::thread_exitcond2_fu_2559_p2() {
    exitcond2_fu_2559_p2 = (!indvar3_reg_570.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_570.read() == ap_const_lv9_100);
}

void integrateKernel::thread_exitcond_flatten_fu_1059_p2() {
    exitcond_flatten_fu_1059_p2 = (!indvar_flatten_reg_516.read().is_01() || !tmp_33_reg_2749.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_516.read() == tmp_33_reg_2749.read());
}

void integrateKernel::thread_exitcond_fu_996_p2() {
    exitcond_fu_996_p2 = (!ap_phi_mux_indvar_phi_fu_508_p4.read().is_01() || !ap_const_lv17_12C00.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_phi_fu_508_p4.read() == ap_const_lv17_12C00);
}

void integrateKernel::thread_grp_fu_613_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        grp_fu_613_p0 = tmp_14_reg_2866.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        grp_fu_613_p0 = reg_956.read();
    } else {
        grp_fu_613_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void integrateKernel::thread_grp_fu_693_p1() {
    grp_fu_693_p1 = dim_y_load_new_fu_1251_p4.read();
}

void integrateKernel::thread_grp_fu_697_p1() {
    grp_fu_697_p1 = dim_z_load_new_fu_1265_p4.read();
}

void integrateKernel::thread_grp_fu_821_ce() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
          esl_seteq<1,1,1>(ap_sig_ioackin_vol_data_ARREADY.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_fu_821_ce = ap_const_logic_1;
    } else {
        grp_fu_821_ce = ap_const_logic_0;
    }
}

void integrateKernel::thread_grp_fu_821_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_821_p0 = tmp_54_fu_1210_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_fu_821_p0 = tmp_45_reg_2785.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        grp_fu_821_p0 = tmp_46_fu_1196_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        grp_fu_821_p0 = tmp_5_mid2_v_v_reg_2769.read();
    } else {
        grp_fu_821_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void integrateKernel::thread_grp_fu_824_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        grp_fu_824_p0 = tmp_14_s_fu_1221_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_fu_824_p0 = size_y_load_new_reg_2775.read();
    } else {
        grp_fu_824_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void integrateKernel::thread_grp_fu_827_p0() {
    grp_fu_827_p0 = size_read_reg_2679.read().range(95, 64);
}

void integrateKernel::thread_grp_fu_830_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read()))) {
        grp_fu_830_p0 = val_y_s_fu_1911_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_fu_830_p0 = tmp_8_reg_2721.read();
    } else {
        grp_fu_830_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void integrateKernel::thread_grp_fu_833_p0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read()))) {
        grp_fu_833_p0 = val_y_1_fu_1915_p1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        grp_fu_833_p0 = tmp_s_reg_2726.read();
    } else {
        grp_fu_833_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void integrateKernel::thread_grp_fu_836_p0() {
    grp_fu_836_p0 = esl_sext<32,16>(input_data_0_x_load_1_reg_3268.read());
}

void integrateKernel::thread_grp_fu_839_p0() {
    grp_fu_839_p0 = esl_sext<32,16>(input_data_1_x_load_1_reg_3273.read());
}

void integrateKernel::thread_idx_1_fu_1868_p2() {
    idx_1_fu_1868_p2 = (!val_V_2_fu_1734_p3.read().is_01() || !tmp_36_1_fu_1863_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(val_V_2_fu_1734_p3.read()) + sc_biguint<32>(tmp_36_1_fu_1863_p2.read()));
}

void integrateKernel::thread_idx_fu_1592_p2() {
    idx_fu_1592_p2 = (!val_V_fu_1458_p3.read().is_01() || !tmp_36_fu_1587_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(val_V_fu_1458_p3.read()) + sc_biguint<32>(tmp_36_fu_1587_p2.read()));
}

void integrateKernel::thread_indvar7_fu_1008_p1() {
    indvar7_fu_1008_p1 = esl_zext<64,17>(indvar_reg_504_pp0_iter1_reg.read());
}

void integrateKernel::thread_indvar_flatten_next_fu_1064_p2() {
    indvar_flatten_next_fu_1064_p2 = (!indvar_flatten_reg_516.read().is_01() || !ap_const_lv40_1.is_01())? sc_lv<40>(): (sc_biguint<40>(indvar_flatten_reg_516.read()) + sc_biguint<40>(ap_const_lv40_1));
}

void integrateKernel::thread_indvar_next1_fu_1155_p2() {
    indvar_next1_fu_1155_p2 = (!indvar1_reg_547.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar1_reg_547.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void integrateKernel::thread_indvar_next2_fu_2565_p2() {
    indvar_next2_fu_2565_p2 = (!indvar3_reg_570.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(indvar3_reg_570.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void integrateKernel::thread_indvar_next_fu_1002_p2() {
    indvar_next_fu_1002_p2 = (!ap_phi_mux_indvar_phi_fu_508_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(ap_phi_mux_indvar_phi_fu_508_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void integrateKernel::thread_input_data_0_x_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read()))) {
        input_data_0_x_address0 = input_data_0_x_addr_2_reg_3220_pp2_iter80_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        input_data_0_x_address0 =  (sc_lv<7>) (newIndex2_fu_1189_p1.read());
    } else {
        input_data_0_x_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_0_x_address1() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        input_data_0_x_address1 =  (sc_lv<7>) (newIndex4_fu_2585_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read()))) {
        input_data_0_x_address1 = input_data_0_x_addr_2_reg_3220_pp2_iter102_reg.read();
    } else {
        input_data_0_x_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_0_x_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read())))) {
        input_data_0_x_ce0 = ap_const_logic_1;
    } else {
        input_data_0_x_ce0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_x_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read())))) {
        input_data_0_x_ce1 = ap_const_logic_1;
    } else {
        input_data_0_x_ce1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_x_d1() {
    input_data_0_x_d1 = (!p_Result_s_fu_2267_p3.read()[0].is_01())? sc_lv<16>(): ((p_Result_s_fu_2267_p3.read()[0].to_bool())? result_V_1_fu_2393_p2.read(): p_Val2_36_fu_2385_p3.read());
}

void integrateKernel::thread_input_data_0_x_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_50_reg_2811_pp1_iter1_reg.read()))) {
        input_data_0_x_we0 = ap_const_logic_1;
    } else {
        input_data_0_x_we0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_x_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_25_reg_3011_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, or_cond2_reg_3084_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_38_reg_3107_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(tmp_41_reg_3216_pp2_iter102_reg.read(), ap_const_lv1_1))) {
        input_data_0_x_we1 = ap_const_logic_1;
    } else {
        input_data_0_x_we1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_y_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter79.read()))) {
        input_data_0_y_address0 =  (sc_lv<7>) (newIndex6_fu_1889_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        input_data_0_y_address0 =  (sc_lv<7>) (newIndex2_fu_1189_p1.read());
    } else {
        input_data_0_y_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_0_y_address1() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        input_data_0_y_address1 =  (sc_lv<7>) (newIndex4_fu_2585_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read()))) {
        input_data_0_y_address1 = input_data_0_y_addr_2_reg_3226_pp2_iter88_reg.read();
    } else {
        input_data_0_y_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_0_y_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter79.read())))) {
        input_data_0_y_ce0 = ap_const_logic_1;
    } else {
        input_data_0_y_ce0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_y_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read())))) {
        input_data_0_y_ce1 = ap_const_logic_1;
    } else {
        input_data_0_y_ce1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_y_d1() {
    input_data_0_y_d1 = (!p_Result_1_fu_1950_p3.read()[0].is_01())? sc_lv<16>(): ((p_Result_1_fu_1950_p3.read()[0].to_bool())? result_V_3_fu_2076_p2.read(): p_Val2_38_fu_2068_p3.read());
}

void integrateKernel::thread_input_data_0_y_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_50_reg_2811_pp1_iter1_reg.read()))) {
        input_data_0_y_we0 = ap_const_logic_1;
    } else {
        input_data_0_y_we0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_0_y_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_25_reg_3011_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, or_cond2_reg_3084_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_38_reg_3107_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(tmp_41_reg_3216_pp2_iter88_reg.read(), ap_const_lv1_1))) {
        input_data_0_y_we1 = ap_const_logic_1;
    } else {
        input_data_0_y_we1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_x_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read()))) {
        input_data_1_x_address0 = input_data_1_x_addr_2_reg_3236_pp2_iter80_reg.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        input_data_1_x_address0 =  (sc_lv<7>) (newIndex2_fu_1189_p1.read());
    } else {
        input_data_1_x_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_1_x_address1() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        input_data_1_x_address1 =  (sc_lv<7>) (newIndex4_fu_2585_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read()))) {
        input_data_1_x_address1 = input_data_1_x_addr_2_reg_3236_pp2_iter102_reg.read();
    } else {
        input_data_1_x_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_1_x_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter81.read())))) {
        input_data_1_x_ce0 = ap_const_logic_1;
    } else {
        input_data_1_x_ce0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_x_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read())))) {
        input_data_1_x_ce1 = ap_const_logic_1;
    } else {
        input_data_1_x_ce1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_x_d1() {
    input_data_1_x_d1 = (!p_Result_2_fu_2418_p3.read()[0].is_01())? sc_lv<16>(): ((p_Result_2_fu_2418_p3.read()[0].to_bool())? result_V_5_fu_2544_p2.read(): p_Val2_40_fu_2536_p3.read());
}

void integrateKernel::thread_input_data_1_x_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(tmp_50_reg_2811_pp1_iter1_reg.read(), ap_const_lv1_1))) {
        input_data_1_x_we0 = ap_const_logic_1;
    } else {
        input_data_1_x_we0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_x_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter103.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_25_1_reg_3032_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, or_cond5_reg_3093_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_38_1_reg_3116_pp2_iter102_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_47_1_reg_3232_pp2_iter102_reg.read()))) {
        input_data_1_x_we1 = ap_const_logic_1;
    } else {
        input_data_1_x_we1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_y_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter79.read()))) {
        input_data_1_y_address0 =  (sc_lv<7>) (newIndex8_fu_1905_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        input_data_1_y_address0 =  (sc_lv<7>) (newIndex2_fu_1189_p1.read());
    } else {
        input_data_1_y_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_1_y_address1() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()))) {
        input_data_1_y_address1 =  (sc_lv<7>) (newIndex4_fu_2585_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read()))) {
        input_data_1_y_address1 = input_data_1_y_addr_2_reg_3242_pp2_iter88_reg.read();
    } else {
        input_data_1_y_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void integrateKernel::thread_input_data_1_y_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter79.read())))) {
        input_data_1_y_ce0 = ap_const_logic_1;
    } else {
        input_data_1_y_ce0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_y_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read())))) {
        input_data_1_y_ce1 = ap_const_logic_1;
    } else {
        input_data_1_y_ce1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_y_d1() {
    input_data_1_y_d1 = (!p_Result_3_fu_2100_p3.read()[0].is_01())? sc_lv<16>(): ((p_Result_3_fu_2100_p3.read()[0].to_bool())? result_V_7_fu_2226_p2.read(): p_Val2_42_fu_2218_p3.read());
}

void integrateKernel::thread_input_data_1_y_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(tmp_50_reg_2811_pp1_iter1_reg.read(), ap_const_lv1_1))) {
        input_data_1_y_we0 = ap_const_logic_1;
    } else {
        input_data_1_y_we0 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_1_y_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp2_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter89.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_25_1_reg_3032_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, or_cond5_reg_3093_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_38_1_reg_3116_pp2_iter88_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_47_1_reg_3232_pp2_iter88_reg.read()))) {
        input_data_1_y_we1 = ap_const_logic_1;
    } else {
        input_data_1_y_we1 = ap_const_logic_0;
    }
}

void integrateKernel::thread_input_data_x_gep_fu_2593_p3() {
    input_data_x_gep_fu_2593_p3 = (!tmp_58_reg_3437.read()[0].is_01())? sc_lv<16>(): ((tmp_58_reg_3437.read()[0].to_bool())? input_data_1_x_q1.read(): input_data_0_x_q1.read());
}

void integrateKernel::thread_input_data_y_gep_fu_2600_p3() {
    input_data_y_gep_fu_2600_p3 = (!tmp_58_reg_3437.read()[0].is_01())? sc_lv<16>(): ((tmp_58_reg_3437.read()[0].to_bool())? input_data_1_y_q1.read(): input_data_0_y_q1.read());
}

void integrateKernel::thread_isNeg_1_fu_1507_p3() {
    isNeg_1_fu_1507_p3 = sh_assign_s_fu_1501_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_2_fu_2313_p3() {
    isNeg_2_fu_2313_p3 = sh_assign_fu_2307_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_3_fu_1996_p3() {
    isNeg_3_fu_1996_p3 = sh_assign_3_fu_1990_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_4_fu_1662_p3() {
    isNeg_4_fu_1662_p3 = sh_assign_7_fu_1656_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_5_fu_1783_p3() {
    isNeg_5_fu_1783_p3 = sh_assign_2_fu_1777_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_6_fu_2464_p3() {
    isNeg_6_fu_2464_p3 = sh_assign_6_fu_2458_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_7_fu_2146_p3() {
    isNeg_7_fu_2146_p3 = sh_assign_9_fu_2140_p2.read().range(8, 8);
}

void integrateKernel::thread_isNeg_fu_1386_p3() {
    isNeg_fu_1386_p3 = sh_assign_1_fu_1380_p2.read().range(8, 8);
}

void integrateKernel::thread_mantissa_V_1_cast1_fu_2299_p1() {
    mantissa_V_1_cast1_fu_2299_p1 = esl_zext<63,25>(mantissa_V_1_fu_2289_p4.read());
}

void integrateKernel::thread_mantissa_V_1_fu_2289_p4() {
    mantissa_V_1_fu_2289_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_5_fu_2285_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_2_fu_1483_p4() {
    mantissa_V_2_fu_1483_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_3_fu_1479_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_3_cast1_fu_1982_p1() {
    mantissa_V_3_cast1_fu_1982_p1 = esl_zext<63,25>(mantissa_V_3_fu_1972_p4.read());
}

void integrateKernel::thread_mantissa_V_3_fu_1972_p4() {
    mantissa_V_3_fu_1972_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_7_fu_1968_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_4_fu_1638_p4() {
    mantissa_V_4_fu_1638_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_9_fu_1634_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_5_cast1_fu_2450_p1() {
    mantissa_V_5_cast1_fu_2450_p1 = esl_zext<63,25>(mantissa_V_5_fu_2440_p4.read());
}

void integrateKernel::thread_mantissa_V_5_fu_2440_p4() {
    mantissa_V_5_fu_2440_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_13_fu_2436_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_6_fu_1759_p4() {
    mantissa_V_6_fu_1759_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_11_fu_1755_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_7_cast1_fu_2132_p1() {
    mantissa_V_7_cast1_fu_2132_p1 = esl_zext<63,25>(mantissa_V_7_fu_2122_p4.read());
}

void integrateKernel::thread_mantissa_V_7_fu_2122_p4() {
    mantissa_V_7_fu_2122_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_15_fu_2118_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_mantissa_V_8_i12_cas_fu_1493_p1() {
    mantissa_V_8_i12_cas_fu_1493_p1 = esl_zext<79,25>(mantissa_V_2_fu_1483_p4.read());
}

void integrateKernel::thread_mantissa_V_8_i29_cas_fu_1648_p1() {
    mantissa_V_8_i29_cas_fu_1648_p1 = esl_zext<79,25>(mantissa_V_4_fu_1638_p4.read());
}

void integrateKernel::thread_mantissa_V_8_i46_cas_fu_1769_p1() {
    mantissa_V_8_i46_cas_fu_1769_p1 = esl_zext<79,25>(mantissa_V_6_fu_1759_p4.read());
}

void integrateKernel::thread_mantissa_V_8_i_cast1_fu_1372_p1() {
    mantissa_V_8_i_cast1_fu_1372_p1 = esl_zext<79,25>(mantissa_V_fu_1362_p4.read());
}

void integrateKernel::thread_mantissa_V_fu_1362_p4() {
    mantissa_V_fu_1362_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, tmp_V_1_fu_1358_p1.read()), ap_const_lv1_0);
}

void integrateKernel::thread_newIndex2_fu_1189_p1() {
    newIndex2_fu_1189_p1 = esl_zext<64,8>(newIndex1_reg_2815_pp1_iter1_reg.read());
}

void integrateKernel::thread_newIndex3_fu_2575_p4() {
    newIndex3_fu_2575_p4 = indvar3_reg_570.read().range(8, 1);
}

void integrateKernel::thread_newIndex4_fu_2585_p1() {
    newIndex4_fu_2585_p1 = esl_zext<64,8>(newIndex3_fu_2575_p4.read());
}

void integrateKernel::thread_newIndex5_fu_1879_p4() {
    newIndex5_fu_1879_p4 = x_reg_558_pp2_iter78_reg.read().range(8, 1);
}

void integrateKernel::thread_newIndex6_fu_1889_p1() {
    newIndex6_fu_1889_p1 = esl_zext<64,8>(newIndex5_fu_1879_p4.read());
}

void integrateKernel::thread_newIndex8_fu_1905_p1() {
    newIndex8_fu_1905_p1 = esl_zext<64,8>(newIndex_fu_1895_p4.read());
}

void integrateKernel::thread_newIndex_fu_1895_p4() {
    newIndex_fu_1895_p4 = x_reg_558_pp2_iter78_reg.read().range(8, 1);
}

void integrateKernel::thread_or_cond2_fu_1339_p2() {
    or_cond2_fu_1339_p2 = (tmp2_fu_1333_p2.read() | tmp1_fu_1327_p2.read());
}

void integrateKernel::thread_or_cond5_fu_1615_p2() {
    or_cond5_fu_1615_p2 = (tmp45_fu_1609_p2.read() | tmp44_fu_1603_p2.read());
}

void integrateKernel::thread_p_Result_1_fu_1950_p3() {
    p_Result_1_fu_1950_p3 = p_Val2_13_fu_1946_p1.read().range(31, 31);
}

void integrateKernel::thread_p_Result_2_fu_2418_p3() {
    p_Result_2_fu_2418_p3 = p_Val2_26_fu_2411_p3.read().range(31, 31);
}

void integrateKernel::thread_p_Result_3_fu_2100_p3() {
    p_Result_3_fu_2100_p3 = p_Val2_31_fu_2096_p1.read().range(31, 31);
}

void integrateKernel::thread_p_Result_s_fu_2267_p3() {
    p_Result_s_fu_2267_p3 = p_Val2_8_fu_2260_p3.read().range(31, 31);
}

void integrateKernel::thread_p_Val2_13_fu_1946_p1() {
    p_Val2_13_fu_1946_p1 = x_assign_s_fu_1941_p3.read();
}

void integrateKernel::thread_p_Val2_18_fu_1621_p1() {
    p_Val2_18_fu_1621_p1 = val_x_8_reg_3070.read();
}

void integrateKernel::thread_p_Val2_22_fu_1742_p1() {
    p_Val2_22_fu_1742_p1 = val_y_8_reg_3077.read();
}

void integrateKernel::thread_p_Val2_26_fu_2411_p3() {
    p_Val2_26_fu_2411_p3 = (!tmp_i1_i1_reg_3413_pp2_iter102_reg.read()[0].is_01())? sc_lv<32>(): ((tmp_i1_i1_reg_3413_pp2_iter102_reg.read()[0].to_bool())? ap_const_lv32_C6FFFC00: tmp_21_fu_2408_p1.read());
}

void integrateKernel::thread_p_Val2_31_fu_2096_p1() {
    p_Val2_31_fu_2096_p1 = x_assign_2_fu_2091_p3.read();
}

void integrateKernel::thread_p_Val2_36_fu_2385_p3() {
    p_Val2_36_fu_2385_p3 = (!isNeg_2_fu_2313_p3.read()[0].is_01())? sc_lv<16>(): ((isNeg_2_fu_2313_p3.read()[0].to_bool())? tmp_51_fu_2371_p1.read(): tmp_52_fu_2375_p4.read());
}

void integrateKernel::thread_p_Val2_38_fu_2068_p3() {
    p_Val2_38_fu_2068_p3 = (!isNeg_3_fu_1996_p3.read()[0].is_01())? sc_lv<16>(): ((isNeg_3_fu_1996_p3.read()[0].to_bool())? tmp_55_fu_2054_p1.read(): tmp_56_fu_2058_p4.read());
}

void integrateKernel::thread_p_Val2_40_fu_2536_p3() {
    p_Val2_40_fu_2536_p3 = (!isNeg_6_fu_2464_p3.read()[0].is_01())? sc_lv<16>(): ((isNeg_6_fu_2464_p3.read()[0].to_bool())? tmp_64_fu_2522_p1.read(): tmp_66_fu_2526_p4.read());
}

void integrateKernel::thread_p_Val2_42_fu_2218_p3() {
    p_Val2_42_fu_2218_p3 = (!isNeg_7_fu_2146_p3.read()[0].is_01())? sc_lv<16>(): ((isNeg_7_fu_2146_p3.read()[0].to_bool())? tmp_67_fu_2204_p1.read(): tmp_68_fu_2208_p4.read());
}

void integrateKernel::thread_p_Val2_4_fu_1466_p1() {
    p_Val2_4_fu_1466_p1 = val_y_4_reg_3063.read();
}

void integrateKernel::thread_p_Val2_8_fu_2260_p3() {
    p_Val2_8_fu_2260_p3 = (!tmp_i1_i_reg_3403_pp2_iter102_reg.read()[0].is_01())? sc_lv<32>(): ((tmp_i1_i_reg_3403_pp2_iter102_reg.read()[0].to_bool())? ap_const_lv32_C6FFFC00: tmp_18_fu_2257_p1.read());
}

void integrateKernel::thread_p_Val2_s_fu_1345_p1() {
    p_Val2_s_fu_1345_p1 = val_x_4_reg_3056.read();
}

void integrateKernel::thread_r_V_10_fu_1551_p2() {
    r_V_10_fu_1551_p2 = (!tmp_i_i_i4_21_fu_1541_p1.read().is_01())? sc_lv<79>(): mantissa_V_8_i12_cas_fu_1493_p1.read() << (unsigned short)tmp_i_i_i4_21_fu_1541_p1.read().to_uint();
}

void integrateKernel::thread_r_V_11_fu_1700_p2() {
    r_V_11_fu_1700_p2 = (!sh_assign_13_i34_cas_1_fu_1692_p1.read().is_01())? sc_lv<25>(): mantissa_V_4_fu_1638_p4.read() >> (unsigned short)sh_assign_13_i34_cas_1_fu_1692_p1.read().to_uint();
}

void integrateKernel::thread_r_V_12_fu_1706_p2() {
    r_V_12_fu_1706_p2 = (!tmp_i_i_i5_27_fu_1696_p1.read().is_01())? sc_lv<79>(): mantissa_V_8_i29_cas_fu_1648_p1.read() << (unsigned short)tmp_i_i_i5_27_fu_1696_p1.read().to_uint();
}

void integrateKernel::thread_r_V_13_fu_1821_p2() {
    r_V_13_fu_1821_p2 = (!sh_assign_13_i51_cas_1_fu_1813_p1.read().is_01())? sc_lv<25>(): mantissa_V_6_fu_1759_p4.read() >> (unsigned short)sh_assign_13_i51_cas_1_fu_1813_p1.read().to_uint();
}

void integrateKernel::thread_r_V_14_fu_1827_p2() {
    r_V_14_fu_1827_p2 = (!tmp_i_i_i7_28_fu_1817_p1.read().is_01())? sc_lv<79>(): mantissa_V_8_i46_cas_fu_1769_p1.read() << (unsigned short)tmp_i_i_i7_28_fu_1817_p1.read().to_uint();
}

void integrateKernel::thread_r_V_15_fu_2190_p2() {
    r_V_15_fu_2190_p2 = (!tmp_i_i_i3_31_fu_2180_p1.read().is_01())? sc_lv<63>(): mantissa_V_7_cast1_fu_2132_p1.read() << (unsigned short)tmp_i_i_i3_31_fu_2180_p1.read().to_uint();
}

void integrateKernel::thread_r_V_1_fu_2357_p2() {
    r_V_1_fu_2357_p2 = (!tmp_i_i_i_24_fu_2347_p1.read().is_01())? sc_lv<63>(): mantissa_V_1_cast1_fu_2299_p1.read() << (unsigned short)tmp_i_i_i_24_fu_2347_p1.read().to_uint();
}

void integrateKernel::thread_r_V_2_fu_1424_p2() {
    r_V_2_fu_1424_p2 = (!sh_assign_13_i_cast_s_fu_1416_p1.read().is_01())? sc_lv<25>(): mantissa_V_fu_1362_p4.read() >> (unsigned short)sh_assign_13_i_cast_s_fu_1416_p1.read().to_uint();
}

void integrateKernel::thread_r_V_3_fu_2034_p2() {
    r_V_3_fu_2034_p2 = (!sh_assign_5_cast_cas_fu_2026_p1.read().is_01())? sc_lv<25>(): mantissa_V_3_fu_1972_p4.read() >> (unsigned short)sh_assign_5_cast_cas_fu_2026_p1.read().to_uint();
}

void integrateKernel::thread_r_V_4_fu_2040_p2() {
    r_V_4_fu_2040_p2 = (!tmp_i_i_i1_25_fu_2030_p1.read().is_01())? sc_lv<63>(): mantissa_V_3_cast1_fu_1982_p1.read() << (unsigned short)tmp_i_i_i1_25_fu_2030_p1.read().to_uint();
}

void integrateKernel::thread_r_V_5_fu_1430_p2() {
    r_V_5_fu_1430_p2 = (!tmp_i_i_i6_fu_1420_p1.read().is_01())? sc_lv<79>(): mantissa_V_8_i_cast1_fu_1372_p1.read() << (unsigned short)tmp_i_i_i6_fu_1420_p1.read().to_uint();
}

void integrateKernel::thread_r_V_6_fu_2502_p2() {
    r_V_6_fu_2502_p2 = (!sh_assign_8_cast_cas_fu_2494_p1.read().is_01())? sc_lv<25>(): mantissa_V_5_fu_2440_p4.read() >> (unsigned short)sh_assign_8_cast_cas_fu_2494_p1.read().to_uint();
}

void integrateKernel::thread_r_V_7_fu_2508_p2() {
    r_V_7_fu_2508_p2 = (!tmp_i_i_i2_30_fu_2498_p1.read().is_01())? sc_lv<63>(): mantissa_V_5_cast1_fu_2450_p1.read() << (unsigned short)tmp_i_i_i2_30_fu_2498_p1.read().to_uint();
}

void integrateKernel::thread_r_V_8_fu_1545_p2() {
    r_V_8_fu_1545_p2 = (!sh_assign_13_i17_cas_1_fu_1537_p1.read().is_01())? sc_lv<25>(): mantissa_V_2_fu_1483_p4.read() >> (unsigned short)sh_assign_13_i17_cas_1_fu_1537_p1.read().to_uint();
}

void integrateKernel::thread_r_V_9_fu_2184_p2() {
    r_V_9_fu_2184_p2 = (!sh_assign_11_cast_ca_fu_2176_p1.read().is_01())? sc_lv<25>(): mantissa_V_7_fu_2122_p4.read() >> (unsigned short)sh_assign_11_cast_ca_fu_2176_p1.read().to_uint();
}

void integrateKernel::thread_r_V_fu_2351_p2() {
    r_V_fu_2351_p2 = (!sh_assign_2_cast_cas_fu_2343_p1.read().is_01())? sc_lv<25>(): mantissa_V_1_fu_2289_p4.read() >> (unsigned short)sh_assign_2_cast_cas_fu_2343_p1.read().to_uint();
}

void integrateKernel::thread_result_V_1_fu_2393_p2() {
    result_V_1_fu_2393_p2 = (!ap_const_lv16_0.is_01() || !p_Val2_36_fu_2385_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(p_Val2_36_fu_2385_p3.read()));
}

void integrateKernel::thread_result_V_3_fu_2076_p2() {
    result_V_3_fu_2076_p2 = (!ap_const_lv16_0.is_01() || !p_Val2_38_fu_2068_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(p_Val2_38_fu_2068_p3.read()));
}

void integrateKernel::thread_result_V_5_fu_2544_p2() {
    result_V_5_fu_2544_p2 = (!ap_const_lv16_0.is_01() || !p_Val2_40_fu_2536_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(p_Val2_40_fu_2536_p3.read()));
}

void integrateKernel::thread_result_V_7_fu_2226_p2() {
    result_V_7_fu_2226_p2 = (!ap_const_lv16_0.is_01() || !p_Val2_42_fu_2218_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(p_Val2_42_fu_2218_p3.read()));
}

void integrateKernel::thread_sh_assign_11_cast_ca_fu_2176_p1() {
    sh_assign_11_cast_ca_fu_2176_p1 = esl_sext<25,9>(ush_7_fu_2164_p3.read());
}

void integrateKernel::thread_sh_assign_11_cast_fu_2172_p1() {
    sh_assign_11_cast_fu_2172_p1 = esl_sext<32,9>(ush_7_fu_2164_p3.read());
}

void integrateKernel::thread_sh_assign_13_i17_cas_1_fu_1537_p1() {
    sh_assign_13_i17_cas_1_fu_1537_p1 = esl_sext<25,9>(ush_1_fu_1525_p3.read());
}

void integrateKernel::thread_sh_assign_13_i17_cas_fu_1533_p1() {
    sh_assign_13_i17_cas_fu_1533_p1 = esl_sext<32,9>(ush_1_fu_1525_p3.read());
}

void integrateKernel::thread_sh_assign_13_i34_cas_1_fu_1692_p1() {
    sh_assign_13_i34_cas_1_fu_1692_p1 = esl_sext<25,9>(ush_4_fu_1680_p3.read());
}

void integrateKernel::thread_sh_assign_13_i34_cas_fu_1688_p1() {
    sh_assign_13_i34_cas_fu_1688_p1 = esl_sext<32,9>(ush_4_fu_1680_p3.read());
}

void integrateKernel::thread_sh_assign_13_i51_cas_1_fu_1813_p1() {
    sh_assign_13_i51_cas_1_fu_1813_p1 = esl_sext<25,9>(ush_5_fu_1801_p3.read());
}

void integrateKernel::thread_sh_assign_13_i51_cas_fu_1809_p1() {
    sh_assign_13_i51_cas_fu_1809_p1 = esl_sext<32,9>(ush_5_fu_1801_p3.read());
}

void integrateKernel::thread_sh_assign_13_i_cast_fu_1412_p1() {
    sh_assign_13_i_cast_fu_1412_p1 = esl_sext<32,9>(ush_fu_1404_p3.read());
}

void integrateKernel::thread_sh_assign_13_i_cast_s_fu_1416_p1() {
    sh_assign_13_i_cast_s_fu_1416_p1 = esl_sext<25,9>(ush_fu_1404_p3.read());
}

void integrateKernel::thread_sh_assign_1_fu_1380_p2() {
    sh_assign_1_fu_1380_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i4_cast_fu_1376_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i4_cast_fu_1376_p1.read()));
}

void integrateKernel::thread_sh_assign_2_cast_cas_fu_2343_p1() {
    sh_assign_2_cast_cas_fu_2343_p1 = esl_sext<25,9>(ush_2_fu_2331_p3.read());
}

void integrateKernel::thread_sh_assign_2_cast_fu_2339_p1() {
    sh_assign_2_cast_fu_2339_p1 = esl_sext<32,9>(ush_2_fu_2331_p3.read());
}

void integrateKernel::thread_sh_assign_2_fu_1777_p2() {
    sh_assign_2_fu_1777_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i47_cast_fu_1773_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i47_cast_fu_1773_p1.read()));
}

void integrateKernel::thread_sh_assign_3_fu_1990_p2() {
    sh_assign_3_fu_1990_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i1_cast_fu_1986_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i1_cast_fu_1986_p1.read()));
}

void integrateKernel::thread_sh_assign_5_cast_cas_fu_2026_p1() {
    sh_assign_5_cast_cas_fu_2026_p1 = esl_sext<25,9>(ush_3_fu_2014_p3.read());
}

void integrateKernel::thread_sh_assign_5_cast_fu_2022_p1() {
    sh_assign_5_cast_fu_2022_p1 = esl_sext<32,9>(ush_3_fu_2014_p3.read());
}

void integrateKernel::thread_sh_assign_6_fu_2458_p2() {
    sh_assign_6_fu_2458_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i2_cast_fu_2454_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i2_cast_fu_2454_p1.read()));
}

void integrateKernel::thread_sh_assign_7_fu_1656_p2() {
    sh_assign_7_fu_1656_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i30_cast_fu_1652_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i30_cast_fu_1652_p1.read()));
}

void integrateKernel::thread_sh_assign_8_cast_cas_fu_2494_p1() {
    sh_assign_8_cast_cas_fu_2494_p1 = esl_sext<25,9>(ush_6_fu_2482_p3.read());
}

void integrateKernel::thread_sh_assign_8_cast_fu_2490_p1() {
    sh_assign_8_cast_fu_2490_p1 = esl_sext<32,9>(ush_6_fu_2482_p3.read());
}

void integrateKernel::thread_sh_assign_9_fu_2140_p2() {
    sh_assign_9_fu_2140_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i3_cast_fu_2136_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i3_cast_fu_2136_p1.read()));
}

void integrateKernel::thread_sh_assign_fu_2307_p2() {
    sh_assign_fu_2307_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i_cast_fu_2303_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i_cast_fu_2303_p1.read()));
}

void integrateKernel::thread_sh_assign_s_fu_1501_p2() {
    sh_assign_s_fu_1501_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_i13_cast_fu_1497_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_i13_cast_fu_1497_p1.read()));
}

void integrateKernel::thread_size_y_load_new_fu_1098_p4() {
    size_y_load_new_fu_1098_p4 = size_read_reg_2679.read().range(63, 32);
}

void integrateKernel::thread_tmp1_fu_1327_p2() {
    tmp1_fu_1327_p2 = (tmp_28_fu_852_p2.read() | tmp_29_fu_857_p2.read());
}

void integrateKernel::thread_tmp2_fu_1333_p2() {
    tmp2_fu_1333_p2 = (tmp_30_fu_861_p2.read() | tmp_31_fu_866_p2.read());
}

void integrateKernel::thread_tmp44_fu_1603_p2() {
    tmp44_fu_1603_p2 = (tmp_30_1_fu_870_p2.read() | tmp_31_1_fu_875_p2.read());
}

void integrateKernel::thread_tmp45_fu_1609_p2() {
    tmp45_fu_1609_p2 = (tmp_32_1_fu_879_p2.read() | tmp_33_1_fu_884_p2.read());
}

void integrateKernel::thread_tmp_10_cast_fu_1130_p1() {
    tmp_10_cast_fu_1130_p1 = esl_zext<33,32>(T_idx_fu_1124_p2.read());
}

void integrateKernel::thread_tmp_13_fu_1200_p2() {
    tmp_13_fu_1200_p2 = (!ap_phi_mux_x_phi_fu_562_p4.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_x_phi_fu_562_p4.read() == ap_const_lv9_100);
}

void integrateKernel::thread_tmp_14_s_fu_1221_p1() {
    tmp_14_s_fu_1221_p1 = esl_zext<32,8>(x_1_s_fu_1215_p2.read());
}

void integrateKernel::thread_tmp_18_fu_2257_p1() {
    tmp_18_fu_2257_p1 = tmp_i_i_op_reg_3418.read();
}

void integrateKernel::thread_tmp_21_fu_2408_p1() {
    tmp_21_fu_2408_p1 = tmp_i_i110_op_reg_3423.read();
}

void integrateKernel::thread_tmp_2_fu_1032_p1() {
    tmp_2_fu_1032_p1 = tmp_2_neg_fu_1026_p2.read();
}

void integrateKernel::thread_tmp_2_neg_fu_1026_p2() {
    tmp_2_neg_fu_1026_p2 = (tmp_2_to_int_fu_1023_p1.read() ^ ap_const_lv32_80000000);
}

void integrateKernel::thread_tmp_2_to_int_fu_1023_p1() {
    tmp_2_to_int_fu_1023_p1 = mu_read_reg_2641.read();
}

void integrateKernel::thread_tmp_32_fu_1046_p2() {
    tmp_32_fu_1046_p2 = (!umax_fu_1040_p3.read().is_01() || !start_read_reg_2625.read().is_01())? sc_lv<32>(): (sc_biguint<32>(umax_fu_1040_p3.read()) - sc_biguint<32>(start_read_reg_2625.read()));
}

void integrateKernel::thread_tmp_33_fu_1051_p3() {
    tmp_33_fu_1051_p3 = esl_concat<32,8>(tmp_32_fu_1046_p2.read(), ap_const_lv8_0);
}

void integrateKernel::thread_tmp_34_fu_1070_p2() {
    tmp_34_fu_1070_p2 = (!y_reg_536.read().is_01() || !ap_const_lv9_100.is_01())? sc_lv<1>(): sc_lv<1>(y_reg_536.read() == ap_const_lv9_100);
}

void integrateKernel::thread_tmp_35_fu_1444_p1() {
    tmp_35_fu_1444_p1 = esl_zext<32,1>(tmp_65_fu_1436_p3.read());
}

void integrateKernel::thread_tmp_36_1_fu_1863_p2() {
    tmp_36_1_fu_1863_p2 = (!val_V_3_fu_1855_p3.read().is_01() || !depthSize_x_read_reg_2665.read().is_01())? sc_lv<32>(): sc_bigint<32>(val_V_3_fu_1855_p3.read()) * sc_bigint<32>(depthSize_x_read_reg_2665.read());
}

void integrateKernel::thread_tmp_36_fu_1587_p2() {
    tmp_36_fu_1587_p2 = (!val_V_1_fu_1579_p3.read().is_01() || !depthSize_x_read_reg_2665.read().is_01())? sc_lv<32>(): sc_bigint<32>(val_V_1_fu_1579_p3.read()) * sc_bigint<32>(depthSize_x_read_reg_2665.read());
}

void integrateKernel::thread_tmp_37_1_fu_1874_p1() {
    tmp_37_1_fu_1874_p1 = esl_zext<64,32>(idx_1_fu_1868_p2.read());
}

void integrateKernel::thread_tmp_37_fu_1598_p1() {
    tmp_37_fu_1598_p1 = esl_zext<64,32>(idx_fu_1592_p2.read());
}

void integrateKernel::thread_tmp_3_fu_983_p1() {
    tmp_3_fu_983_p1 = esl_zext<64,30>(depth_offset3_reg_2686.read());
}

void integrateKernel::thread_tmp_40_fu_1448_p4() {
    tmp_40_fu_1448_p4 = r_V_5_fu_1430_p2.read().range(55, 24);
}

void integrateKernel::thread_tmp_45_fu_1116_p1() {
    tmp_45_fu_1116_p1 = size_read_reg_2679.read().range(32-1, 0);
}

void integrateKernel::thread_tmp_46_fu_1196_p1() {
    tmp_46_fu_1196_p1 = esl_zext<32,9>(y_mid2_reg_2762.read());
}

void integrateKernel::thread_tmp_47_fu_1565_p1() {
    tmp_47_fu_1565_p1 = esl_zext<32,1>(tmp_70_fu_1557_p3.read());
}

void integrateKernel::thread_tmp_48_fu_1569_p4() {
    tmp_48_fu_1569_p4 = r_V_10_fu_1551_p2.read().range(55, 24);
}

void integrateKernel::thread_tmp_49_fu_1175_p1() {
    tmp_49_fu_1175_p1 = vol_data_RDATA.read().range(16-1, 0);
}

void integrateKernel::thread_tmp_4_cast_fu_993_p1() {
    tmp_4_cast_fu_993_p1 = esl_zext<33,30>(tmp_10_reg_2691.read());
}

void integrateKernel::thread_tmp_50_fu_1161_p1() {
    tmp_50_fu_1161_p1 = indvar1_reg_547.read().range(1-1, 0);
}

void integrateKernel::thread_tmp_51_fu_2371_p1() {
    tmp_51_fu_2371_p1 = esl_zext<16,1>(tmp_76_fu_2363_p3.read());
}

void integrateKernel::thread_tmp_52_fu_2375_p4() {
    tmp_52_fu_2375_p4 = r_V_1_fu_2357_p2.read().range(39, 24);
}

void integrateKernel::thread_tmp_53_fu_1206_p1() {
    tmp_53_fu_1206_p1 = ap_phi_mux_x_phi_fu_562_p4.read().range(8-1, 0);
}

void integrateKernel::thread_tmp_54_fu_1210_p1() {
    tmp_54_fu_1210_p1 = esl_zext<32,9>(ap_phi_mux_x_phi_fu_562_p4.read());
}

void integrateKernel::thread_tmp_55_fu_2054_p1() {
    tmp_55_fu_2054_p1 = esl_zext<16,1>(tmp_80_fu_2046_p3.read());
}

void integrateKernel::thread_tmp_56_fu_2058_p4() {
    tmp_56_fu_2058_p4 = r_V_4_fu_2040_p2.read().range(39, 24);
}

void integrateKernel::thread_tmp_57_fu_1242_p1() {
    tmp_57_fu_1242_p1 = dim_read_reg_2672.read().range(32-1, 0);
}

void integrateKernel::thread_tmp_58_fu_2571_p1() {
    tmp_58_fu_2571_p1 = indvar3_reg_570.read().range(1-1, 0);
}

void integrateKernel::thread_tmp_59_fu_1720_p1() {
    tmp_59_fu_1720_p1 = esl_zext<32,1>(tmp_83_fu_1712_p3.read());
}

void integrateKernel::thread_tmp_5_fu_1036_p2() {
    tmp_5_fu_1036_p2 = (!end_read_reg_2619.read().is_01() || !start_read_reg_2625.read().is_01())? sc_lv<1>(): (sc_biguint<32>(end_read_reg_2619.read()) > sc_biguint<32>(start_read_reg_2625.read()));
}

void integrateKernel::thread_tmp_5_mid2_v_v_fu_1090_p3() {
    tmp_5_mid2_v_v_fu_1090_p3 = (!tmp_34_fu_1070_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_34_fu_1070_p2.read()[0].to_bool())? z_s_fu_1084_p2.read(): z_reg_527.read());
}

void integrateKernel::thread_tmp_60_fu_1724_p4() {
    tmp_60_fu_1724_p4 = r_V_12_fu_1706_p2.read().range(55, 24);
}

void integrateKernel::thread_tmp_62_fu_1841_p1() {
    tmp_62_fu_1841_p1 = esl_zext<32,1>(tmp_86_fu_1833_p3.read());
}

void integrateKernel::thread_tmp_63_fu_1845_p4() {
    tmp_63_fu_1845_p4 = r_V_14_fu_1827_p2.read().range(55, 24);
}

void integrateKernel::thread_tmp_64_fu_2522_p1() {
    tmp_64_fu_2522_p1 = esl_zext<16,1>(tmp_90_fu_2514_p3.read());
}

void integrateKernel::thread_tmp_65_fu_1436_p3() {
    tmp_65_fu_1436_p3 = r_V_2_fu_1424_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_66_fu_2526_p4() {
    tmp_66_fu_2526_p4 = r_V_7_fu_2508_p2.read().range(39, 24);
}

void integrateKernel::thread_tmp_67_fu_2204_p1() {
    tmp_67_fu_2204_p1 = esl_zext<16,1>(tmp_94_fu_2196_p3.read());
}

void integrateKernel::thread_tmp_68_fu_2208_p4() {
    tmp_68_fu_2208_p4 = r_V_15_fu_2190_p2.read().range(39, 24);
}

void integrateKernel::thread_tmp_70_fu_1557_p3() {
    tmp_70_fu_1557_p3 = r_V_8_fu_1545_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_76_fu_2363_p3() {
    tmp_76_fu_2363_p3 = r_V_fu_2351_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_7_fu_1107_p2() {
    tmp_7_fu_1107_p2 = (!tmp_5_mid2_v_v_fu_1090_p3.read().is_01() || !size_y_load_new_fu_1098_p4.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_5_mid2_v_v_fu_1090_p3.read()) * sc_bigint<32>(size_y_load_new_fu_1098_p4.read());
}

void integrateKernel::thread_tmp_80_fu_2046_p3() {
    tmp_80_fu_2046_p3 = r_V_3_fu_2034_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_83_fu_1712_p3() {
    tmp_83_fu_1712_p3 = r_V_11_fu_1700_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_86_fu_1833_p3() {
    tmp_86_fu_1833_p3 = r_V_13_fu_1821_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_8_fu_1013_p2() {
    tmp_8_fu_1013_p2 = (!depthSize_x_read_reg_2665.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(depthSize_x_read_reg_2665.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void integrateKernel::thread_tmp_90_fu_2514_p3() {
    tmp_90_fu_2514_p3 = r_V_6_fu_2502_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_94_fu_2196_p3() {
    tmp_94_fu_2196_p3 = r_V_9_fu_2184_p2.read().range(24, 24);
}

void integrateKernel::thread_tmp_V_10_fu_1745_p4() {
    tmp_V_10_fu_1745_p4 = p_Val2_22_fu_1742_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_11_fu_1755_p1() {
    tmp_V_11_fu_1755_p1 = p_Val2_22_fu_1742_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_12_fu_2426_p4() {
    tmp_V_12_fu_2426_p4 = p_Val2_26_fu_2411_p3.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_13_fu_2436_p1() {
    tmp_V_13_fu_2436_p1 = p_Val2_26_fu_2411_p3.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_14_fu_2108_p4() {
    tmp_V_14_fu_2108_p4 = p_Val2_31_fu_2096_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_15_fu_2118_p1() {
    tmp_V_15_fu_2118_p1 = p_Val2_31_fu_2096_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_1_fu_1358_p1() {
    tmp_V_1_fu_1358_p1 = p_Val2_s_fu_1345_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_2_fu_1469_p4() {
    tmp_V_2_fu_1469_p4 = p_Val2_4_fu_1466_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_3_fu_1479_p1() {
    tmp_V_3_fu_1479_p1 = p_Val2_4_fu_1466_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_4_fu_2275_p4() {
    tmp_V_4_fu_2275_p4 = p_Val2_8_fu_2260_p3.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_5_fu_2285_p1() {
    tmp_V_5_fu_2285_p1 = p_Val2_8_fu_2260_p3.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_6_fu_1958_p4() {
    tmp_V_6_fu_1958_p4 = p_Val2_13_fu_1946_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_7_fu_1968_p1() {
    tmp_V_7_fu_1968_p1 = p_Val2_13_fu_1946_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_8_fu_1624_p4() {
    tmp_V_8_fu_1624_p4 = p_Val2_18_fu_1621_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_V_9_fu_1634_p1() {
    tmp_V_9_fu_1634_p1 = p_Val2_18_fu_1621_p1.read().range(23-1, 0);
}

void integrateKernel::thread_tmp_V_fu_1348_p4() {
    tmp_V_fu_1348_p4 = p_Val2_s_fu_1345_p1.read().range(30, 23);
}

void integrateKernel::thread_tmp_fu_1119_p2() {
    tmp_fu_1119_p2 = (!tmp_7_reg_2780.read().is_01() || !y_cast_fu_1113_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_7_reg_2780.read()) + sc_biguint<32>(y_cast_fu_1113_p1.read()));
}

void integrateKernel::thread_tmp_i1_i1_fu_941_p0() {
    tmp_i1_i1_fu_941_p0 = (!tmp_i_i1_fu_936_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i_i1_fu_936_p2.read()[0].to_bool())? f_assign_8_reg_3392.read(): ap_const_lv32_3F800000);
}

void integrateKernel::thread_tmp_i1_i_fu_931_p0() {
    tmp_i1_i_fu_931_p0 = (!tmp_i_i_fu_926_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i_i_fu_926_p2.read()[0].to_bool())? f_assign_7_reg_3386.read(): ap_const_lv32_3F800000);
}

void integrateKernel::thread_tmp_i3_29_fu_1934_p3() {
    tmp_i3_29_fu_1934_p3 = (!tmp_i9_fu_913_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i9_fu_913_p2.read()[0].to_bool())? ap_const_lv32_3F800000: b_assign_2_reg_3326.read());
}

void integrateKernel::thread_tmp_i_23_fu_1927_p3() {
    tmp_i_23_fu_1927_p3 = (!tmp_i4_fu_908_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i4_fu_908_p2.read()[0].to_bool())? ap_const_lv32_3F800000: b_assign_reg_3320.read());
}

void integrateKernel::thread_tmp_i_i_i16_cast_fu_1521_p1() {
    tmp_i_i_i16_cast_fu_1521_p1 = esl_sext<9,8>(tmp_i_i_i4_fu_1515_p2.read());
}

void integrateKernel::thread_tmp_i_i_i1_25_fu_2030_p1() {
    tmp_i_i_i1_25_fu_2030_p1 = esl_zext<63,32>(sh_assign_5_cast_fu_2022_p1.read());
}

void integrateKernel::thread_tmp_i_i_i1_cast_fu_2010_p1() {
    tmp_i_i_i1_cast_fu_2010_p1 = esl_sext<9,8>(tmp_i_i_i1_fu_2004_p2.read());
}

void integrateKernel::thread_tmp_i_i_i1_fu_2004_p2() {
    tmp_i_i_i1_fu_2004_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_6_fu_1958_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_6_fu_1958_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i2_30_fu_2498_p1() {
    tmp_i_i_i2_30_fu_2498_p1 = esl_zext<63,32>(sh_assign_8_cast_fu_2490_p1.read());
}

void integrateKernel::thread_tmp_i_i_i2_cast_fu_2478_p1() {
    tmp_i_i_i2_cast_fu_2478_p1 = esl_sext<9,8>(tmp_i_i_i2_fu_2472_p2.read());
}

void integrateKernel::thread_tmp_i_i_i2_fu_2472_p2() {
    tmp_i_i_i2_fu_2472_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_12_fu_2426_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_12_fu_2426_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i33_cast_fu_1676_p1() {
    tmp_i_i_i33_cast_fu_1676_p1 = esl_sext<9,8>(tmp_i_i_i6_26_fu_1670_p2.read());
}

void integrateKernel::thread_tmp_i_i_i3_31_fu_2180_p1() {
    tmp_i_i_i3_31_fu_2180_p1 = esl_zext<63,32>(sh_assign_11_cast_fu_2172_p1.read());
}

void integrateKernel::thread_tmp_i_i_i3_cast_fu_2160_p1() {
    tmp_i_i_i3_cast_fu_2160_p1 = esl_sext<9,8>(tmp_i_i_i3_fu_2154_p2.read());
}

void integrateKernel::thread_tmp_i_i_i3_fu_2154_p2() {
    tmp_i_i_i3_fu_2154_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_14_fu_2108_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_14_fu_2108_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i4_21_fu_1541_p1() {
    tmp_i_i_i4_21_fu_1541_p1 = esl_zext<79,32>(sh_assign_13_i17_cas_fu_1533_p1.read());
}

void integrateKernel::thread_tmp_i_i_i4_fu_1515_p2() {
    tmp_i_i_i4_fu_1515_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_2_fu_1469_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_2_fu_1469_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i50_cast_fu_1797_p1() {
    tmp_i_i_i50_cast_fu_1797_p1 = esl_sext<9,8>(tmp_i_i_i7_fu_1791_p2.read());
}

void integrateKernel::thread_tmp_i_i_i5_27_fu_1696_p1() {
    tmp_i_i_i5_27_fu_1696_p1 = esl_zext<79,32>(sh_assign_13_i34_cas_fu_1688_p1.read());
}

void integrateKernel::thread_tmp_i_i_i5_cast_fu_1400_p1() {
    tmp_i_i_i5_cast_fu_1400_p1 = esl_sext<9,8>(tmp_i_i_i5_fu_1394_p2.read());
}

void integrateKernel::thread_tmp_i_i_i5_fu_1394_p2() {
    tmp_i_i_i5_fu_1394_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_fu_1348_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_fu_1348_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i6_26_fu_1670_p2() {
    tmp_i_i_i6_26_fu_1670_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_8_fu_1624_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_8_fu_1624_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i6_fu_1420_p1() {
    tmp_i_i_i6_fu_1420_p1 = esl_zext<79,32>(sh_assign_13_i_cast_fu_1412_p1.read());
}

void integrateKernel::thread_tmp_i_i_i7_28_fu_1817_p1() {
    tmp_i_i_i7_28_fu_1817_p1 = esl_zext<79,32>(sh_assign_13_i51_cas_fu_1809_p1.read());
}

void integrateKernel::thread_tmp_i_i_i7_fu_1791_p2() {
    tmp_i_i_i7_fu_1791_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_10_fu_1745_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_10_fu_1745_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i_24_fu_2347_p1() {
    tmp_i_i_i_24_fu_2347_p1 = esl_zext<63,32>(sh_assign_2_cast_fu_2339_p1.read());
}

void integrateKernel::thread_tmp_i_i_i_cast_fu_2327_p1() {
    tmp_i_i_i_cast_fu_2327_p1 = esl_sext<9,8>(tmp_i_i_i_fu_2321_p2.read());
}

void integrateKernel::thread_tmp_i_i_i_fu_2321_p2() {
    tmp_i_i_i_fu_2321_p2 = (!ap_const_lv8_7F.is_01() || !tmp_V_4_fu_2275_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(tmp_V_4_fu_2275_p4.read()));
}

void integrateKernel::thread_tmp_i_i_i_i13_cast_fu_1497_p1() {
    tmp_i_i_i_i13_cast_fu_1497_p1 = esl_zext<9,8>(tmp_V_2_fu_1469_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i1_cast_fu_1986_p1() {
    tmp_i_i_i_i1_cast_fu_1986_p1 = esl_zext<9,8>(tmp_V_6_fu_1958_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i2_cast_fu_2454_p1() {
    tmp_i_i_i_i2_cast_fu_2454_p1 = esl_zext<9,8>(tmp_V_12_fu_2426_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i30_cast_fu_1652_p1() {
    tmp_i_i_i_i30_cast_fu_1652_p1 = esl_zext<9,8>(tmp_V_8_fu_1624_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i3_cast_fu_2136_p1() {
    tmp_i_i_i_i3_cast_fu_2136_p1 = esl_zext<9,8>(tmp_V_14_fu_2108_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i47_cast_fu_1773_p1() {
    tmp_i_i_i_i47_cast_fu_1773_p1 = esl_zext<9,8>(tmp_V_10_fu_1745_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i4_cast_fu_1376_p1() {
    tmp_i_i_i_i4_cast_fu_1376_p1 = esl_zext<9,8>(tmp_V_fu_1348_p4.read());
}

void integrateKernel::thread_tmp_i_i_i_i_cast_fu_2303_p1() {
    tmp_i_i_i_i_cast_fu_2303_p1 = esl_zext<9,8>(tmp_V_4_fu_2275_p4.read());
}

void integrateKernel::thread_tmp_s_fu_1018_p2() {
    tmp_s_fu_1018_p2 = (!depthSize_y_read_reg_2660.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(depthSize_y_read_reg_2660.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void integrateKernel::thread_umax_fu_1040_p3() {
    umax_fu_1040_p3 = (!tmp_5_fu_1036_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_5_fu_1036_p2.read()[0].to_bool())? end_read_reg_2619.read(): start_read_reg_2625.read());
}

void integrateKernel::thread_ush_1_fu_1525_p3() {
    ush_1_fu_1525_p3 = (!isNeg_1_fu_1507_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_1_fu_1507_p3.read()[0].to_bool())? tmp_i_i_i16_cast_fu_1521_p1.read(): sh_assign_s_fu_1501_p2.read());
}

void integrateKernel::thread_ush_2_fu_2331_p3() {
    ush_2_fu_2331_p3 = (!isNeg_2_fu_2313_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_2_fu_2313_p3.read()[0].to_bool())? tmp_i_i_i_cast_fu_2327_p1.read(): sh_assign_fu_2307_p2.read());
}

void integrateKernel::thread_ush_3_fu_2014_p3() {
    ush_3_fu_2014_p3 = (!isNeg_3_fu_1996_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_3_fu_1996_p3.read()[0].to_bool())? tmp_i_i_i1_cast_fu_2010_p1.read(): sh_assign_3_fu_1990_p2.read());
}

void integrateKernel::thread_ush_4_fu_1680_p3() {
    ush_4_fu_1680_p3 = (!isNeg_4_fu_1662_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_4_fu_1662_p3.read()[0].to_bool())? tmp_i_i_i33_cast_fu_1676_p1.read(): sh_assign_7_fu_1656_p2.read());
}

void integrateKernel::thread_ush_5_fu_1801_p3() {
    ush_5_fu_1801_p3 = (!isNeg_5_fu_1783_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_5_fu_1783_p3.read()[0].to_bool())? tmp_i_i_i50_cast_fu_1797_p1.read(): sh_assign_2_fu_1777_p2.read());
}

void integrateKernel::thread_ush_6_fu_2482_p3() {
    ush_6_fu_2482_p3 = (!isNeg_6_fu_2464_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_6_fu_2464_p3.read()[0].to_bool())? tmp_i_i_i2_cast_fu_2478_p1.read(): sh_assign_6_fu_2458_p2.read());
}

void integrateKernel::thread_ush_7_fu_2164_p3() {
    ush_7_fu_2164_p3 = (!isNeg_7_fu_2146_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_7_fu_2146_p3.read()[0].to_bool())? tmp_i_i_i3_cast_fu_2160_p1.read(): sh_assign_9_fu_2140_p2.read());
}

void integrateKernel::thread_ush_fu_1404_p3() {
    ush_fu_1404_p3 = (!isNeg_fu_1386_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_fu_1386_p3.read()[0].to_bool())? tmp_i_i_i5_cast_fu_1400_p1.read(): sh_assign_1_fu_1380_p2.read());
}

void integrateKernel::thread_val_V_1_fu_1579_p3() {
    val_V_1_fu_1579_p3 = (!isNeg_1_fu_1507_p3.read()[0].is_01())? sc_lv<32>(): ((isNeg_1_fu_1507_p3.read()[0].to_bool())? tmp_47_fu_1565_p1.read(): tmp_48_fu_1569_p4.read());
}

void integrateKernel::thread_val_V_2_fu_1734_p3() {
    val_V_2_fu_1734_p3 = (!isNeg_4_fu_1662_p3.read()[0].is_01())? sc_lv<32>(): ((isNeg_4_fu_1662_p3.read()[0].to_bool())? tmp_59_fu_1720_p1.read(): tmp_60_fu_1724_p4.read());
}

void integrateKernel::thread_val_V_3_fu_1855_p3() {
    val_V_3_fu_1855_p3 = (!isNeg_5_fu_1783_p3.read()[0].is_01())? sc_lv<32>(): ((isNeg_5_fu_1783_p3.read()[0].to_bool())? tmp_62_fu_1841_p1.read(): tmp_63_fu_1845_p4.read());
}

void integrateKernel::thread_val_V_fu_1458_p3() {
    val_V_fu_1458_p3 = (!isNeg_fu_1386_p3.read()[0].is_01())? sc_lv<32>(): ((isNeg_fu_1386_p3.read()[0].to_bool())? tmp_35_fu_1444_p1.read(): tmp_40_fu_1448_p4.read());
}

void integrateKernel::thread_val_y_1_fu_1915_p1() {
    val_y_1_fu_1915_p1 = esl_sext<32,16>(input_data_1_y_load_1_reg_3253.read());
}

void integrateKernel::thread_val_y_s_fu_1911_p1() {
    val_y_s_fu_1911_p1 = esl_sext<32,16>(input_data_0_y_load_1_reg_3248.read());
}

void integrateKernel::thread_vol_data2_sum_cast_fu_1139_p1() {
    vol_data2_sum_cast_fu_1139_p1 = esl_zext<64,33>(vol_data2_sum_fu_1134_p2.read());
}

void integrateKernel::thread_vol_data2_sum_fu_1134_p2() {
    vol_data2_sum_fu_1134_p2 = (!tmp_4_cast_reg_2702.read().is_01() || !tmp_10_cast_fu_1130_p1.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_4_cast_reg_2702.read()) + sc_biguint<33>(tmp_10_cast_fu_1130_p1.read()));
}

void integrateKernel::thread_vol_data_ARVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_ARREADY.read()))) {
        vol_data_ARVALID = ap_const_logic_1;
    } else {
        vol_data_ARVALID = ap_const_logic_0;
    }
}

void integrateKernel::thread_vol_data_AWVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_AWREADY.read()))) {
        vol_data_AWVALID = ap_const_logic_1;
    } else {
        vol_data_AWVALID = ap_const_logic_0;
    }
}

void integrateKernel::thread_vol_data_BREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read()) && 
         esl_seteq<1,1,1>(vol_data_BVALID.read(), ap_const_logic_1))) {
        vol_data_BREADY = ap_const_logic_1;
    } else {
        vol_data_BREADY = ap_const_logic_0;
    }
}

void integrateKernel::thread_vol_data_RREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0))) {
        vol_data_RREADY = ap_const_logic_1;
    } else {
        vol_data_RREADY = ap_const_logic_0;
    }
}

void integrateKernel::thread_vol_data_WDATA() {
    vol_data_WDATA = esl_concat<16,16>(input_data_y_gep_reg_3468.read(), input_data_x_gep_reg_3463.read());
}

void integrateKernel::thread_vol_data_WVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_3428_pp3_iter1_reg.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_01001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_vol_data_WREADY.read()))) {
        vol_data_WVALID = ap_const_logic_1;
    } else {
        vol_data_WVALID = ap_const_logic_0;
    }
}

void integrateKernel::thread_vol_data_blk_n_AR() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        vol_data_blk_n_AR = m_axi_vol_data_ARREADY.read();
    } else {
        vol_data_blk_n_AR = ap_const_logic_1;
    }
}

void integrateKernel::thread_vol_data_blk_n_AW() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state139.read())) {
        vol_data_blk_n_AW = m_axi_vol_data_AWREADY.read();
    } else {
        vol_data_blk_n_AW = ap_const_logic_1;
    }
}

void integrateKernel::thread_vol_data_blk_n_B() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        vol_data_blk_n_B = m_axi_vol_data_BVALID.read();
    } else {
        vol_data_blk_n_B = ap_const_logic_1;
    }
}

void integrateKernel::thread_vol_data_blk_n_R() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        vol_data_blk_n_R = m_axi_vol_data_RVALID.read();
    } else {
        vol_data_blk_n_R = ap_const_logic_1;
    }
}

void integrateKernel::thread_vol_data_blk_n_W() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond2_reg_3428_pp3_iter1_reg.read(), ap_const_lv1_0))) {
        vol_data_blk_n_W = m_axi_vol_data_WREADY.read();
    } else {
        vol_data_blk_n_W = ap_const_logic_1;
    }
}

void integrateKernel::thread_x_1_1_fu_1226_p2() {
    x_1_1_fu_1226_p2 = (!ap_phi_mux_x_phi_fu_562_p4.read().is_01() || !ap_const_lv9_2.is_01())? sc_lv<9>(): (sc_biguint<9>(ap_phi_mux_x_phi_fu_562_p4.read()) + sc_biguint<9>(ap_const_lv9_2));
}

void integrateKernel::thread_x_1_s_fu_1215_p2() {
    x_1_s_fu_1215_p2 = (tmp_53_fu_1206_p1.read() | ap_const_lv8_1);
}

void integrateKernel::thread_x_assign_2_fu_2091_p3() {
    x_assign_2_fu_2091_p3 = (!tmp_i1_reg_3371.read()[0].is_01())? sc_lv<32>(): ((tmp_i1_reg_3371.read()[0].to_bool())? a_assign_3_reg_3359_pp2_iter88_reg.read(): maxweight_read_reg_2633.read());
}

void integrateKernel::thread_x_assign_s_fu_1941_p3() {
    x_assign_s_fu_1941_p3 = (!tmp_i5_reg_3366.read()[0].is_01())? sc_lv<32>(): ((tmp_i5_reg_3366.read()[0].to_bool())? a_assign_1_reg_3342_pp2_iter88_reg.read(): maxweight_read_reg_2633.read());
}

void integrateKernel::thread_y_1_fu_2614_p2() {
    y_1_fu_2614_p2 = (!y_mid2_reg_2762.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(y_mid2_reg_2762.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void integrateKernel::thread_y_cast_fu_1113_p1() {
    y_cast_fu_1113_p1 = esl_zext<32,9>(y_mid2_reg_2762.read());
}

void integrateKernel::thread_y_mid2_fu_1076_p3() {
    y_mid2_fu_1076_p3 = (!tmp_34_fu_1070_p2.read()[0].is_01())? sc_lv<9>(): ((tmp_34_fu_1070_p2.read()[0].to_bool())? ap_const_lv9_0: y_reg_536.read());
}

void integrateKernel::thread_z_s_fu_1084_p2() {
    z_s_fu_1084_p2 = (!ap_const_lv32_1.is_01() || !z_reg_527.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(z_reg_527.read()));
}

}

