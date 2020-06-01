// ==============================================================
// File generated on Fri Jan 17 12:44:37 EET 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xbilateralfilterkernel.h"

extern XBilateralfilterkernel_Config XBilateralfilterkernel_ConfigTable[];

XBilateralfilterkernel_Config *XBilateralfilterkernel_LookupConfig(u16 DeviceId) {
	XBilateralfilterkernel_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XBILATERALFILTERKERNEL_NUM_INSTANCES; Index++) {
		if (XBilateralfilterkernel_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XBilateralfilterkernel_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XBilateralfilterkernel_Initialize(XBilateralfilterkernel *InstancePtr, u16 DeviceId) {
	XBilateralfilterkernel_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XBilateralfilterkernel_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XBilateralfilterkernel_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

