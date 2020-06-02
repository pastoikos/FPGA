// ==============================================================
// File generated on Sat Dec 21 16:20:25 EET 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
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

#define XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL              0x00
#define XINTEGRATEKERNEL_CONTROL_ADDR_GIE                  0x04
#define XINTEGRATEKERNEL_CONTROL_ADDR_IER                  0x08
#define XINTEGRATEKERNEL_CONTROL_ADDR_ISR                  0x0c
#define XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA            0x10
#define XINTEGRATEKERNEL_CONTROL_BITS_SIZE_DATA            96
#define XINTEGRATEKERNEL_CONTROL_ADDR_VOL_DATA_OFFSET_DATA 0x20
#define XINTEGRATEKERNEL_CONTROL_BITS_VOL_DATA_OFFSET_DATA 32
#define XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA             0x28
#define XINTEGRATEKERNEL_CONTROL_BITS_DIM_DATA             96
#define XINTEGRATEKERNEL_CONTROL_ADDR_DEPTH_OFFSET_DATA    0x38
#define XINTEGRATEKERNEL_CONTROL_BITS_DEPTH_OFFSET_DATA    32
#define XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_X_DATA     0x40
#define XINTEGRATEKERNEL_CONTROL_BITS_DEPTHSIZE_X_DATA     32
#define XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_Y_DATA     0x48
#define XINTEGRATEKERNEL_CONTROL_BITS_DEPTHSIZE_Y_DATA     32
#define XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA   0x50
#define XINTEGRATEKERNEL_CONTROL_BITS_INVTRACK_DATA_DATA   512
#define XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA_  0x78
#define XINTEGRATEKERNEL_CONTROL_BITS_INVTRACK_DATA_DATA   512
#define XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA          0x94
#define XINTEGRATEKERNEL_CONTROL_BITS_K_DATA_DATA          512
#define XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA_         0xbc
#define XINTEGRATEKERNEL_CONTROL_BITS_K_DATA_DATA          512
#define XINTEGRATEKERNEL_CONTROL_ADDR_MU_DATA              0xd8
#define XINTEGRATEKERNEL_CONTROL_BITS_MU_DATA              32
#define XINTEGRATEKERNEL_CONTROL_ADDR_MAXWEIGHT_DATA       0xe0
#define XINTEGRATEKERNEL_CONTROL_BITS_MAXWEIGHT_DATA       32
#define XINTEGRATEKERNEL_CONTROL_ADDR_START_DATA           0xe8
#define XINTEGRATEKERNEL_CONTROL_BITS_START_DATA           32
#define XINTEGRATEKERNEL_CONTROL_ADDR_END_R_DATA           0xf0
#define XINTEGRATEKERNEL_CONTROL_BITS_END_R_DATA           32

