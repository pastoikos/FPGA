// ==============================================================
// File generated on Sat Dec 21 16:23:46 EET 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xbilateralfilterkernel.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XBilateralfilterkernel_CfgInitialize(XBilateralfilterkernel *InstancePtr, XBilateralfilterkernel_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XBilateralfilterkernel_Start(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XBilateralfilterkernel_IsDone(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XBilateralfilterkernel_IsIdle(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XBilateralfilterkernel_IsReady(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XBilateralfilterkernel_EnableAutoRestart(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XBilateralfilterkernel_DisableAutoRestart(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_AP_CTRL, 0);
}

void XBilateralfilterkernel_Set_out_offset(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_OUT_OFFSET_DATA, Data);
}

u32 XBilateralfilterkernel_Get_out_offset(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_OUT_OFFSET_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_pad_depth_offset(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_PAD_DEPTH_OFFSET_DATA, Data);
}

u32 XBilateralfilterkernel_Get_pad_depth_offset(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_PAD_DEPTH_OFFSET_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_size_x(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_X_DATA, Data);
}

u32 XBilateralfilterkernel_Get_size_x(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_X_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_size_y(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_Y_DATA, Data);
}

u32 XBilateralfilterkernel_Get_size_y(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_SIZE_Y_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_gaussian_offset(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_GAUSSIAN_OFFSET_DATA, Data);
}

u32 XBilateralfilterkernel_Get_gaussian_offset(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_GAUSSIAN_OFFSET_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_e_d(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_E_D_DATA, Data);
}

u32 XBilateralfilterkernel_Get_e_d(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_E_D_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_r(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_R_DATA, Data);
}

u32 XBilateralfilterkernel_Get_r(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_R_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_start(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_START_DATA, Data);
}

u32 XBilateralfilterkernel_Get_start(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_START_DATA);
    return Data;
}

void XBilateralfilterkernel_Set_end_r(XBilateralfilterkernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_END_R_DATA, Data);
}

u32 XBilateralfilterkernel_Get_end_r(XBilateralfilterkernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_END_R_DATA);
    return Data;
}

void XBilateralfilterkernel_InterruptGlobalEnable(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_GIE, 1);
}

void XBilateralfilterkernel_InterruptGlobalDisable(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_GIE, 0);
}

void XBilateralfilterkernel_InterruptEnable(XBilateralfilterkernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_IER);
    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_IER, Register | Mask);
}

void XBilateralfilterkernel_InterruptDisable(XBilateralfilterkernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_IER);
    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XBilateralfilterkernel_InterruptClear(XBilateralfilterkernel *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XBilateralfilterkernel_WriteReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_ISR, Mask);
}

u32 XBilateralfilterkernel_InterruptGetEnabled(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_IER);
}

u32 XBilateralfilterkernel_InterruptGetStatus(XBilateralfilterkernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XBilateralfilterkernel_ReadReg(InstancePtr->Control_BaseAddress, XBILATERALFILTERKERNEL_CONTROL_ADDR_ISR);
}

