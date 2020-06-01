// ==============================================================
// File generated on Fri Jan 17 13:00:50 EET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XINTEGRATEKERNEL_H
#define XINTEGRATEKERNEL_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xintegratekernel_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XIntegratekernel_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XIntegratekernel;

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
} XIntegratekernel_Size;

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
} XIntegratekernel_Dim;

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
    u32 word_3;
    u32 word_4;
    u32 word_5;
    u32 word_6;
    u32 word_7;
    u32 word_8;
    u32 word_9;
    u32 word_10;
    u32 word_11;
    u32 word_12;
    u32 word_13;
    u32 word_14;
    u32 word_15;
} XIntegratekernel_Invtrack_data;

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
    u32 word_3;
    u32 word_4;
    u32 word_5;
    u32 word_6;
    u32 word_7;
    u32 word_8;
    u32 word_9;
    u32 word_10;
    u32 word_11;
    u32 word_12;
    u32 word_13;
    u32 word_14;
    u32 word_15;
} XIntegratekernel_K_data;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XIntegratekernel_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XIntegratekernel_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XIntegratekernel_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XIntegratekernel_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XIntegratekernel_Initialize(XIntegratekernel *InstancePtr, u16 DeviceId);
XIntegratekernel_Config* XIntegratekernel_LookupConfig(u16 DeviceId);
int XIntegratekernel_CfgInitialize(XIntegratekernel *InstancePtr, XIntegratekernel_Config *ConfigPtr);
#else
int XIntegratekernel_Initialize(XIntegratekernel *InstancePtr, const char* InstanceName);
int XIntegratekernel_Release(XIntegratekernel *InstancePtr);
#endif

void XIntegratekernel_Start(XIntegratekernel *InstancePtr);
u32 XIntegratekernel_IsDone(XIntegratekernel *InstancePtr);
u32 XIntegratekernel_IsIdle(XIntegratekernel *InstancePtr);
u32 XIntegratekernel_IsReady(XIntegratekernel *InstancePtr);
void XIntegratekernel_EnableAutoRestart(XIntegratekernel *InstancePtr);
void XIntegratekernel_DisableAutoRestart(XIntegratekernel *InstancePtr);

void XIntegratekernel_Set_size(XIntegratekernel *InstancePtr, XIntegratekernel_Size Data);
XIntegratekernel_Size XIntegratekernel_Get_size(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_vol_data_offset(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_vol_data_offset(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_dim(XIntegratekernel *InstancePtr, XIntegratekernel_Dim Data);
XIntegratekernel_Dim XIntegratekernel_Get_dim(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_depth_offset(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_depth_offset(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_depthSize_x(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_depthSize_x(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_depthSize_y(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_depthSize_y(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_invTrack_data(XIntegratekernel *InstancePtr, XIntegratekernel_Invtrack_data Data);
XIntegratekernel_Invtrack_data XIntegratekernel_Get_invTrack_data(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_K_data(XIntegratekernel *InstancePtr, XIntegratekernel_K_data Data);
XIntegratekernel_K_data XIntegratekernel_Get_K_data(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_mu(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_mu(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_maxweight(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_maxweight(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_start(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_start(XIntegratekernel *InstancePtr);
void XIntegratekernel_Set_end_r(XIntegratekernel *InstancePtr, u32 Data);
u32 XIntegratekernel_Get_end_r(XIntegratekernel *InstancePtr);

void XIntegratekernel_InterruptGlobalEnable(XIntegratekernel *InstancePtr);
void XIntegratekernel_InterruptGlobalDisable(XIntegratekernel *InstancePtr);
void XIntegratekernel_InterruptEnable(XIntegratekernel *InstancePtr, u32 Mask);
void XIntegratekernel_InterruptDisable(XIntegratekernel *InstancePtr, u32 Mask);
void XIntegratekernel_InterruptClear(XIntegratekernel *InstancePtr, u32 Mask);
u32 XIntegratekernel_InterruptGetEnabled(XIntegratekernel *InstancePtr);
u32 XIntegratekernel_InterruptGetStatus(XIntegratekernel *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
