// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.3
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// CONTROL
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
// 0x10 : Data signal of stepsMC
//        bit 31~0 - stepsMC[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of pathsMC
//        bit 31~0 - pathsMC[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of K
//        bit 31~0 - K[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of callPut
//        bit 31~0 - callPut[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of peekStep
//        bit 31~0 - peekStep[31:0] (Read)
// 0x34 : Control signal of peekStep
//        bit 0  - peekStep_ap_vld (Read/COR)
//        others - reserved
// 0x38 : Data signal of peekPath
//        bit 31~0 - peekPath[31:0] (Read)
// 0x3c : Control signal of peekPath
//        bit 0  - peekPath_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XLSDATAGENREGIO_CONTROL_ADDR_AP_CTRL       0x00
#define XLSDATAGENREGIO_CONTROL_ADDR_GIE           0x04
#define XLSDATAGENREGIO_CONTROL_ADDR_IER           0x08
#define XLSDATAGENREGIO_CONTROL_ADDR_ISR           0x0c
#define XLSDATAGENREGIO_CONTROL_ADDR_STEPSMC_DATA  0x10
#define XLSDATAGENREGIO_CONTROL_BITS_STEPSMC_DATA  32
#define XLSDATAGENREGIO_CONTROL_ADDR_PATHSMC_DATA  0x18
#define XLSDATAGENREGIO_CONTROL_BITS_PATHSMC_DATA  32
#define XLSDATAGENREGIO_CONTROL_ADDR_K_DATA        0x20
#define XLSDATAGENREGIO_CONTROL_BITS_K_DATA        32
#define XLSDATAGENREGIO_CONTROL_ADDR_CALLPUT_DATA  0x28
#define XLSDATAGENREGIO_CONTROL_BITS_CALLPUT_DATA  32
#define XLSDATAGENREGIO_CONTROL_ADDR_PEEKSTEP_DATA 0x30
#define XLSDATAGENREGIO_CONTROL_BITS_PEEKSTEP_DATA 32
#define XLSDATAGENREGIO_CONTROL_ADDR_PEEKSTEP_CTRL 0x34
#define XLSDATAGENREGIO_CONTROL_ADDR_PEEKPATH_DATA 0x38
#define XLSDATAGENREGIO_CONTROL_BITS_PEEKPATH_DATA 32
#define XLSDATAGENREGIO_CONTROL_ADDR_PEEKPATH_CTRL 0x3c
