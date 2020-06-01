-- ==============================================================
-- File generated on Fri Jan 17 13:00:50 EET 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity integrateKernel_control_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 8;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    -- axi4 lite slave signals
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    interrupt             :out  STD_LOGIC;
    -- user signals
    ap_start              :out  STD_LOGIC;
    ap_done               :in   STD_LOGIC;
    ap_ready              :in   STD_LOGIC;
    ap_idle               :in   STD_LOGIC;
    size                  :out  STD_LOGIC_VECTOR(95 downto 0);
    vol_data_offset       :out  STD_LOGIC_VECTOR(31 downto 0);
    dim                   :out  STD_LOGIC_VECTOR(95 downto 0);
    depth_offset          :out  STD_LOGIC_VECTOR(31 downto 0);
    depthSize_x           :out  STD_LOGIC_VECTOR(31 downto 0);
    depthSize_y           :out  STD_LOGIC_VECTOR(31 downto 0);
    invTrack_data         :out  STD_LOGIC_VECTOR(511 downto 0);
    K_data                :out  STD_LOGIC_VECTOR(511 downto 0);
    mu                    :out  STD_LOGIC_VECTOR(31 downto 0);
    maxweight             :out  STD_LOGIC_VECTOR(31 downto 0);
    start                 :out  STD_LOGIC_VECTOR(31 downto 0);
    end_r                 :out  STD_LOGIC_VECTOR(31 downto 0)
);
end entity integrateKernel_control_s_axi;

-- ------------------------Address Info-------------------
-- 0x00 : Control signals
--        bit 0  - ap_start (Read/Write/COH)
--        bit 1  - ap_done (Read/COR)
--        bit 2  - ap_idle (Read)
--        bit 3  - ap_ready (Read)
--        bit 7  - auto_restart (Read/Write)
--        others - reserved
-- 0x04 : Global Interrupt Enable Register
--        bit 0  - Global Interrupt Enable (Read/Write)
--        others - reserved
-- 0x08 : IP Interrupt Enable Register (Read/Write)
--        bit 0  - Channel 0 (ap_done)
--        bit 1  - Channel 1 (ap_ready)
--        others - reserved
-- 0x0c : IP Interrupt Status Register (Read/TOW)
--        bit 0  - Channel 0 (ap_done)
--        bit 1  - Channel 1 (ap_ready)
--        others - reserved
-- 0x10 : Data signal of size
--        bit 31~0 - size[31:0] (Read/Write)
-- 0x14 : Data signal of size
--        bit 31~0 - size[63:32] (Read/Write)
-- 0x18 : Data signal of size
--        bit 31~0 - size[95:64] (Read/Write)
-- 0x1c : reserved
-- 0x20 : Data signal of vol_data_offset
--        bit 31~0 - vol_data_offset[31:0] (Read/Write)
-- 0x24 : reserved
-- 0x28 : Data signal of dim
--        bit 31~0 - dim[31:0] (Read/Write)
-- 0x2c : Data signal of dim
--        bit 31~0 - dim[63:32] (Read/Write)
-- 0x30 : Data signal of dim
--        bit 31~0 - dim[95:64] (Read/Write)
-- 0x34 : reserved
-- 0x38 : Data signal of depth_offset
--        bit 31~0 - depth_offset[31:0] (Read/Write)
-- 0x3c : reserved
-- 0x40 : Data signal of depthSize_x
--        bit 31~0 - depthSize_x[31:0] (Read/Write)
-- 0x44 : reserved
-- 0x48 : Data signal of depthSize_y
--        bit 31~0 - depthSize_y[31:0] (Read/Write)
-- 0x4c : reserved
-- 0x50 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[31:0] (Read/Write)
-- 0x54 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[63:32] (Read/Write)
-- 0x58 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[95:64] (Read/Write)
-- 0x5c : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[127:96] (Read/Write)
-- 0x60 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[159:128] (Read/Write)
-- 0x64 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[191:160] (Read/Write)
-- 0x68 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[223:192] (Read/Write)
-- 0x6c : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[255:224] (Read/Write)
-- 0x70 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[287:256] (Read/Write)
-- 0x74 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[319:288] (Read/Write)
-- 0x78 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[351:320] (Read/Write)
-- 0x7c : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[383:352] (Read/Write)
-- 0x80 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[415:384] (Read/Write)
-- 0x84 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[447:416] (Read/Write)
-- 0x88 : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[479:448] (Read/Write)
-- 0x8c : Data signal of invTrack_data
--        bit 31~0 - invTrack_data[511:480] (Read/Write)
-- 0x90 : reserved
-- 0x94 : Data signal of K_data
--        bit 31~0 - K_data[31:0] (Read/Write)
-- 0x98 : Data signal of K_data
--        bit 31~0 - K_data[63:32] (Read/Write)
-- 0x9c : Data signal of K_data
--        bit 31~0 - K_data[95:64] (Read/Write)
-- 0xa0 : Data signal of K_data
--        bit 31~0 - K_data[127:96] (Read/Write)
-- 0xa4 : Data signal of K_data
--        bit 31~0 - K_data[159:128] (Read/Write)
-- 0xa8 : Data signal of K_data
--        bit 31~0 - K_data[191:160] (Read/Write)
-- 0xac : Data signal of K_data
--        bit 31~0 - K_data[223:192] (Read/Write)
-- 0xb0 : Data signal of K_data
--        bit 31~0 - K_data[255:224] (Read/Write)
-- 0xb4 : Data signal of K_data
--        bit 31~0 - K_data[287:256] (Read/Write)
-- 0xb8 : Data signal of K_data
--        bit 31~0 - K_data[319:288] (Read/Write)
-- 0xbc : Data signal of K_data
--        bit 31~0 - K_data[351:320] (Read/Write)
-- 0xc0 : Data signal of K_data
--        bit 31~0 - K_data[383:352] (Read/Write)
-- 0xc4 : Data signal of K_data
--        bit 31~0 - K_data[415:384] (Read/Write)
-- 0xc8 : Data signal of K_data
--        bit 31~0 - K_data[447:416] (Read/Write)
-- 0xcc : Data signal of K_data
--        bit 31~0 - K_data[479:448] (Read/Write)
-- 0xd0 : Data signal of K_data
--        bit 31~0 - K_data[511:480] (Read/Write)
-- 0xd4 : reserved
-- 0xd8 : Data signal of mu
--        bit 31~0 - mu[31:0] (Read/Write)
-- 0xdc : reserved
-- 0xe0 : Data signal of maxweight
--        bit 31~0 - maxweight[31:0] (Read/Write)
-- 0xe4 : reserved
-- 0xe8 : Data signal of start
--        bit 31~0 - start[31:0] (Read/Write)
-- 0xec : reserved
-- 0xf0 : Data signal of end_r
--        bit 31~0 - end_r[31:0] (Read/Write)
-- 0xf4 : reserved
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of integrateKernel_control_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL                : INTEGER := 16#00#;
    constant ADDR_GIE                    : INTEGER := 16#04#;
    constant ADDR_IER                    : INTEGER := 16#08#;
    constant ADDR_ISR                    : INTEGER := 16#0c#;
    constant ADDR_SIZE_DATA_0            : INTEGER := 16#10#;
    constant ADDR_SIZE_DATA_1            : INTEGER := 16#14#;
    constant ADDR_SIZE_DATA_2            : INTEGER := 16#18#;
    constant ADDR_SIZE_CTRL              : INTEGER := 16#1c#;
    constant ADDR_VOL_DATA_OFFSET_DATA_0 : INTEGER := 16#20#;
    constant ADDR_VOL_DATA_OFFSET_CTRL   : INTEGER := 16#24#;
    constant ADDR_DIM_DATA_0             : INTEGER := 16#28#;
    constant ADDR_DIM_DATA_1             : INTEGER := 16#2c#;
    constant ADDR_DIM_DATA_2             : INTEGER := 16#30#;
    constant ADDR_DIM_CTRL               : INTEGER := 16#34#;
    constant ADDR_DEPTH_OFFSET_DATA_0    : INTEGER := 16#38#;
    constant ADDR_DEPTH_OFFSET_CTRL      : INTEGER := 16#3c#;
    constant ADDR_DEPTHSIZE_X_DATA_0     : INTEGER := 16#40#;
    constant ADDR_DEPTHSIZE_X_CTRL       : INTEGER := 16#44#;
    constant ADDR_DEPTHSIZE_Y_DATA_0     : INTEGER := 16#48#;
    constant ADDR_DEPTHSIZE_Y_CTRL       : INTEGER := 16#4c#;
    constant ADDR_INVTRACK_DATA_DATA_0   : INTEGER := 16#50#;
    constant ADDR_INVTRACK_DATA_DATA_1   : INTEGER := 16#54#;
    constant ADDR_INVTRACK_DATA_DATA_2   : INTEGER := 16#58#;
    constant ADDR_INVTRACK_DATA_DATA_3   : INTEGER := 16#5c#;
    constant ADDR_INVTRACK_DATA_DATA_4   : INTEGER := 16#60#;
    constant ADDR_INVTRACK_DATA_DATA_5   : INTEGER := 16#64#;
    constant ADDR_INVTRACK_DATA_DATA_6   : INTEGER := 16#68#;
    constant ADDR_INVTRACK_DATA_DATA_7   : INTEGER := 16#6c#;
    constant ADDR_INVTRACK_DATA_DATA_8   : INTEGER := 16#70#;
    constant ADDR_INVTRACK_DATA_DATA_9   : INTEGER := 16#74#;
    constant ADDR_INVTRACK_DATA_DATA_10  : INTEGER := 16#78#;
    constant ADDR_INVTRACK_DATA_DATA_11  : INTEGER := 16#7c#;
    constant ADDR_INVTRACK_DATA_DATA_12  : INTEGER := 16#80#;
    constant ADDR_INVTRACK_DATA_DATA_13  : INTEGER := 16#84#;
    constant ADDR_INVTRACK_DATA_DATA_14  : INTEGER := 16#88#;
    constant ADDR_INVTRACK_DATA_DATA_15  : INTEGER := 16#8c#;
    constant ADDR_INVTRACK_DATA_CTRL     : INTEGER := 16#90#;
    constant ADDR_K_DATA_DATA_0          : INTEGER := 16#94#;
    constant ADDR_K_DATA_DATA_1          : INTEGER := 16#98#;
    constant ADDR_K_DATA_DATA_2          : INTEGER := 16#9c#;
    constant ADDR_K_DATA_DATA_3          : INTEGER := 16#a0#;
    constant ADDR_K_DATA_DATA_4          : INTEGER := 16#a4#;
    constant ADDR_K_DATA_DATA_5          : INTEGER := 16#a8#;
    constant ADDR_K_DATA_DATA_6          : INTEGER := 16#ac#;
    constant ADDR_K_DATA_DATA_7          : INTEGER := 16#b0#;
    constant ADDR_K_DATA_DATA_8          : INTEGER := 16#b4#;
    constant ADDR_K_DATA_DATA_9          : INTEGER := 16#b8#;
    constant ADDR_K_DATA_DATA_10         : INTEGER := 16#bc#;
    constant ADDR_K_DATA_DATA_11         : INTEGER := 16#c0#;
    constant ADDR_K_DATA_DATA_12         : INTEGER := 16#c4#;
    constant ADDR_K_DATA_DATA_13         : INTEGER := 16#c8#;
    constant ADDR_K_DATA_DATA_14         : INTEGER := 16#cc#;
    constant ADDR_K_DATA_DATA_15         : INTEGER := 16#d0#;
    constant ADDR_K_DATA_CTRL            : INTEGER := 16#d4#;
    constant ADDR_MU_DATA_0              : INTEGER := 16#d8#;
    constant ADDR_MU_CTRL                : INTEGER := 16#dc#;
    constant ADDR_MAXWEIGHT_DATA_0       : INTEGER := 16#e0#;
    constant ADDR_MAXWEIGHT_CTRL         : INTEGER := 16#e4#;
    constant ADDR_START_DATA_0           : INTEGER := 16#e8#;
    constant ADDR_START_CTRL             : INTEGER := 16#ec#;
    constant ADDR_END_R_DATA_0           : INTEGER := 16#f0#;
    constant ADDR_END_R_CTRL             : INTEGER := 16#f4#;
    constant ADDR_BITS         : INTEGER := 8;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(31 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(31 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_ap_idle         : STD_LOGIC;
    signal int_ap_ready        : STD_LOGIC;
    signal int_ap_done         : STD_LOGIC := '0';
    signal int_ap_start        : STD_LOGIC := '0';
    signal int_auto_restart    : STD_LOGIC := '0';
    signal int_gie             : STD_LOGIC := '0';
    signal int_ier             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_isr             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_size            : UNSIGNED(95 downto 0) := (others => '0');
    signal int_vol_data_offset : UNSIGNED(31 downto 0) := (others => '0');
    signal int_dim             : UNSIGNED(95 downto 0) := (others => '0');
    signal int_depth_offset    : UNSIGNED(31 downto 0) := (others => '0');
    signal int_depthSize_x     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_depthSize_y     : UNSIGNED(31 downto 0) := (others => '0');
    signal int_invTrack_data   : UNSIGNED(511 downto 0) := (others => '0');
    signal int_K_data          : UNSIGNED(511 downto 0) := (others => '0');
    signal int_mu              : UNSIGNED(31 downto 0) := (others => '0');
    signal int_maxweight       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_start           : UNSIGNED(31 downto 0) := (others => '0');
    signal int_end_r           : UNSIGNED(31 downto 0) := (others => '0');


begin
-- ----------------------- Instantiation------------------

-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 0));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    case (TO_INTEGER(raddr)) is
                    when ADDR_AP_CTRL =>
                        rdata_data <= (7 => int_auto_restart, 3 => int_ap_ready, 2 => int_ap_idle, 1 => int_ap_done, 0 => int_ap_start, others => '0');
                    when ADDR_GIE =>
                        rdata_data <= (0 => int_gie, others => '0');
                    when ADDR_IER =>
                        rdata_data <= (1 => int_ier(1), 0 => int_ier(0), others => '0');
                    when ADDR_ISR =>
                        rdata_data <= (1 => int_isr(1), 0 => int_isr(0), others => '0');
                    when ADDR_SIZE_DATA_0 =>
                        rdata_data <= RESIZE(int_size(31 downto 0), 32);
                    when ADDR_SIZE_DATA_1 =>
                        rdata_data <= RESIZE(int_size(63 downto 32), 32);
                    when ADDR_SIZE_DATA_2 =>
                        rdata_data <= RESIZE(int_size(95 downto 64), 32);
                    when ADDR_VOL_DATA_OFFSET_DATA_0 =>
                        rdata_data <= RESIZE(int_vol_data_offset(31 downto 0), 32);
                    when ADDR_DIM_DATA_0 =>
                        rdata_data <= RESIZE(int_dim(31 downto 0), 32);
                    when ADDR_DIM_DATA_1 =>
                        rdata_data <= RESIZE(int_dim(63 downto 32), 32);
                    when ADDR_DIM_DATA_2 =>
                        rdata_data <= RESIZE(int_dim(95 downto 64), 32);
                    when ADDR_DEPTH_OFFSET_DATA_0 =>
                        rdata_data <= RESIZE(int_depth_offset(31 downto 0), 32);
                    when ADDR_DEPTHSIZE_X_DATA_0 =>
                        rdata_data <= RESIZE(int_depthSize_x(31 downto 0), 32);
                    when ADDR_DEPTHSIZE_Y_DATA_0 =>
                        rdata_data <= RESIZE(int_depthSize_y(31 downto 0), 32);
                    when ADDR_INVTRACK_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_invTrack_data(31 downto 0), 32);
                    when ADDR_INVTRACK_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_invTrack_data(63 downto 32), 32);
                    when ADDR_INVTRACK_DATA_DATA_2 =>
                        rdata_data <= RESIZE(int_invTrack_data(95 downto 64), 32);
                    when ADDR_INVTRACK_DATA_DATA_3 =>
                        rdata_data <= RESIZE(int_invTrack_data(127 downto 96), 32);
                    when ADDR_INVTRACK_DATA_DATA_4 =>
                        rdata_data <= RESIZE(int_invTrack_data(159 downto 128), 32);
                    when ADDR_INVTRACK_DATA_DATA_5 =>
                        rdata_data <= RESIZE(int_invTrack_data(191 downto 160), 32);
                    when ADDR_INVTRACK_DATA_DATA_6 =>
                        rdata_data <= RESIZE(int_invTrack_data(223 downto 192), 32);
                    when ADDR_INVTRACK_DATA_DATA_7 =>
                        rdata_data <= RESIZE(int_invTrack_data(255 downto 224), 32);
                    when ADDR_INVTRACK_DATA_DATA_8 =>
                        rdata_data <= RESIZE(int_invTrack_data(287 downto 256), 32);
                    when ADDR_INVTRACK_DATA_DATA_9 =>
                        rdata_data <= RESIZE(int_invTrack_data(319 downto 288), 32);
                    when ADDR_INVTRACK_DATA_DATA_10 =>
                        rdata_data <= RESIZE(int_invTrack_data(351 downto 320), 32);
                    when ADDR_INVTRACK_DATA_DATA_11 =>
                        rdata_data <= RESIZE(int_invTrack_data(383 downto 352), 32);
                    when ADDR_INVTRACK_DATA_DATA_12 =>
                        rdata_data <= RESIZE(int_invTrack_data(415 downto 384), 32);
                    when ADDR_INVTRACK_DATA_DATA_13 =>
                        rdata_data <= RESIZE(int_invTrack_data(447 downto 416), 32);
                    when ADDR_INVTRACK_DATA_DATA_14 =>
                        rdata_data <= RESIZE(int_invTrack_data(479 downto 448), 32);
                    when ADDR_INVTRACK_DATA_DATA_15 =>
                        rdata_data <= RESIZE(int_invTrack_data(511 downto 480), 32);
                    when ADDR_K_DATA_DATA_0 =>
                        rdata_data <= RESIZE(int_K_data(31 downto 0), 32);
                    when ADDR_K_DATA_DATA_1 =>
                        rdata_data <= RESIZE(int_K_data(63 downto 32), 32);
                    when ADDR_K_DATA_DATA_2 =>
                        rdata_data <= RESIZE(int_K_data(95 downto 64), 32);
                    when ADDR_K_DATA_DATA_3 =>
                        rdata_data <= RESIZE(int_K_data(127 downto 96), 32);
                    when ADDR_K_DATA_DATA_4 =>
                        rdata_data <= RESIZE(int_K_data(159 downto 128), 32);
                    when ADDR_K_DATA_DATA_5 =>
                        rdata_data <= RESIZE(int_K_data(191 downto 160), 32);
                    when ADDR_K_DATA_DATA_6 =>
                        rdata_data <= RESIZE(int_K_data(223 downto 192), 32);
                    when ADDR_K_DATA_DATA_7 =>
                        rdata_data <= RESIZE(int_K_data(255 downto 224), 32);
                    when ADDR_K_DATA_DATA_8 =>
                        rdata_data <= RESIZE(int_K_data(287 downto 256), 32);
                    when ADDR_K_DATA_DATA_9 =>
                        rdata_data <= RESIZE(int_K_data(319 downto 288), 32);
                    when ADDR_K_DATA_DATA_10 =>
                        rdata_data <= RESIZE(int_K_data(351 downto 320), 32);
                    when ADDR_K_DATA_DATA_11 =>
                        rdata_data <= RESIZE(int_K_data(383 downto 352), 32);
                    when ADDR_K_DATA_DATA_12 =>
                        rdata_data <= RESIZE(int_K_data(415 downto 384), 32);
                    when ADDR_K_DATA_DATA_13 =>
                        rdata_data <= RESIZE(int_K_data(447 downto 416), 32);
                    when ADDR_K_DATA_DATA_14 =>
                        rdata_data <= RESIZE(int_K_data(479 downto 448), 32);
                    when ADDR_K_DATA_DATA_15 =>
                        rdata_data <= RESIZE(int_K_data(511 downto 480), 32);
                    when ADDR_MU_DATA_0 =>
                        rdata_data <= RESIZE(int_mu(31 downto 0), 32);
                    when ADDR_MAXWEIGHT_DATA_0 =>
                        rdata_data <= RESIZE(int_maxweight(31 downto 0), 32);
                    when ADDR_START_DATA_0 =>
                        rdata_data <= RESIZE(int_start(31 downto 0), 32);
                    when ADDR_END_R_DATA_0 =>
                        rdata_data <= RESIZE(int_end_r(31 downto 0), 32);
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;
    size                 <= STD_LOGIC_VECTOR(int_size);
    vol_data_offset      <= STD_LOGIC_VECTOR(int_vol_data_offset);
    dim                  <= STD_LOGIC_VECTOR(int_dim);
    depth_offset         <= STD_LOGIC_VECTOR(int_depth_offset);
    depthSize_x          <= STD_LOGIC_VECTOR(int_depthSize_x);
    depthSize_y          <= STD_LOGIC_VECTOR(int_depthSize_y);
    invTrack_data        <= STD_LOGIC_VECTOR(int_invTrack_data);
    K_data               <= STD_LOGIC_VECTOR(int_K_data);
    mu                   <= STD_LOGIC_VECTOR(int_mu);
    maxweight            <= STD_LOGIC_VECTOR(int_maxweight);
    start                <= STD_LOGIC_VECTOR(int_start);
    end_r                <= STD_LOGIC_VECTOR(int_end_r);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_start <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1' and WDATA(0) = '1') then
                    int_ap_start <= '1';
                elsif (ap_ready = '1') then
                    int_ap_start <= int_auto_restart; -- clear on handshake/auto restart
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_done <= '0';
            elsif (ACLK_EN = '1') then
                if (ap_done = '1') then
                    int_ap_done <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_AP_CTRL) then
                    int_ap_done <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_idle <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_idle <= ap_idle;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_ready <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_ready <= ap_ready;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_auto_restart <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1') then
                    int_auto_restart <= WDATA(7);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_gie <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_GIE and WSTRB(0) = '1') then
                    int_gie <= WDATA(0);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ier <= "00";
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IER and WSTRB(0) = '1') then
                    int_ier <= UNSIGNED(WDATA(1 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(0) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(0) = '1' and ap_done = '1') then
                    int_isr(0) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(0) <= int_isr(0) xor WDATA(0); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(1) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(1) = '1' and ap_ready = '1') then
                    int_isr(1) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(1) <= int_isr(1) xor WDATA(1); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SIZE_DATA_0) then
                    int_size(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_size(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SIZE_DATA_1) then
                    int_size(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_size(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_SIZE_DATA_2) then
                    int_size(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_size(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_VOL_DATA_OFFSET_DATA_0) then
                    int_vol_data_offset(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_vol_data_offset(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DIM_DATA_0) then
                    int_dim(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_dim(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DIM_DATA_1) then
                    int_dim(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_dim(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DIM_DATA_2) then
                    int_dim(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_dim(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DEPTH_OFFSET_DATA_0) then
                    int_depth_offset(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_depth_offset(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DEPTHSIZE_X_DATA_0) then
                    int_depthSize_x(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_depthSize_x(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_DEPTHSIZE_Y_DATA_0) then
                    int_depthSize_y(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_depthSize_y(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_0) then
                    int_invTrack_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_1) then
                    int_invTrack_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_2) then
                    int_invTrack_data(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_3) then
                    int_invTrack_data(127 downto 96) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(127 downto 96));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_4) then
                    int_invTrack_data(159 downto 128) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(159 downto 128));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_5) then
                    int_invTrack_data(191 downto 160) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(191 downto 160));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_6) then
                    int_invTrack_data(223 downto 192) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(223 downto 192));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_7) then
                    int_invTrack_data(255 downto 224) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(255 downto 224));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_8) then
                    int_invTrack_data(287 downto 256) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(287 downto 256));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_9) then
                    int_invTrack_data(319 downto 288) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(319 downto 288));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_10) then
                    int_invTrack_data(351 downto 320) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(351 downto 320));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_11) then
                    int_invTrack_data(383 downto 352) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(383 downto 352));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_12) then
                    int_invTrack_data(415 downto 384) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(415 downto 384));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_13) then
                    int_invTrack_data(447 downto 416) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(447 downto 416));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_14) then
                    int_invTrack_data(479 downto 448) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(479 downto 448));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INVTRACK_DATA_DATA_15) then
                    int_invTrack_data(511 downto 480) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_invTrack_data(511 downto 480));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_0) then
                    int_K_data(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_1) then
                    int_K_data(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_2) then
                    int_K_data(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_3) then
                    int_K_data(127 downto 96) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(127 downto 96));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_4) then
                    int_K_data(159 downto 128) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(159 downto 128));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_5) then
                    int_K_data(191 downto 160) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(191 downto 160));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_6) then
                    int_K_data(223 downto 192) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(223 downto 192));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_7) then
                    int_K_data(255 downto 224) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(255 downto 224));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_8) then
                    int_K_data(287 downto 256) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(287 downto 256));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_9) then
                    int_K_data(319 downto 288) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(319 downto 288));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_10) then
                    int_K_data(351 downto 320) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(351 downto 320));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_11) then
                    int_K_data(383 downto 352) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(383 downto 352));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_12) then
                    int_K_data(415 downto 384) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(415 downto 384));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_13) then
                    int_K_data(447 downto 416) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(447 downto 416));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_14) then
                    int_K_data(479 downto 448) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(479 downto 448));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_K_DATA_DATA_15) then
                    int_K_data(511 downto 480) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_K_data(511 downto 480));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_MU_DATA_0) then
                    int_mu(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_mu(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_MAXWEIGHT_DATA_0) then
                    int_maxweight(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_maxweight(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_START_DATA_0) then
                    int_start(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_start(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_END_R_DATA_0) then
                    int_end_r(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_end_r(31 downto 0));
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------

end architecture behave;
