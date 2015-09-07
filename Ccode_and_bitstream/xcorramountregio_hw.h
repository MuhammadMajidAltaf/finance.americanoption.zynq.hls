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
// 0x10 : Data signal of amount
//        bit 31~0 - amount[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of rho
//        bit 31~0 - rho[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of sqrt_one_minus_rho2
//        bit 31~0 - sqrt_one_minus_rho2[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of peekAmount
//        bit 31~0 - peekAmount[31:0] (Read)
// 0x2c : Control signal of peekAmount
//        bit 0  - peekAmount_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCORRAMOUNTREGIO_CONTROL_ADDR_AP_CTRL                  0x00
#define XCORRAMOUNTREGIO_CONTROL_ADDR_GIE                      0x04
#define XCORRAMOUNTREGIO_CONTROL_ADDR_IER                      0x08
#define XCORRAMOUNTREGIO_CONTROL_ADDR_ISR                      0x0c
#define XCORRAMOUNTREGIO_CONTROL_ADDR_AMOUNT_DATA              0x10
#define XCORRAMOUNTREGIO_CONTROL_BITS_AMOUNT_DATA              32
#define XCORRAMOUNTREGIO_CONTROL_ADDR_RHO_DATA                 0x18
#define XCORRAMOUNTREGIO_CONTROL_BITS_RHO_DATA                 32
#define XCORRAMOUNTREGIO_CONTROL_ADDR_SQRT_ONE_MINUS_RHO2_DATA 0x20
#define XCORRAMOUNTREGIO_CONTROL_BITS_SQRT_ONE_MINUS_RHO2_DATA 32
#define XCORRAMOUNTREGIO_CONTROL_ADDR_PEEKAMOUNT_DATA          0x28
#define XCORRAMOUNTREGIO_CONTROL_BITS_PEEKAMOUNT_DATA          32
#define XCORRAMOUNTREGIO_CONTROL_ADDR_PEEKAMOUNT_CTRL          0x2c
