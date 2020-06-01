// ==============================================================
// File generated on Fri Jan 17 12:44:37 EET 2020
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
// 0x10 : Data signal of out_offset
//        bit 31~0 - out_offset[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of pad_depth_offset
//        bit 31~0 - pad_depth_offset[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of size_x
//        bit 31~0 - size_x[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of size_y
//        bit 31~0 - size_y[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of gaussian_offset
//        bit 31~0 - gaussian_offset[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of e_d
//        bit 31~0 - e_d[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of r
//        bit 31~0 - r[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of start
//        bit 31~0 - start[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of end_r
//        bit 31~0 - end_r[31:0] (Read/Write)
// 0x54 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL               0x00
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_GIE                   0x04
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_IER                   0x08
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_ISR                   0x0c
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_OUT_OFFSET_DATA       0x10
#define XBILATERALFILTERKERNEL_CONTROL_BITS_OUT_OFFSET_DATA       32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_PAD_DEPTH_OFFSET_DATA 0x18
#define XBILATERALFILTERKERNEL_CONTROL_BITS_PAD_DEPTH_OFFSET_DATA 32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_X_DATA           0x20
#define XBILATERALFILTERKERNEL_CONTROL_BITS_SIZE_X_DATA           32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_Y_DATA           0x28
#define XBILATERALFILTERKERNEL_CONTROL_BITS_SIZE_Y_DATA           32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_GAUSSIAN_OFFSET_DATA  0x30
#define XBILATERALFILTERKERNEL_CONTROL_BITS_GAUSSIAN_OFFSET_DATA  32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_E_D_DATA              0x38
#define XBILATERALFILTERKERNEL_CONTROL_BITS_E_D_DATA              32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_R_DATA                0x40
#define XBILATERALFILTERKERNEL_CONTROL_BITS_R_DATA                32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_START_DATA            0x48
#define XBILATERALFILTERKERNEL_CONTROL_BITS_START_DATA            32
#define XBILATERALFILTERKERNEL_CONTROL_ADDR_END_R_DATA            0x50
#define XBILATERALFILTERKERNEL_CONTROL_BITS_END_R_DATA            32

