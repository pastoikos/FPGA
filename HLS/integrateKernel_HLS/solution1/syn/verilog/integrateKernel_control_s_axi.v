// ==============================================================
// File generated on Fri Jan 17 13:00:50 EET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module integrateKernel_control_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 8,
    C_S_AXI_DATA_WIDTH = 32
)(
    // axi4 lite slave signals
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    // user signals
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    input  wire                          ap_idle,
    output wire [95:0]                   size,
    output wire [31:0]                   vol_data_offset,
    output wire [95:0]                   dim,
    output wire [31:0]                   depth_offset,
    output wire [31:0]                   depthSize_x,
    output wire [31:0]                   depthSize_y,
    output wire [511:0]                  invTrack_data,
    output wire [511:0]                  K_data,
    output wire [31:0]                   mu,
    output wire [31:0]                   maxweight,
    output wire [31:0]                   start,
    output wire [31:0]                   end_r
);
//------------------------Address Info-------------------
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of size
//        bit 31~0 - size[31:0] (Read/Write)
// 0x14 : Data signal of size
//        bit 31~0 - size[63:32] (Read/Write)
// 0x18 : Data signal of size
//        bit 31~0 - size[95:64] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of vol_data_offset
//        bit 31~0 - vol_data_offset[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of dim
//        bit 31~0 - dim[31:0] (Read/Write)
// 0x2c : Data signal of dim
//        bit 31~0 - dim[63:32] (Read/Write)
// 0x30 : Data signal of dim
//        bit 31~0 - dim[95:64] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of depth_offset
//        bit 31~0 - depth_offset[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of depthSize_x
//        bit 31~0 - depthSize_x[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of depthSize_y
//        bit 31~0 - depthSize_y[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[31:0] (Read/Write)
// 0x54 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[63:32] (Read/Write)
// 0x58 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[95:64] (Read/Write)
// 0x5c : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[127:96] (Read/Write)
// 0x60 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[159:128] (Read/Write)
// 0x64 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[191:160] (Read/Write)
// 0x68 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[223:192] (Read/Write)
// 0x6c : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[255:224] (Read/Write)
// 0x70 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[287:256] (Read/Write)
// 0x74 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[319:288] (Read/Write)
// 0x78 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[351:320] (Read/Write)
// 0x7c : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[383:352] (Read/Write)
// 0x80 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[415:384] (Read/Write)
// 0x84 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[447:416] (Read/Write)
// 0x88 : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[479:448] (Read/Write)
// 0x8c : Data signal of invTrack_data
//        bit 31~0 - invTrack_data[511:480] (Read/Write)
// 0x90 : reserved
// 0x94 : Data signal of K_data
//        bit 31~0 - K_data[31:0] (Read/Write)
// 0x98 : Data signal of K_data
//        bit 31~0 - K_data[63:32] (Read/Write)
// 0x9c : Data signal of K_data
//        bit 31~0 - K_data[95:64] (Read/Write)
// 0xa0 : Data signal of K_data
//        bit 31~0 - K_data[127:96] (Read/Write)
// 0xa4 : Data signal of K_data
//        bit 31~0 - K_data[159:128] (Read/Write)
// 0xa8 : Data signal of K_data
//        bit 31~0 - K_data[191:160] (Read/Write)
// 0xac : Data signal of K_data
//        bit 31~0 - K_data[223:192] (Read/Write)
// 0xb0 : Data signal of K_data
//        bit 31~0 - K_data[255:224] (Read/Write)
// 0xb4 : Data signal of K_data
//        bit 31~0 - K_data[287:256] (Read/Write)
// 0xb8 : Data signal of K_data
//        bit 31~0 - K_data[319:288] (Read/Write)
// 0xbc : Data signal of K_data
//        bit 31~0 - K_data[351:320] (Read/Write)
// 0xc0 : Data signal of K_data
//        bit 31~0 - K_data[383:352] (Read/Write)
// 0xc4 : Data signal of K_data
//        bit 31~0 - K_data[415:384] (Read/Write)
// 0xc8 : Data signal of K_data
//        bit 31~0 - K_data[447:416] (Read/Write)
// 0xcc : Data signal of K_data
//        bit 31~0 - K_data[479:448] (Read/Write)
// 0xd0 : Data signal of K_data
//        bit 31~0 - K_data[511:480] (Read/Write)
// 0xd4 : reserved
// 0xd8 : Data signal of mu
//        bit 31~0 - mu[31:0] (Read/Write)
// 0xdc : reserved
// 0xe0 : Data signal of maxweight
//        bit 31~0 - maxweight[31:0] (Read/Write)
// 0xe4 : reserved
// 0xe8 : Data signal of start
//        bit 31~0 - start[31:0] (Read/Write)
// 0xec : reserved
// 0xf0 : Data signal of end_r
//        bit 31~0 - end_r[31:0] (Read/Write)
// 0xf4 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL                = 8'h00,
    ADDR_GIE                    = 8'h04,
    ADDR_IER                    = 8'h08,
    ADDR_ISR                    = 8'h0c,
    ADDR_SIZE_DATA_0            = 8'h10,
    ADDR_SIZE_DATA_1            = 8'h14,
    ADDR_SIZE_DATA_2            = 8'h18,
    ADDR_SIZE_CTRL              = 8'h1c,
    ADDR_VOL_DATA_OFFSET_DATA_0 = 8'h20,
    ADDR_VOL_DATA_OFFSET_CTRL   = 8'h24,
    ADDR_DIM_DATA_0             = 8'h28,
    ADDR_DIM_DATA_1             = 8'h2c,
    ADDR_DIM_DATA_2             = 8'h30,
    ADDR_DIM_CTRL               = 8'h34,
    ADDR_DEPTH_OFFSET_DATA_0    = 8'h38,
    ADDR_DEPTH_OFFSET_CTRL      = 8'h3c,
    ADDR_DEPTHSIZE_X_DATA_0     = 8'h40,
    ADDR_DEPTHSIZE_X_CTRL       = 8'h44,
    ADDR_DEPTHSIZE_Y_DATA_0     = 8'h48,
    ADDR_DEPTHSIZE_Y_CTRL       = 8'h4c,
    ADDR_INVTRACK_DATA_DATA_0   = 8'h50,
    ADDR_INVTRACK_DATA_DATA_1   = 8'h54,
    ADDR_INVTRACK_DATA_DATA_2   = 8'h58,
    ADDR_INVTRACK_DATA_DATA_3   = 8'h5c,
    ADDR_INVTRACK_DATA_DATA_4   = 8'h60,
    ADDR_INVTRACK_DATA_DATA_5   = 8'h64,
    ADDR_INVTRACK_DATA_DATA_6   = 8'h68,
    ADDR_INVTRACK_DATA_DATA_7   = 8'h6c,
    ADDR_INVTRACK_DATA_DATA_8   = 8'h70,
    ADDR_INVTRACK_DATA_DATA_9   = 8'h74,
    ADDR_INVTRACK_DATA_DATA_10  = 8'h78,
    ADDR_INVTRACK_DATA_DATA_11  = 8'h7c,
    ADDR_INVTRACK_DATA_DATA_12  = 8'h80,
    ADDR_INVTRACK_DATA_DATA_13  = 8'h84,
    ADDR_INVTRACK_DATA_DATA_14  = 8'h88,
    ADDR_INVTRACK_DATA_DATA_15  = 8'h8c,
    ADDR_INVTRACK_DATA_CTRL     = 8'h90,
    ADDR_K_DATA_DATA_0          = 8'h94,
    ADDR_K_DATA_DATA_1          = 8'h98,
    ADDR_K_DATA_DATA_2          = 8'h9c,
    ADDR_K_DATA_DATA_3          = 8'ha0,
    ADDR_K_DATA_DATA_4          = 8'ha4,
    ADDR_K_DATA_DATA_5          = 8'ha8,
    ADDR_K_DATA_DATA_6          = 8'hac,
    ADDR_K_DATA_DATA_7          = 8'hb0,
    ADDR_K_DATA_DATA_8          = 8'hb4,
    ADDR_K_DATA_DATA_9          = 8'hb8,
    ADDR_K_DATA_DATA_10         = 8'hbc,
    ADDR_K_DATA_DATA_11         = 8'hc0,
    ADDR_K_DATA_DATA_12         = 8'hc4,
    ADDR_K_DATA_DATA_13         = 8'hc8,
    ADDR_K_DATA_DATA_14         = 8'hcc,
    ADDR_K_DATA_DATA_15         = 8'hd0,
    ADDR_K_DATA_CTRL            = 8'hd4,
    ADDR_MU_DATA_0              = 8'hd8,
    ADDR_MU_CTRL                = 8'hdc,
    ADDR_MAXWEIGHT_DATA_0       = 8'he0,
    ADDR_MAXWEIGHT_CTRL         = 8'he4,
    ADDR_START_DATA_0           = 8'he8,
    ADDR_START_CTRL             = 8'hec,
    ADDR_END_R_DATA_0           = 8'hf0,
    ADDR_END_R_CTRL             = 8'hf4,
    WRIDLE                      = 2'd0,
    WRDATA                      = 2'd1,
    WRRESP                      = 2'd2,
    WRRESET                     = 2'd3,
    RDIDLE                      = 2'd0,
    RDDATA                      = 2'd1,
    RDRESET                     = 2'd2,
    ADDR_BITS         = 8;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle;
    reg                           int_ap_ready;
    reg                           int_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [95:0]                   int_size = 'b0;
    reg  [31:0]                   int_vol_data_offset = 'b0;
    reg  [95:0]                   int_dim = 'b0;
    reg  [31:0]                   int_depth_offset = 'b0;
    reg  [31:0]                   int_depthSize_x = 'b0;
    reg  [31:0]                   int_depthSize_y = 'b0;
    reg  [511:0]                  int_invTrack_data = 'b0;
    reg  [511:0]                  int_K_data = 'b0;
    reg  [31:0]                   int_mu = 'b0;
    reg  [31:0]                   int_maxweight = 'b0;
    reg  [31:0]                   int_start = 'b0;
    reg  [31:0]                   int_end_r = 'b0;

//------------------------Instantiation------------------

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA);
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[7] <= int_auto_restart;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_SIZE_DATA_0: begin
                    rdata <= int_size[31:0];
                end
                ADDR_SIZE_DATA_1: begin
                    rdata <= int_size[63:32];
                end
                ADDR_SIZE_DATA_2: begin
                    rdata <= int_size[95:64];
                end
                ADDR_VOL_DATA_OFFSET_DATA_0: begin
                    rdata <= int_vol_data_offset[31:0];
                end
                ADDR_DIM_DATA_0: begin
                    rdata <= int_dim[31:0];
                end
                ADDR_DIM_DATA_1: begin
                    rdata <= int_dim[63:32];
                end
                ADDR_DIM_DATA_2: begin
                    rdata <= int_dim[95:64];
                end
                ADDR_DEPTH_OFFSET_DATA_0: begin
                    rdata <= int_depth_offset[31:0];
                end
                ADDR_DEPTHSIZE_X_DATA_0: begin
                    rdata <= int_depthSize_x[31:0];
                end
                ADDR_DEPTHSIZE_Y_DATA_0: begin
                    rdata <= int_depthSize_y[31:0];
                end
                ADDR_INVTRACK_DATA_DATA_0: begin
                    rdata <= int_invTrack_data[31:0];
                end
                ADDR_INVTRACK_DATA_DATA_1: begin
                    rdata <= int_invTrack_data[63:32];
                end
                ADDR_INVTRACK_DATA_DATA_2: begin
                    rdata <= int_invTrack_data[95:64];
                end
                ADDR_INVTRACK_DATA_DATA_3: begin
                    rdata <= int_invTrack_data[127:96];
                end
                ADDR_INVTRACK_DATA_DATA_4: begin
                    rdata <= int_invTrack_data[159:128];
                end
                ADDR_INVTRACK_DATA_DATA_5: begin
                    rdata <= int_invTrack_data[191:160];
                end
                ADDR_INVTRACK_DATA_DATA_6: begin
                    rdata <= int_invTrack_data[223:192];
                end
                ADDR_INVTRACK_DATA_DATA_7: begin
                    rdata <= int_invTrack_data[255:224];
                end
                ADDR_INVTRACK_DATA_DATA_8: begin
                    rdata <= int_invTrack_data[287:256];
                end
                ADDR_INVTRACK_DATA_DATA_9: begin
                    rdata <= int_invTrack_data[319:288];
                end
                ADDR_INVTRACK_DATA_DATA_10: begin
                    rdata <= int_invTrack_data[351:320];
                end
                ADDR_INVTRACK_DATA_DATA_11: begin
                    rdata <= int_invTrack_data[383:352];
                end
                ADDR_INVTRACK_DATA_DATA_12: begin
                    rdata <= int_invTrack_data[415:384];
                end
                ADDR_INVTRACK_DATA_DATA_13: begin
                    rdata <= int_invTrack_data[447:416];
                end
                ADDR_INVTRACK_DATA_DATA_14: begin
                    rdata <= int_invTrack_data[479:448];
                end
                ADDR_INVTRACK_DATA_DATA_15: begin
                    rdata <= int_invTrack_data[511:480];
                end
                ADDR_K_DATA_DATA_0: begin
                    rdata <= int_K_data[31:0];
                end
                ADDR_K_DATA_DATA_1: begin
                    rdata <= int_K_data[63:32];
                end
                ADDR_K_DATA_DATA_2: begin
                    rdata <= int_K_data[95:64];
                end
                ADDR_K_DATA_DATA_3: begin
                    rdata <= int_K_data[127:96];
                end
                ADDR_K_DATA_DATA_4: begin
                    rdata <= int_K_data[159:128];
                end
                ADDR_K_DATA_DATA_5: begin
                    rdata <= int_K_data[191:160];
                end
                ADDR_K_DATA_DATA_6: begin
                    rdata <= int_K_data[223:192];
                end
                ADDR_K_DATA_DATA_7: begin
                    rdata <= int_K_data[255:224];
                end
                ADDR_K_DATA_DATA_8: begin
                    rdata <= int_K_data[287:256];
                end
                ADDR_K_DATA_DATA_9: begin
                    rdata <= int_K_data[319:288];
                end
                ADDR_K_DATA_DATA_10: begin
                    rdata <= int_K_data[351:320];
                end
                ADDR_K_DATA_DATA_11: begin
                    rdata <= int_K_data[383:352];
                end
                ADDR_K_DATA_DATA_12: begin
                    rdata <= int_K_data[415:384];
                end
                ADDR_K_DATA_DATA_13: begin
                    rdata <= int_K_data[447:416];
                end
                ADDR_K_DATA_DATA_14: begin
                    rdata <= int_K_data[479:448];
                end
                ADDR_K_DATA_DATA_15: begin
                    rdata <= int_K_data[511:480];
                end
                ADDR_MU_DATA_0: begin
                    rdata <= int_mu[31:0];
                end
                ADDR_MAXWEIGHT_DATA_0: begin
                    rdata <= int_maxweight[31:0];
                end
                ADDR_START_DATA_0: begin
                    rdata <= int_start[31:0];
                end
                ADDR_END_R_DATA_0: begin
                    rdata <= int_end_r[31:0];
                end
            endcase
        end
    end
end


//------------------------Register logic-----------------
assign interrupt       = int_gie & (|int_isr);
assign ap_start        = int_ap_start;
assign size            = int_size;
assign vol_data_offset = int_vol_data_offset;
assign dim             = int_dim;
assign depth_offset    = int_depth_offset;
assign depthSize_x     = int_depthSize_x;
assign depthSize_y     = int_depthSize_y;
assign invTrack_data   = int_invTrack_data;
assign K_data          = int_K_data;
assign mu              = int_mu;
assign maxweight       = int_maxweight;
assign start           = int_start;
assign end_r           = int_end_r;
// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_done <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_done <= 1'b0; // clear on read
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_ready <= ap_ready;
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <=  WDATA[7];
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_size[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_size[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SIZE_DATA_0)
            int_size[31:0] <= (WDATA[31:0] & wmask) | (int_size[31:0] & ~wmask);
    end
end

// int_size[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_size[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SIZE_DATA_1)
            int_size[63:32] <= (WDATA[31:0] & wmask) | (int_size[63:32] & ~wmask);
    end
end

// int_size[95:64]
always @(posedge ACLK) begin
    if (ARESET)
        int_size[95:64] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_SIZE_DATA_2)
            int_size[95:64] <= (WDATA[31:0] & wmask) | (int_size[95:64] & ~wmask);
    end
end

// int_vol_data_offset[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_vol_data_offset[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_VOL_DATA_OFFSET_DATA_0)
            int_vol_data_offset[31:0] <= (WDATA[31:0] & wmask) | (int_vol_data_offset[31:0] & ~wmask);
    end
end

// int_dim[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_dim[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DIM_DATA_0)
            int_dim[31:0] <= (WDATA[31:0] & wmask) | (int_dim[31:0] & ~wmask);
    end
end

// int_dim[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_dim[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DIM_DATA_1)
            int_dim[63:32] <= (WDATA[31:0] & wmask) | (int_dim[63:32] & ~wmask);
    end
end

// int_dim[95:64]
always @(posedge ACLK) begin
    if (ARESET)
        int_dim[95:64] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DIM_DATA_2)
            int_dim[95:64] <= (WDATA[31:0] & wmask) | (int_dim[95:64] & ~wmask);
    end
end

// int_depth_offset[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_depth_offset[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DEPTH_OFFSET_DATA_0)
            int_depth_offset[31:0] <= (WDATA[31:0] & wmask) | (int_depth_offset[31:0] & ~wmask);
    end
end

// int_depthSize_x[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_depthSize_x[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DEPTHSIZE_X_DATA_0)
            int_depthSize_x[31:0] <= (WDATA[31:0] & wmask) | (int_depthSize_x[31:0] & ~wmask);
    end
end

// int_depthSize_y[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_depthSize_y[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_DEPTHSIZE_Y_DATA_0)
            int_depthSize_y[31:0] <= (WDATA[31:0] & wmask) | (int_depthSize_y[31:0] & ~wmask);
    end
end

// int_invTrack_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_0)
            int_invTrack_data[31:0] <= (WDATA[31:0] & wmask) | (int_invTrack_data[31:0] & ~wmask);
    end
end

// int_invTrack_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_1)
            int_invTrack_data[63:32] <= (WDATA[31:0] & wmask) | (int_invTrack_data[63:32] & ~wmask);
    end
end

// int_invTrack_data[95:64]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[95:64] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_2)
            int_invTrack_data[95:64] <= (WDATA[31:0] & wmask) | (int_invTrack_data[95:64] & ~wmask);
    end
end

// int_invTrack_data[127:96]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[127:96] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_3)
            int_invTrack_data[127:96] <= (WDATA[31:0] & wmask) | (int_invTrack_data[127:96] & ~wmask);
    end
end

// int_invTrack_data[159:128]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[159:128] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_4)
            int_invTrack_data[159:128] <= (WDATA[31:0] & wmask) | (int_invTrack_data[159:128] & ~wmask);
    end
end

// int_invTrack_data[191:160]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[191:160] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_5)
            int_invTrack_data[191:160] <= (WDATA[31:0] & wmask) | (int_invTrack_data[191:160] & ~wmask);
    end
end

// int_invTrack_data[223:192]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[223:192] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_6)
            int_invTrack_data[223:192] <= (WDATA[31:0] & wmask) | (int_invTrack_data[223:192] & ~wmask);
    end
end

// int_invTrack_data[255:224]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[255:224] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_7)
            int_invTrack_data[255:224] <= (WDATA[31:0] & wmask) | (int_invTrack_data[255:224] & ~wmask);
    end
end

// int_invTrack_data[287:256]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[287:256] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_8)
            int_invTrack_data[287:256] <= (WDATA[31:0] & wmask) | (int_invTrack_data[287:256] & ~wmask);
    end
end

// int_invTrack_data[319:288]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[319:288] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_9)
            int_invTrack_data[319:288] <= (WDATA[31:0] & wmask) | (int_invTrack_data[319:288] & ~wmask);
    end
end

// int_invTrack_data[351:320]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[351:320] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_10)
            int_invTrack_data[351:320] <= (WDATA[31:0] & wmask) | (int_invTrack_data[351:320] & ~wmask);
    end
end

// int_invTrack_data[383:352]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[383:352] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_11)
            int_invTrack_data[383:352] <= (WDATA[31:0] & wmask) | (int_invTrack_data[383:352] & ~wmask);
    end
end

// int_invTrack_data[415:384]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[415:384] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_12)
            int_invTrack_data[415:384] <= (WDATA[31:0] & wmask) | (int_invTrack_data[415:384] & ~wmask);
    end
end

// int_invTrack_data[447:416]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[447:416] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_13)
            int_invTrack_data[447:416] <= (WDATA[31:0] & wmask) | (int_invTrack_data[447:416] & ~wmask);
    end
end

// int_invTrack_data[479:448]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[479:448] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_14)
            int_invTrack_data[479:448] <= (WDATA[31:0] & wmask) | (int_invTrack_data[479:448] & ~wmask);
    end
end

// int_invTrack_data[511:480]
always @(posedge ACLK) begin
    if (ARESET)
        int_invTrack_data[511:480] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INVTRACK_DATA_DATA_15)
            int_invTrack_data[511:480] <= (WDATA[31:0] & wmask) | (int_invTrack_data[511:480] & ~wmask);
    end
end

// int_K_data[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_0)
            int_K_data[31:0] <= (WDATA[31:0] & wmask) | (int_K_data[31:0] & ~wmask);
    end
end

// int_K_data[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_1)
            int_K_data[63:32] <= (WDATA[31:0] & wmask) | (int_K_data[63:32] & ~wmask);
    end
end

// int_K_data[95:64]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[95:64] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_2)
            int_K_data[95:64] <= (WDATA[31:0] & wmask) | (int_K_data[95:64] & ~wmask);
    end
end

// int_K_data[127:96]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[127:96] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_3)
            int_K_data[127:96] <= (WDATA[31:0] & wmask) | (int_K_data[127:96] & ~wmask);
    end
end

// int_K_data[159:128]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[159:128] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_4)
            int_K_data[159:128] <= (WDATA[31:0] & wmask) | (int_K_data[159:128] & ~wmask);
    end
end

// int_K_data[191:160]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[191:160] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_5)
            int_K_data[191:160] <= (WDATA[31:0] & wmask) | (int_K_data[191:160] & ~wmask);
    end
end

// int_K_data[223:192]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[223:192] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_6)
            int_K_data[223:192] <= (WDATA[31:0] & wmask) | (int_K_data[223:192] & ~wmask);
    end
end

// int_K_data[255:224]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[255:224] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_7)
            int_K_data[255:224] <= (WDATA[31:0] & wmask) | (int_K_data[255:224] & ~wmask);
    end
end

// int_K_data[287:256]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[287:256] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_8)
            int_K_data[287:256] <= (WDATA[31:0] & wmask) | (int_K_data[287:256] & ~wmask);
    end
end

// int_K_data[319:288]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[319:288] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_9)
            int_K_data[319:288] <= (WDATA[31:0] & wmask) | (int_K_data[319:288] & ~wmask);
    end
end

// int_K_data[351:320]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[351:320] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_10)
            int_K_data[351:320] <= (WDATA[31:0] & wmask) | (int_K_data[351:320] & ~wmask);
    end
end

// int_K_data[383:352]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[383:352] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_11)
            int_K_data[383:352] <= (WDATA[31:0] & wmask) | (int_K_data[383:352] & ~wmask);
    end
end

// int_K_data[415:384]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[415:384] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_12)
            int_K_data[415:384] <= (WDATA[31:0] & wmask) | (int_K_data[415:384] & ~wmask);
    end
end

// int_K_data[447:416]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[447:416] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_13)
            int_K_data[447:416] <= (WDATA[31:0] & wmask) | (int_K_data[447:416] & ~wmask);
    end
end

// int_K_data[479:448]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[479:448] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_14)
            int_K_data[479:448] <= (WDATA[31:0] & wmask) | (int_K_data[479:448] & ~wmask);
    end
end

// int_K_data[511:480]
always @(posedge ACLK) begin
    if (ARESET)
        int_K_data[511:480] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_K_DATA_DATA_15)
            int_K_data[511:480] <= (WDATA[31:0] & wmask) | (int_K_data[511:480] & ~wmask);
    end
end

// int_mu[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_mu[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_MU_DATA_0)
            int_mu[31:0] <= (WDATA[31:0] & wmask) | (int_mu[31:0] & ~wmask);
    end
end

// int_maxweight[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_maxweight[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_MAXWEIGHT_DATA_0)
            int_maxweight[31:0] <= (WDATA[31:0] & wmask) | (int_maxweight[31:0] & ~wmask);
    end
end

// int_start[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_start[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_START_DATA_0)
            int_start[31:0] <= (WDATA[31:0] & wmask) | (int_start[31:0] & ~wmask);
    end
end

// int_end_r[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_end_r[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_END_R_DATA_0)
            int_end_r[31:0] <= (WDATA[31:0] & wmask) | (int_end_r[31:0] & ~wmask);
    end
end


//------------------------Memory logic-------------------

endmodule
