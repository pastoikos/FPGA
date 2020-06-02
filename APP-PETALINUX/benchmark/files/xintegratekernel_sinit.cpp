// ==============================================================
// File generated on Sat Dec 21 16:20:25 EET 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xintegratekernel.h"

extern XIntegratekernel_Config XIntegratekernel_ConfigTable[];

XIntegratekernel_Config *XIntegratekernel_LookupConfig(u16 DeviceId) {
	XIntegratekernel_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XINTEGRATEKERNEL_NUM_INSTANCES; Index++) {
		if (XIntegratekernel_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XIntegratekernel_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XIntegratekernel_Initialize(XIntegratekernel *InstancePtr, u16 DeviceId) {
	XIntegratekernel_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XIntegratekernel_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XIntegratekernel_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

