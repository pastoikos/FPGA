// ==============================================================
// File generated on Fri Jan 17 12:44:37 EET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XBILATERALFILTERKERNEL_H
#define XBILATERALFILTERKERNEL_H

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
#include "xbilateralfilterkernel_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XBilateralfilterkernel_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XBilateralfilterkernel;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XBilateralfilterkernel_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XBilateralfilterkernel_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XBilateralfilterkernel_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XBilateralfilterkernel_ReadReg(BaseAddress, RegOffset) \
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
int XBilateralfilterkernel_Initialize(XBilateralfilterkernel *InstancePtr, u16 DeviceId);
XBilateralfilterkernel_Config* XBilateralfilterkernel_LookupConfig(u16 DeviceId);
int XBilateralfilterkernel_CfgInitialize(XBilateralfilterkernel *InstancePtr, XBilateralfilterkernel_Config *ConfigPtr);
#else
int XBilateralfilterkernel_Initialize(XBilateralfilterkernel *InstancePtr, const char* InstanceName);
int XBilateralfilterkernel_Release(XBilateralfilterkernel *InstancePtr);
#endif

void XBilateralfilterkernel_Start(XBilateralfilterkernel *InstancePtr);
u32 XBilateralfilterkernel_IsDone(XBilateralfilterkernel *InstancePtr);
u32 XBilateralfilterkernel_IsIdle(XBilateralfilterkernel *InstancePtr);
u32 XBilateralfilterkernel_IsReady(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_EnableAutoRestart(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_DisableAutoRestart(XBilateralfilterkernel *InstancePtr);

void XBilateralfilterkernel_Set_out_offset(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_out_offset(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_pad_depth_offset(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_pad_depth_offset(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_size_x(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_size_x(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_size_y(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_size_y(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_gaussian_offset(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_gaussian_offset(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_e_d(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_e_d(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_r(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_r(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_start(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_start(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_Set_end_r(XBilateralfilterkernel *InstancePtr, u32 Data);
u32 XBilateralfilterkernel_Get_end_r(XBilateralfilterkernel *InstancePtr);

void XBilateralfilterkernel_InterruptGlobalEnable(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_InterruptGlobalDisable(XBilateralfilterkernel *InstancePtr);
void XBilateralfilterkernel_InterruptEnable(XBilateralfilterkernel *InstancePtr, u32 Mask);
void XBilateralfilterkernel_InterruptDisable(XBilateralfilterkernel *InstancePtr, u32 Mask);
void XBilateralfilterkernel_InterruptClear(XBilateralfilterkernel *InstancePtr, u32 Mask);
u32 XBilateralfilterkernel_InterruptGetEnabled(XBilateralfilterkernel *InstancePtr);
u32 XBilateralfilterkernel_InterruptGetStatus(XBilateralfilterkernel *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
