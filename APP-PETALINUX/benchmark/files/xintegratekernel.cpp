// ==============================================================
// File generated on Sat Dec 21 16:20:25 EET 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xintegratekernel.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XIntegratekernel_CfgInitialize(XIntegratekernel *InstancePtr, XIntegratekernel_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XIntegratekernel_Start(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL) & 0x80;
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XIntegratekernel_IsDone(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XIntegratekernel_IsIdle(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XIntegratekernel_IsReady(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XIntegratekernel_EnableAutoRestart(XIntegratekernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XIntegratekernel_DisableAutoRestart(XIntegratekernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_AP_CTRL, 0);
}

void XIntegratekernel_Set_size(XIntegratekernel *InstancePtr, XIntegratekernel_Size Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 0, Data.word_0);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 4, Data.word_1);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 8, Data.word_2);
}

XIntegratekernel_Size XIntegratekernel_Get_size(XIntegratekernel *InstancePtr) {
    XIntegratekernel_Size Data;

    Data.word_0 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 0);
    Data.word_1 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 4);
    Data.word_2 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_SIZE_DATA + 8);
    return Data;
}

void XIntegratekernel_Set_vol_data_offset(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_VOL_DATA_OFFSET_DATA, Data);
}

u32 XIntegratekernel_Get_vol_data_offset(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_VOL_DATA_OFFSET_DATA);
    return Data;
}

void XIntegratekernel_Set_dim(XIntegratekernel *InstancePtr, XIntegratekernel_Dim Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 0, Data.word_0);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 4, Data.word_1);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 8, Data.word_2);
}

XIntegratekernel_Dim XIntegratekernel_Get_dim(XIntegratekernel *InstancePtr) {
    XIntegratekernel_Dim Data;

    Data.word_0 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 0);
    Data.word_1 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 4);
    Data.word_2 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DIM_DATA + 8);
    return Data;
}

void XIntegratekernel_Set_depth_offset(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTH_OFFSET_DATA, Data);
}

u32 XIntegratekernel_Get_depth_offset(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTH_OFFSET_DATA);
    return Data;
}

void XIntegratekernel_Set_depthSize_x(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_X_DATA, Data);
}

u32 XIntegratekernel_Get_depthSize_x(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_X_DATA);
    return Data;
}

void XIntegratekernel_Set_depthSize_y(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_Y_DATA, Data);
}

u32 XIntegratekernel_Get_depthSize_y(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_DEPTHSIZE_Y_DATA);
    return Data;
}

void XIntegratekernel_Set_invTrack_data(XIntegratekernel *InstancePtr, XIntegratekernel_Invtrack_data Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 0, Data.word_0);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 4, Data.word_1);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 8, Data.word_2);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 12, Data.word_3);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 16, Data.word_4);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 20, Data.word_5);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 24, Data.word_6);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 28, Data.word_7);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 32, Data.word_8);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 36, Data.word_9);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 40, Data.word_10);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 44, Data.word_11);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 48, Data.word_12);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 52, Data.word_13);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 56, Data.word_14);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 60, Data.word_15);
}

XIntegratekernel_Invtrack_data XIntegratekernel_Get_invTrack_data(XIntegratekernel *InstancePtr) {
    XIntegratekernel_Invtrack_data Data;

    Data.word_0 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 0);
    Data.word_1 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 4);
    Data.word_2 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 8);
    Data.word_3 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 12);
    Data.word_4 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 16);
    Data.word_5 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 20);
    Data.word_6 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 24);
    Data.word_7 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 28);
    Data.word_8 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 32);
    Data.word_9 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 36);
    Data.word_10 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 40);
    Data.word_11 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 44);
    Data.word_12 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 48);
    Data.word_13 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 52);
    Data.word_14 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 56);
    Data.word_15 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_INVTRACK_DATA_DATA + 60);
    return Data;
}

void XIntegratekernel_Set_K_data(XIntegratekernel *InstancePtr, XIntegratekernel_K_data Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 0, Data.word_0);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 4, Data.word_1);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 8, Data.word_2);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 12, Data.word_3);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 16, Data.word_4);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 20, Data.word_5);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 24, Data.word_6);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 28, Data.word_7);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 32, Data.word_8);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 36, Data.word_9);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 40, Data.word_10);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 44, Data.word_11);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 48, Data.word_12);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 52, Data.word_13);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 56, Data.word_14);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 60, Data.word_15);
}

XIntegratekernel_K_data XIntegratekernel_Get_K_data(XIntegratekernel *InstancePtr) {
    XIntegratekernel_K_data Data;

    Data.word_0 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 0);
    Data.word_1 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 4);
    Data.word_2 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 8);
    Data.word_3 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 12);
    Data.word_4 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 16);
    Data.word_5 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 20);
    Data.word_6 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 24);
    Data.word_7 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 28);
    Data.word_8 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 32);
    Data.word_9 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 36);
    Data.word_10 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 40);
    Data.word_11 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 44);
    Data.word_12 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 48);
    Data.word_13 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 52);
    Data.word_14 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 56);
    Data.word_15 = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_K_DATA_DATA + 60);
    return Data;
}

void XIntegratekernel_Set_mu(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_MU_DATA, Data);
}

u32 XIntegratekernel_Get_mu(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_MU_DATA);
    return Data;
}

void XIntegratekernel_Set_maxweight(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_MAXWEIGHT_DATA, Data);
}

u32 XIntegratekernel_Get_maxweight(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_MAXWEIGHT_DATA);
    return Data;
}

void XIntegratekernel_Set_start(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_START_DATA, Data);
}

u32 XIntegratekernel_Get_start(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_START_DATA);
    return Data;
}

void XIntegratekernel_Set_end_r(XIntegratekernel *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_END_R_DATA, Data);
}

u32 XIntegratekernel_Get_end_r(XIntegratekernel *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_END_R_DATA);
    return Data;
}

void XIntegratekernel_InterruptGlobalEnable(XIntegratekernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_GIE, 1);
}

void XIntegratekernel_InterruptGlobalDisable(XIntegratekernel *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_GIE, 0);
}

void XIntegratekernel_InterruptEnable(XIntegratekernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_IER);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_IER, Register | Mask);
}

void XIntegratekernel_InterruptDisable(XIntegratekernel *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_IER);
    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_IER, Register & (~Mask));
}

void XIntegratekernel_InterruptClear(XIntegratekernel *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XIntegratekernel_WriteReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_ISR, Mask);
}

u32 XIntegratekernel_InterruptGetEnabled(XIntegratekernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_IER);
}

u32 XIntegratekernel_InterruptGetStatus(XIntegratekernel *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XIntegratekernel_ReadReg(InstancePtr->Control_BaseAddress, XINTEGRATEKERNEL_CONTROL_ADDR_ISR);
}

