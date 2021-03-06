-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity operator_mul is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    M_data_read : IN STD_LOGIC_VECTOR (511 downto 0);
    v_x_read : IN STD_LOGIC_VECTOR (31 downto 0);
    v_y_read : IN STD_LOGIC_VECTOR (31 downto 0);
    v_z_read : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of operator_mul is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_80 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010000000";
    constant ap_const_lv32_9F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010011111";
    constant ap_const_lv32_100 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100000000";
    constant ap_const_lv32_11F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100011111";
    constant ap_const_lv32_180 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110000000";
    constant ap_const_lv32_19F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110011111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv32_A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010100000";
    constant ap_const_lv32_BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000010111111";
    constant ap_const_lv32_120 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100100000";
    constant ap_const_lv32_13F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000100111111";
    constant ap_const_lv32_1A0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110100000";
    constant ap_const_lv32_1BF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000110111111";
    constant ap_const_lv32_40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001000000";
    constant ap_const_lv32_5F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000001011111";
    constant ap_const_lv32_C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011000000";
    constant ap_const_lv32_DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000011011111";
    constant ap_const_lv32_140 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101000000";
    constant ap_const_lv32_15F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000101011111";
    constant ap_const_lv32_1C0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111000000";
    constant ap_const_lv32_1DF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000111011111";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal ap_block_state1_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state2_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_state6_pp0_stage0_iter5 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter6 : BOOLEAN;
    signal ap_block_state8_pp0_stage0_iter7 : BOOLEAN;
    signal ap_block_state9_pp0_stage0_iter8 : BOOLEAN;
    signal ap_block_state10_pp0_stage0_iter9 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal tmp_4_reg_390 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_4_reg_390_pp0_iter1_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_reg_410 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_reg_410_pp0_iter1_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_13_reg_430 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_13_reg_430_pp0_iter1_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_120_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i_reg_435 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_125_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i_15_reg_440 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_130_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_20_i_reg_445 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_135_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i4_reg_450 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_140_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i5_reg_455 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_145_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_20_i7_reg_460 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_150_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i1_reg_465 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_155_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_i1_16_reg_470 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_160_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_20_i1_reg_475 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_84_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_reg_495 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_88_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp1_reg_500 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_92_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp2_reg_505 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_96_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp3_reg_510 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_100_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp4_reg_515 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_104_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp5_reg_520 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal grp_fu_88_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_96_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_104_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_120_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_125_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_130_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_135_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_140_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_145_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_150_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_155_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_160_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_6_fu_165_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_8_fu_174_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_fu_189_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_9_fu_214_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_fu_229_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_fu_244_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_10_fu_269_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_11_fu_284_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_12_fu_299_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_108_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_112_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_116_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal M_data_read_int_reg : STD_LOGIC_VECTOR (511 downto 0);
    signal v_x_read_int_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal v_y_read_int_reg : STD_LOGIC_VECTOR (31 downto 0);
    signal v_z_read_int_reg : STD_LOGIC_VECTOR (31 downto 0);

    component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U1 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_i_reg_435,
        din1 => tmp_i_15_reg_440,
        ce => ap_const_logic_1,
        dout => grp_fu_84_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U2 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_20_i_reg_445,
        din1 => grp_fu_88_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_88_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U3 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_i4_reg_450,
        din1 => tmp_i5_reg_455,
        ce => ap_const_logic_1,
        dout => grp_fu_92_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U4 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_20_i7_reg_460,
        din1 => grp_fu_96_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_96_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U5 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_i1_reg_465,
        din1 => tmp_i1_16_reg_470,
        ce => ap_const_logic_1,
        dout => grp_fu_100_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U6 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_20_i1_reg_475,
        din1 => grp_fu_104_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_104_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U7 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp1_reg_500,
        din1 => tmp_reg_495,
        ce => ap_const_logic_1,
        dout => grp_fu_108_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U8 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp3_reg_510,
        din1 => tmp2_reg_505,
        ce => ap_const_logic_1,
        dout => grp_fu_112_p2);

    integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1_U9 : component integrateKernel_fadd_32ns_32ns_32_4_full_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp5_reg_520,
        din1 => tmp4_reg_515,
        ce => ap_const_logic_1,
        dout => grp_fu_116_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U10 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_120_p0,
        din1 => v_x_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_120_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U11 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_125_p0,
        din1 => v_y_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_125_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U12 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_130_p0,
        din1 => v_z_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_130_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U13 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_135_p0,
        din1 => v_x_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_135_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U14 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_140_p0,
        din1 => v_y_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_140_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U15 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_145_p0,
        din1 => v_z_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_145_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U16 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_150_p0,
        din1 => v_x_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_150_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U17 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_155_p0,
        din1 => v_y_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_155_p2);

    integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1_U18 : component integrateKernel_fmul_32ns_32ns_32_2_max_dsp_1
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_160_p0,
        din1 => v_z_read_int_reg,
        ce => ap_const_logic_1,
        dout => grp_fu_160_p2);





    M_data_read_int_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            M_data_read_int_reg <= M_data_read;
        end if;
    end process;

    v_x_read_int_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            v_x_read_int_reg <= v_x_read;
        end if;
    end process;

    v_y_read_int_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            v_y_read_int_reg <= v_y_read;
        end if;
    end process;

    v_z_read_int_reg_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            v_z_read_int_reg <= v_z_read;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                tmp1_reg_500 <= grp_fu_88_p2;
                tmp2_reg_505 <= grp_fu_92_p2;
                tmp3_reg_510 <= grp_fu_96_p2;
                tmp4_reg_515 <= grp_fu_100_p2;
                tmp5_reg_520 <= grp_fu_104_p2;
                tmp_13_reg_430 <= M_data_read_int_reg(479 downto 448);
                tmp_13_reg_430_pp0_iter1_reg <= tmp_13_reg_430;
                tmp_20_i1_reg_475 <= grp_fu_160_p2;
                tmp_20_i7_reg_460 <= grp_fu_145_p2;
                tmp_20_i_reg_445 <= grp_fu_130_p2;
                tmp_3_reg_410 <= M_data_read_int_reg(447 downto 416);
                tmp_3_reg_410_pp0_iter1_reg <= tmp_3_reg_410;
                tmp_4_reg_390 <= M_data_read_int_reg(415 downto 384);
                tmp_4_reg_390_pp0_iter1_reg <= tmp_4_reg_390;
                tmp_i1_16_reg_470 <= grp_fu_155_p2;
                tmp_i1_reg_465 <= grp_fu_150_p2;
                tmp_i4_reg_450 <= grp_fu_135_p2;
                tmp_i5_reg_455 <= grp_fu_140_p2;
                tmp_i_15_reg_440 <= grp_fu_125_p2;
                tmp_i_reg_435 <= grp_fu_120_p2;
                tmp_reg_495 <= grp_fu_84_p2;
            end if;
        end if;
    end process;
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state10_pp0_stage0_iter9 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state1_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage0_iter5 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state7_pp0_stage0_iter6 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state8_pp0_stage0_iter7 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state9_pp0_stage0_iter8 <= not((ap_const_boolean_1 = ap_const_boolean_1));
    ap_return_0 <= grp_fu_108_p2;
    ap_return_1 <= grp_fu_112_p2;
    ap_return_2 <= grp_fu_116_p2;
    grp_fu_104_p1 <= tmp_13_reg_430_pp0_iter1_reg;
    grp_fu_120_p0 <= tmp_6_fu_165_p1;
    grp_fu_125_p0 <= tmp_8_fu_174_p4;
    grp_fu_130_p0 <= tmp_s_fu_189_p4;
    grp_fu_135_p0 <= tmp_9_fu_214_p4;
    grp_fu_140_p0 <= tmp_1_fu_229_p4;
    grp_fu_145_p0 <= tmp_2_fu_244_p4;
    grp_fu_150_p0 <= tmp_10_fu_269_p4;
    grp_fu_155_p0 <= tmp_11_fu_284_p4;
    grp_fu_160_p0 <= tmp_12_fu_299_p4;
    grp_fu_88_p1 <= tmp_4_reg_390_pp0_iter1_reg;
    grp_fu_96_p1 <= tmp_3_reg_410_pp0_iter1_reg;
    tmp_10_fu_269_p4 <= M_data_read_int_reg(95 downto 64);
    tmp_11_fu_284_p4 <= M_data_read_int_reg(223 downto 192);
    tmp_12_fu_299_p4 <= M_data_read_int_reg(351 downto 320);
    tmp_1_fu_229_p4 <= M_data_read_int_reg(191 downto 160);
    tmp_2_fu_244_p4 <= M_data_read_int_reg(319 downto 288);
    tmp_6_fu_165_p1 <= M_data_read_int_reg(32 - 1 downto 0);
    tmp_8_fu_174_p4 <= M_data_read_int_reg(159 downto 128);
    tmp_9_fu_214_p4 <= M_data_read_int_reg(63 downto 32);
    tmp_s_fu_189_p4 <= M_data_read_int_reg(287 downto 256);
end behav;
