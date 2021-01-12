/*
 * Samsung Exynos SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_3J1_SET_B_H
#define IS_CIS_3J1_SET_B_H

#include "is-cis.h"
#include "is-cis-3j1.h"

/* 3J1 sensor setting version - S5K3J1S_Cphy_Ver_0.2_190905_forVendor */
/* Global setting */
/* sensor_3j1_setfile_B_Global */

/* Mode setting */
/* MODE3 */
/* 1: 3648 x 2736 @30.1fps MIPI lane: 3, MIPI data rate(Mbps/lane): 1807, MIPI Mclk(Mhz): 26 */

const u32 sensor_3j1_setfile_B_Global[] = {
	0xFCFC, 0x4000, 0x02, 
	0x6010, 0x0001, 0x02, 
	0x6000, 0x0005, 0x02, 
	I2C_MODE_DELAY, 3000, 0x00, /* 3ms delay */
	0xFCFC, 0x4000, 0x02, 
	0x6214, 0x7971, 0x02, 
	0x6218, 0x7150, 0x02, 
	0x6028, 0x2000, 0x02, 
	0xFCFC, 0x2000, 0x02, 
	0x0D9C, 0x000A, 0x02, 
	0x0E00, 0x0101, 0x02, 
	0x0E50, 0x0100, 0x02, 
	0x0E52, 0x00FF, 0x02, 
	0x0E56, 0x0100, 0x02, 
	0x0E5A, 0x001B, 0x02, 
	0x0E5C, 0x171B, 0x02, 
	0x0E5E, 0xF46E, 0x02, 
	0x0EC0, 0x0101, 0x02, 
	0x0EE2, 0x0080, 0x02, 
	0x0EE4, 0x0101, 0x02, 
	0x0EE6, 0x0004, 0x02, 
	0x11B0, 0x0815, 0x02, 
	0x11C2, 0x0815, 0x02, 
	0x1334, 0x0A01, 0x02, 
	0x1336, 0x03F1, 0x02, 
	0x133A, 0x0101, 0x02, 
	0x1342, 0x01EA, 0x02, 
	0x1348, 0x041A, 0x02, 
	0x13B4, 0x003C, 0x02, 
	0x13C6, 0x0002, 0x02, 
	0x1426, 0x0003, 0x02, 
	0x142C, 0x000A, 0x02, 
	0x16C6, 0x0011, 0x02, 
	0x16CC, 0x0032, 0x02, 
	0x2782, 0x01E0, 0x02, 
	0x2784, 0x01EA, 0x02, 
	0x2788, 0x03C0, 0x02, 
	0x278A, 0x03B8, 0x02, 
	0x27A0, 0x08C0, 0x02, 
	0x27A2, 0x08C0, 0x02, 
	0x27F4, 0x003C, 0x02, 
	0x27F6, 0x003C, 0x02, 
	0x2806, 0x0002, 0x02, 
	0x2808, 0x0002, 0x02, 
	0x2866, 0x0003, 0x02, 
	0x2868, 0x0004, 0x02, 
	0x286C, 0x001A, 0x02, 
	0x286E, 0x0016, 0x02, 
	0x2872, 0x001D, 0x02, 
	0x2874, 0x0017, 0x02, 
	0x2A52, 0x0260, 0x02, 
	0x2A54, 0x0197, 0x02, 
	0x2A58, 0x026B, 0x02, 
	0x2A5A, 0x01A2, 0x02, 
	0x2A5E, 0x0276, 0x02, 
	0x2A60, 0x01AD, 0x02, 
	0x2A64, 0x0281, 0x02, 
	0x2A66, 0x01B8, 0x02, 
	0x2A6A, 0x028C, 0x02, 
	0x2A6C, 0x01C3, 0x02, 
	0x2A70, 0x0297, 0x02, 
	0x2A72, 0x01CE, 0x02, 
	0x2A76, 0x02A2, 0x02, 
	0x2A78, 0x01D9, 0x02, 
	0x2A7C, 0x02AD, 0x02, 
	0x2A7E, 0x01E4, 0x02, 
	0x2A82, 0x02B8, 0x02, 
	0x2A84, 0x01EF, 0x02, 
	0x2A88, 0x02C3, 0x02, 
	0x2A8A, 0x0297, 0x02, 
	0x2A8E, 0x02CE, 0x02, 
	0x2A90, 0x02A2, 0x02, 
	0x2B06, 0x0053, 0x02, 
	0x2B08, 0x001E, 0x02, 
	0x2B0C, 0x009B, 0x02, 
	0x2B0E, 0x0047, 0x02, 
	0x2B12, 0x009B, 0x02, 
	0x2B14, 0x004E, 0x02, 
	0x3BC0, 0x0300, 0x02, 
	0x3BC2, 0x0100, 0x02, 
	0x3BD4, 0x3005, 0x02, 
	0x3BD6, 0x0505, 0x02, 
	0x3BD8, 0x070C, 0x02, 
	0x3BDE, 0x0D0F, 0x02, 
	0x3BE0, 0x0701, 0x02, 
	0x3BE2, 0x0102, 0x02, 
	0x3BE8, 0x0000, 0x02, 
	0x3BEA, 0x0880, 0x02, 
	0x3BEC, 0x4D04, 0x02, 
	0x3BEE, 0x0408, 0x02, 
	0x3BFA, 0x19EC, 0x02, 
	0x3BFC, 0x02FD, 0x02, 
	0x3BFE, 0x22EF, 0x02, 
	0x3C00, 0x00A5, 0x02, 
	0x3C04, 0x0637, 0x02, 
	0x3D28, 0x48AA, 0x02, 
	0x3D2C, 0x8007, 0x02, 
	0x3D2E, 0x000C, 0x02, 
	0x3D32, 0x0130, 0x02, 
	0x3D34, 0x06C0, 0x02, 
	0x3D36, 0x0101, 0x02, 
	0x3DC2, 0x06DE, 0x02, 
	0x3DC4, 0x05A0, 0x02, 
	0x3DC6, 0x076C, 0x02, 
	0x3DC8, 0x0064, 0x02, 
	0x3DCA, 0x076C, 0x02, 
	0x3DCC, 0x06E0, 0x02, 
	0x3F6C, 0x0000, 0x02, 
	0x3F92, 0x049E, 0x02, 
	0x3FA4, 0x0000, 0x02, 
	0x3FDC, 0x0000, 0x02, 
	0x42E0, 0x0100, 0x02, 
	0x4C84, 0x0000, 0x02, 
	0x4C86, 0x0000, 0x02, 
	0x4C88, 0x0000, 0x02, 
	0x4C8A, 0x0000, 0x02, 
	0x4C8C, 0x0000, 0x02, 
	0x4C8E, 0x0000, 0x02, 
	0x4C90, 0x0000, 0x02, 
	0x4C92, 0x0000, 0x02, 
	0x4C94, 0x0000, 0x02, 
	0x4C96, 0x0000, 0x02, 
	0x4C98, 0x0000, 0x02, 
	0x4C9A, 0x0000, 0x02, 
	0x4C9C, 0x0000, 0x02, 
	0x4C9E, 0x0000, 0x02, 
	0x4CA0, 0x0000, 0x02, 
	0x4CA2, 0x0000, 0x02, 
	0x4FC8, 0x0000, 0x02, 
	0x4FCA, 0x0000, 0x02, 
	0x4FCC, 0x0000, 0x02, 
	0x4FCE, 0x0000, 0x02, 
	0x4FD0, 0x0000, 0x02, 
	0x4FD2, 0x0000, 0x02, 
	0x4FD4, 0x0000, 0x02, 
	0x4FD6, 0x0000, 0x02, 
	0x4FD8, 0x0000, 0x02, 
	0x4FDA, 0x0000, 0x02, 
	0x4FDC, 0x0000, 0x02, 
	0x4FDE, 0x0000, 0x02, 
	0x4FE0, 0x0000, 0x02, 
	0x4FE2, 0x0000, 0x02, 
	0x4FE4, 0x0000, 0x02, 
	0x4FE6, 0x0000, 0x02, 
	0x5208, 0x0100, 0x02, 
	0x520A, 0x0000, 0x02, 
	0x5214, 0x0066, 0x02, 
	0x521E, 0x0000, 0x02, 
	0x5228, 0x0066, 0x02, 
	0x5232, 0x0066, 0x02, 
	0x523C, 0x0000, 0x02, 
	0x5246, 0x0000, 0x02, 
	0x5250, 0x0014, 0x02, 
	0x525A, 0x0033, 0x02, 
	0x5264, 0x0000, 0x02, 
	0x526E, 0x0000, 0x02, 
	0x5278, 0x0000, 0x02, 
	0x5282, 0x0000, 0x02, 
	0x528C, 0x001E, 0x02, 
	0x5296, 0x0033, 0x02, 
	0x52EA, 0x0100, 0x02, 
	0x52F6, 0x1000, 0x02, 
	0x52F8, 0x1000, 0x02, 
	0x52FA, 0x1000, 0x02, 
	0x52FC, 0x1000, 0x02, 
	0x52FE, 0x1000, 0x02, 
	0x5300, 0x1000, 0x02, 
	0x5302, 0x1000, 0x02, 
	0x5304, 0x1000, 0x02, 
	0x5306, 0x1000, 0x02, 
	0x5308, 0x1000, 0x02, 
	0x530A, 0x100C, 0x02, 
	0x530C, 0x1010, 0x02, 
	0x530E, 0x1014, 0x02, 
	0x5310, 0x101C, 0x02, 
	0x5312, 0x1028, 0x02, 
	0x5394, 0x0003, 0x02, 
	0x53B2, 0x0100, 0x02, 
	0x53BE, 0x0100, 0x02, 
	0x5A40, 0x0100, 0x02, 
	0x5A42, 0x0000, 0x02, 
	0x90C8, 0x0000, 0x02, 
	0x90CA, 0x0000, 0x02, 
	0x90CC, 0x0000, 0x02, 
	0x90CE, 0x0000, 0x02, 
	0x90D0, 0x0549, 0x02, 
	0x90D2, 0x0448, 0x02, 
	0x90D4, 0x054A, 0x02, 
	0x90D6, 0xC1F8, 0x02, 
	0x90D8, 0xBC06, 0x02, 
	0x90DA, 0x101A, 0x02, 
	0x90DC, 0xA1F8, 0x02, 
	0x90DE, 0xC006, 0x02, 
	0x90E0, 0x00F0, 0x02, 
	0x90E2, 0x65B8, 0x02, 
	0x90E4, 0x2000, 0x02, 
	0x90E6, 0x926C, 0x02, 
	0x90E8, 0x2000, 0x02, 
	0x90EA, 0x6640, 0x02, 
	0x90EC, 0x2000, 0x02, 
	0x90EE, 0xDA00, 0x02, 
	0x90F0, 0x2DE9, 0x02, 
	0x90F2, 0xF041, 0x02, 
	0x90F4, 0x0646, 0x02, 
	0x90F6, 0x3A48, 0x02, 
	0x90F8, 0x0D46, 0x02, 
	0x90FA, 0x0268, 0x02, 
	0x90FC, 0x140C, 0x02, 
	0x90FE, 0x97B2, 0x02, 
	0x9100, 0x0022, 0x02, 
	0x9102, 0x3946, 0x02, 
	0x9104, 0x2046, 0x02, 
	0x9106, 0x00F0, 0x02, 
	0x9108, 0x79F8, 0x02, 
	0x910A, 0x2946, 0x02, 
	0x910C, 0x3046, 0x02, 
	0x910E, 0x00F0, 0x02, 
	0x9110, 0x7AF8, 0x02, 
	0x9112, 0x0122, 0x02, 
	0x9114, 0x3946, 0x02, 
	0x9116, 0x2046, 0x02, 
	0x9118, 0x00F0, 0x02, 
	0x911A, 0x70F8, 0x02, 
	0x911C, 0x3148, 0x02, 
	0x911E, 0xD0F8, 0x02, 
	0x9120, 0x0C05, 0x02, 
	0x9122, 0xB0F5, 0x02, 
	0x9124, 0x805F, 0x02, 
	0x9126, 0x09D9, 0x02, 
	0x9128, 0x2F48, 0x02, 
	0x912A, 0x0088, 0x02, 
	0x912C, 0x0028, 0x02, 
	0x912E, 0x05D0, 0x02, 
	0x9130, 0x2E49, 0x02, 
	0x9132, 0x0220, 0x02, 
	0x9134, 0xA1F8, 0x02, 
	0x9136, 0x0201, 0x02, 
	0x9138, 0xA1F8, 0x02, 
	0x913A, 0x1401, 0x02, 
	0x913C, 0xBDE8, 0x02, 
	0x913E, 0xF081, 0x02, 
	0x9140, 0x10B5, 0x02, 
	0x9142, 0x284C, 0x02, 
	0x9144, 0x0146, 0x02, 
	0x9146, 0xD4F8, 0x02, 
	0x9148, 0xEC05, 0x02, 
	0x914A, 0x04F2, 0x02, 
	0x914C, 0xEC54, 0x02, 
	0x914E, 0x00F0, 0x02, 
	0x9150, 0x5FF8, 0x02, 
	0x9152, 0x2068, 0x02, 
	0x9154, 0x00F0, 0x02, 
	0x9156, 0x61F8, 0x02, 
	0x9158, 0x00F0, 0x02, 
	0x915A, 0x64F8, 0x02, 
	0x915C, 0x2168, 0x02, 
	0x915E, 0x0844, 0x02, 
	0x9160, 0x2060, 0x02, 
	0x9162, 0x10BD, 0x02, 
	0x9164, 0x2DE9, 0x02, 
	0x9166, 0xF84F, 0x02, 
	0x9168, 0x8246, 0x02, 
	0x916A, 0x1D48, 0x02, 
	0x916C, 0x8846, 0x02, 
	0x916E, 0x1646, 0x02, 
	0x9170, 0x8168, 0x02, 
	0x9172, 0x9946, 0x02, 
	0x9174, 0x0D0C, 0x02, 
	0x9176, 0x8FB2, 0x02, 
	0x9178, 0x0A9C, 0x02, 
	0x917A, 0x0022, 0x02, 
	0x917C, 0x3946, 0x02, 
	0x917E, 0x2846, 0x02, 
	0x9180, 0x00F0, 0x02, 
	0x9182, 0x3CF8, 0x02, 
	0x9184, 0x4B46, 0x02, 
	0x9186, 0x3246, 0x02, 
	0x9188, 0x4146, 0x02, 
	0x918A, 0x5046, 0x02, 
	0x918C, 0x0094, 0x02, 
	0x918E, 0x00F0, 0x02, 
	0x9190, 0x4EF8, 0x02, 
	0x9192, 0x0122, 0x02, 
	0x9194, 0x3946, 0x02, 
	0x9196, 0x2846, 0x02, 
	0x9198, 0x00F0, 0x02, 
	0x919A, 0x30F8, 0x02, 
	0x919C, 0x1248, 0x02, 
	0x919E, 0x06EB, 0x02, 
	0x91A0, 0x4801, 0x02, 
	0x91A2, 0x4088, 0x02, 
	0x91A4, 0x201A, 0x02, 
	0x91A6, 0x401E, 0x02, 
	0x91A8, 0xC880, 0x02, 
	0x91AA, 0xBDE8, 0x02, 
	0x91AC, 0xF88F, 0x02, 
	0x91AE, 0x10B5, 0x02, 
	0x91B0, 0x0022, 0x02, 
	0x91B2, 0xAFF2, 0x02, 
	0x91B4, 0xC301, 0x02, 
	0x91B6, 0x0E48, 0x02, 
	0x91B8, 0x00F0, 0x02, 
	0x91BA, 0x3EF8, 0x02, 
	0x91BC, 0x084C, 0x02, 
	0x91BE, 0x0022, 0x02, 
	0x91C0, 0xAFF2, 0x02, 
	0x91C2, 0x8301, 0x02, 
	0x91C4, 0x2060, 0x02, 
	0x91C6, 0x0B48, 0x02, 
	0x91C8, 0x00F0, 0x02, 
	0x91CA, 0x36F8, 0x02, 
	0x91CC, 0x0022, 0x02, 
	0x91CE, 0xAFF2, 0x02, 
	0x91D0, 0x6B01, 0x02, 
	0x91D2, 0x6060, 0x02, 
	0x91D4, 0x0848, 0x02, 
	0x91D6, 0x00F0, 0x02, 
	0x91D8, 0x2FF8, 0x02, 
	0x91DA, 0xA060, 0x02, 
	0x91DC, 0x10BD, 0x02, 
	0x91DE, 0x0000, 0x02, 
	0x91E0, 0x2000, 0x02, 
	0x91E2, 0x9260, 0x02, 
	0x91E4, 0x2000, 0x02, 
	0x91E6, 0x6640, 0x02, 
	0x91E8, 0x2000, 0x02, 
	0x91EA, 0xD900, 0x02, 
	0x91EC, 0x4000, 0x02, 
	0x91EE, 0xB000, 0x02, 
	0x91F0, 0x0000, 0x02, 
	0x91F2, 0xEEAF, 0x02, 
	0x91F4, 0x0000, 0x02, 
	0x91F6, 0xD86B, 0x02, 
	0x91F8, 0x0000, 0x02, 
	0x91FA, 0x01F5, 0x02, 
	0x91FC, 0x49F2, 0x02, 
	0x91FE, 0x417C, 0x02, 
	0x9200, 0xC0F2, 0x02, 
	0x9202, 0x000C, 0x02, 
	0x9204, 0x6047, 0x02, 
	0x9206, 0x4EF6, 0x02, 
	0x9208, 0xAF6C, 0x02, 
	0x920A, 0xC0F2, 0x02, 
	0x920C, 0x000C, 0x02, 
	0x920E, 0x6047, 0x02, 
	0x9210, 0x4DF2, 0x02, 
	0x9212, 0x835C, 0x02, 
	0x9214, 0xC0F2, 0x02, 
	0x9216, 0x000C, 0x02, 
	0x9218, 0x6047, 0x02, 
	0x921A, 0x4DF2, 0x02, 
	0x921C, 0xB16C, 0x02, 
	0x921E, 0xC0F2, 0x02, 
	0x9220, 0x000C, 0x02, 
	0x9222, 0x6047, 0x02, 
	0x9224, 0x4DF2, 0x02, 
	0x9226, 0xC16C, 0x02, 
	0x9228, 0xC0F2, 0x02, 
	0x922A, 0x000C, 0x02, 
	0x922C, 0x6047, 0x02, 
	0x922E, 0x40F2, 0x02, 
	0x9230, 0xF51C, 0x02, 
	0x9232, 0xC0F2, 0x02, 
	0x9234, 0x000C, 0x02, 
	0x9236, 0x6047, 0x02, 
	0x9238, 0x4BF6, 0x02, 
	0x923A, 0x535C, 0x02, 
	0x923C, 0xC0F2, 0x02, 
	0x923E, 0x000C, 0x02, 
	0x9240, 0x6047, 0x02, 
	0x9242, 0x0000, 0x02, 
	0x9244, 0x0000, 0x02, 
	0x9246, 0x0000, 0x02, 
	0x9248, 0x0000, 0x02, 
	0x924A, 0x0000, 0x02, 
	0x924C, 0x0000, 0x02, 
	0x924E, 0x0000, 0x02, 
	0x9250, 0x30A1, 0x02, 
	0x9252, 0x01CB, 0x02, 
	0x9254, 0x0000, 0x02, 
	0x9256, 0x0026, 0x02, 
	0xD900, 0x0001, 0x02, 
	0xD902, 0x0000, 0x02, 
	0xFCFC, 0x4000, 0x02, 
	0x0112, 0x0A0A, 0x02, 
	0x0114, 0x0301, 0x02, 
	0x0116, 0x2B00, 0x02, 
	0x0118, 0x0102, 0x02, 
	0x011C, 0x0101, 0x02, 
	0x0136, 0x1A00, 0x02, 
	0x021E, 0x0000, 0x02, 
	0x0300, 0x0005, 0x02, 
	0x0304, 0x0003, 0x02, 
	0x0306, 0x00E9, 0x02, 
	0x030C, 0x0001, 0x02, 
	0x030E, 0x0004, 0x02, 
	0x0310, 0x0116, 0x02, 
	0x0312, 0x0001, 0x02, 
	0x0340, 0x0B30, 0x02, 
	0x0342, 0x24A8, 0x02, 
	0x0344, 0x0148, 0x02, 
	0x0346, 0x0000, 0x02, 
	0x0348, 0x1DC7, 0x02, 
	0x034A, 0x0AAF, 0x02, 
	0x034C, 0x0E40, 0x02, 
	0x034E, 0x0AB0, 0x02, 
	0x0350, 0x0000, 0x02, 
	0x0352, 0x0000, 0x02, 
	0x0380, 0x0001, 0x02, 
	0x0382, 0x0001, 0x02, 
	0x0384, 0x0001, 0x02, 
	0x0386, 0x0001, 0x02, 
	0x0402, 0x1010, 0x02, 
	0x0404, 0x1000, 0x02, 
	0x081C, 0x0D09, 0x02, 
	0x081E, 0x0A0B, 0x02, 
	0x0820, 0x0200, 0x02, 
	0x0900, 0x0011, 0x02, 
	0x0B02, 0x0103, 0x02, 
	0x0B04, 0x0001, 0x02, 
	0x0B06, 0x0101, 0x02, 
	0x0B80, 0x0100, 0x02, 
	0x0B84, 0x0201, 0x02, 
	0xF45C, 0x00FF, 0x02, 
	0xF462, 0x0015, 0x02, 
	0xF464, 0x0016, 0x02, 
	0xF466, 0x0013, 0x02, 
	0xF46C, 0x0010, 0x02, 
	0xF48A, 0x0020, 0x02, 
	0x6000, 0x0085, 0x02, 
	0x6214, 0x7970, 0x02, 
	/*0x0100, 0x0100, 0x02,// Stream On*/ 
};

const u32 sensor_3j1_setfile_B_3648x2736_30fps[] = {
	0xFCFC, 0x4000, 0x02, 
	0x6010, 0x0001, 0x02, 
	0x6000, 0x0005, 0x02, 
	I2C_MODE_DELAY, 3000, 0x00, /* 3ms delay */
	0xFCFC, 0x4000, 0x02, 
	0x6214, 0x7971, 0x02, 
	0x6218, 0x7150, 0x02, 
	0x6028, 0x2000, 0x02, 
	0xFCFC, 0x2000, 0x02, 
	0x0D9C, 0x000A, 0x02, 
	0x0E00, 0x0101, 0x02, 
	0x0E50, 0x0100, 0x02, 
	0x0E52, 0x00FF, 0x02, 
	0x0E56, 0x0100, 0x02, 
	0x0E5A, 0x001B, 0x02, 
	0x0E5C, 0x171B, 0x02, 
	0x0E5E, 0xF46E, 0x02, 
	0x0EC0, 0x0101, 0x02, 
	0x0EE2, 0x0080, 0x02, 
	0x0EE4, 0x0101, 0x02, 
	0x0EE6, 0x0004, 0x02, 
	0x11B0, 0x0815, 0x02, 
	0x11C2, 0x0815, 0x02, 
	0x1334, 0x0A01, 0x02, 
	0x1336, 0x03F1, 0x02, 
	0x133A, 0x0101, 0x02, 
	0x1342, 0x01EA, 0x02, 
	0x1348, 0x041A, 0x02, 
	0x13B4, 0x003C, 0x02, 
	0x13C6, 0x0002, 0x02, 
	0x1426, 0x0003, 0x02, 
	0x142C, 0x000A, 0x02, 
	0x16C6, 0x0011, 0x02, 
	0x16CC, 0x0032, 0x02, 
	0x2782, 0x01E0, 0x02, 
	0x2784, 0x01EA, 0x02, 
	0x2788, 0x03C0, 0x02, 
	0x278A, 0x03B8, 0x02, 
	0x27A0, 0x08C0, 0x02, 
	0x27A2, 0x08C0, 0x02, 
	0x27F4, 0x003C, 0x02, 
	0x27F6, 0x003C, 0x02, 
	0x2806, 0x0002, 0x02, 
	0x2808, 0x0002, 0x02, 
	0x2866, 0x0003, 0x02, 
	0x2868, 0x0004, 0x02, 
	0x286C, 0x001A, 0x02, 
	0x286E, 0x0016, 0x02, 
	0x2872, 0x001D, 0x02, 
	0x2874, 0x0017, 0x02, 
	0x2A52, 0x0260, 0x02, 
	0x2A54, 0x0197, 0x02, 
	0x2A58, 0x026B, 0x02, 
	0x2A5A, 0x01A2, 0x02, 
	0x2A5E, 0x0276, 0x02, 
	0x2A60, 0x01AD, 0x02, 
	0x2A64, 0x0281, 0x02, 
	0x2A66, 0x01B8, 0x02, 
	0x2A6A, 0x028C, 0x02, 
	0x2A6C, 0x01C3, 0x02, 
	0x2A70, 0x0297, 0x02, 
	0x2A72, 0x01CE, 0x02, 
	0x2A76, 0x02A2, 0x02, 
	0x2A78, 0x01D9, 0x02, 
	0x2A7C, 0x02AD, 0x02, 
	0x2A7E, 0x01E4, 0x02, 
	0x2A82, 0x02B8, 0x02, 
	0x2A84, 0x01EF, 0x02, 
	0x2A88, 0x02C3, 0x02, 
	0x2A8A, 0x0297, 0x02, 
	0x2A8E, 0x02CE, 0x02, 
	0x2A90, 0x02A2, 0x02, 
	0x2B06, 0x0053, 0x02, 
	0x2B08, 0x001E, 0x02, 
	0x2B0C, 0x009B, 0x02, 
	0x2B0E, 0x0047, 0x02, 
	0x2B12, 0x009B, 0x02, 
	0x2B14, 0x004E, 0x02, 
	0x3BC0, 0x0300, 0x02, 
	0x3BC2, 0x0100, 0x02, 
	0x3BD4, 0x3005, 0x02, 
	0x3BD6, 0x0505, 0x02, 
	0x3BD8, 0x070C, 0x02, 
	0x3BDE, 0x0D0F, 0x02, 
	0x3BE0, 0x0701, 0x02, 
	0x3BE2, 0x0102, 0x02, 
	0x3BE8, 0x0000, 0x02, 
	0x3BEA, 0x0880, 0x02, 
	0x3BEC, 0x4D04, 0x02, 
	0x3BEE, 0x0408, 0x02, 
	0x3BFA, 0x19EC, 0x02, 
	0x3BFC, 0x02FD, 0x02, 
	0x3BFE, 0x22EF, 0x02, 
	0x3C00, 0x00A5, 0x02, 
	0x3C04, 0x0637, 0x02, 
	0x3D28, 0x48AA, 0x02, 
	0x3D2C, 0x8007, 0x02, 
	0x3D2E, 0x000C, 0x02, 
	0x3D32, 0x0130, 0x02, 
	0x3D34, 0x06C0, 0x02, 
	0x3D36, 0x0101, 0x02, 
	0x3DC2, 0x06DE, 0x02, 
	0x3DC4, 0x05A0, 0x02, 
	0x3DC6, 0x076C, 0x02, 
	0x3DC8, 0x0064, 0x02, 
	0x3DCA, 0x076C, 0x02, 
	0x3DCC, 0x06E0, 0x02, 
	0x3F6C, 0x0000, 0x02, 
	0x3F92, 0x049E, 0x02, 
	0x3FA4, 0x0000, 0x02, 
	0x3FDC, 0x0000, 0x02, 
	0x42E0, 0x0100, 0x02, 
	0x4C84, 0x0000, 0x02, 
	0x4C86, 0x0000, 0x02, 
	0x4C88, 0x0000, 0x02, 
	0x4C8A, 0x0000, 0x02, 
	0x4C8C, 0x0000, 0x02, 
	0x4C8E, 0x0000, 0x02, 
	0x4C90, 0x0000, 0x02, 
	0x4C92, 0x0000, 0x02, 
	0x4C94, 0x0000, 0x02, 
	0x4C96, 0x0000, 0x02, 
	0x4C98, 0x0000, 0x02, 
	0x4C9A, 0x0000, 0x02, 
	0x4C9C, 0x0000, 0x02, 
	0x4C9E, 0x0000, 0x02, 
	0x4CA0, 0x0000, 0x02, 
	0x4CA2, 0x0000, 0x02, 
	0x4FC8, 0x0000, 0x02, 
	0x4FCA, 0x0000, 0x02, 
	0x4FCC, 0x0000, 0x02, 
	0x4FCE, 0x0000, 0x02, 
	0x4FD0, 0x0000, 0x02, 
	0x4FD2, 0x0000, 0x02, 
	0x4FD4, 0x0000, 0x02, 
	0x4FD6, 0x0000, 0x02, 
	0x4FD8, 0x0000, 0x02, 
	0x4FDA, 0x0000, 0x02, 
	0x4FDC, 0x0000, 0x02, 
	0x4FDE, 0x0000, 0x02, 
	0x4FE0, 0x0000, 0x02, 
	0x4FE2, 0x0000, 0x02, 
	0x4FE4, 0x0000, 0x02, 
	0x4FE6, 0x0000, 0x02, 
	0x5208, 0x0100, 0x02, 
	0x520A, 0x0000, 0x02, 
	0x5214, 0x0066, 0x02, 
	0x521E, 0x0000, 0x02, 
	0x5228, 0x0066, 0x02, 
	0x5232, 0x0066, 0x02, 
	0x523C, 0x0000, 0x02, 
	0x5246, 0x0000, 0x02, 
	0x5250, 0x0014, 0x02, 
	0x525A, 0x0033, 0x02, 
	0x5264, 0x0000, 0x02, 
	0x526E, 0x0000, 0x02, 
	0x5278, 0x0000, 0x02, 
	0x5282, 0x0000, 0x02, 
	0x528C, 0x001E, 0x02, 
	0x5296, 0x0033, 0x02, 
	0x52EA, 0x0100, 0x02, 
	0x52F6, 0x1000, 0x02, 
	0x52F8, 0x1000, 0x02, 
	0x52FA, 0x1000, 0x02, 
	0x52FC, 0x1000, 0x02, 
	0x52FE, 0x1000, 0x02, 
	0x5300, 0x1000, 0x02, 
	0x5302, 0x1000, 0x02, 
	0x5304, 0x1000, 0x02, 
	0x5306, 0x1000, 0x02, 
	0x5308, 0x1000, 0x02, 
	0x530A, 0x100C, 0x02, 
	0x530C, 0x1010, 0x02, 
	0x530E, 0x1014, 0x02, 
	0x5310, 0x101C, 0x02, 
	0x5312, 0x1028, 0x02, 
	0x5394, 0x0003, 0x02, 
	0x53B2, 0x0100, 0x02, 
	0x53BE, 0x0100, 0x02, 
	0x5A40, 0x0100, 0x02, 
	0x5A42, 0x0000, 0x02, 
	0x90C8, 0x0000, 0x02, 
	0x90CA, 0x0000, 0x02, 
	0x90CC, 0x0000, 0x02, 
	0x90CE, 0x0000, 0x02, 
	0x90D0, 0x0549, 0x02, 
	0x90D2, 0x0448, 0x02, 
	0x90D4, 0x054A, 0x02, 
	0x90D6, 0xC1F8, 0x02, 
	0x90D8, 0xBC06, 0x02, 
	0x90DA, 0x101A, 0x02, 
	0x90DC, 0xA1F8, 0x02, 
	0x90DE, 0xC006, 0x02, 
	0x90E0, 0x00F0, 0x02, 
	0x90E2, 0x65B8, 0x02, 
	0x90E4, 0x2000, 0x02, 
	0x90E6, 0x926C, 0x02, 
	0x90E8, 0x2000, 0x02, 
	0x90EA, 0x6640, 0x02, 
	0x90EC, 0x2000, 0x02, 
	0x90EE, 0xDA00, 0x02, 
	0x90F0, 0x2DE9, 0x02, 
	0x90F2, 0xF041, 0x02, 
	0x90F4, 0x0646, 0x02, 
	0x90F6, 0x3A48, 0x02, 
	0x90F8, 0x0D46, 0x02, 
	0x90FA, 0x0268, 0x02, 
	0x90FC, 0x140C, 0x02, 
	0x90FE, 0x97B2, 0x02, 
	0x9100, 0x0022, 0x02, 
	0x9102, 0x3946, 0x02, 
	0x9104, 0x2046, 0x02, 
	0x9106, 0x00F0, 0x02, 
	0x9108, 0x79F8, 0x02, 
	0x910A, 0x2946, 0x02, 
	0x910C, 0x3046, 0x02, 
	0x910E, 0x00F0, 0x02, 
	0x9110, 0x7AF8, 0x02, 
	0x9112, 0x0122, 0x02, 
	0x9114, 0x3946, 0x02, 
	0x9116, 0x2046, 0x02, 
	0x9118, 0x00F0, 0x02, 
	0x911A, 0x70F8, 0x02, 
	0x911C, 0x3148, 0x02, 
	0x911E, 0xD0F8, 0x02, 
	0x9120, 0x0C05, 0x02, 
	0x9122, 0xB0F5, 0x02, 
	0x9124, 0x805F, 0x02, 
	0x9126, 0x09D9, 0x02, 
	0x9128, 0x2F48, 0x02, 
	0x912A, 0x0088, 0x02, 
	0x912C, 0x0028, 0x02, 
	0x912E, 0x05D0, 0x02, 
	0x9130, 0x2E49, 0x02, 
	0x9132, 0x0220, 0x02, 
	0x9134, 0xA1F8, 0x02, 
	0x9136, 0x0201, 0x02, 
	0x9138, 0xA1F8, 0x02, 
	0x913A, 0x1401, 0x02, 
	0x913C, 0xBDE8, 0x02, 
	0x913E, 0xF081, 0x02, 
	0x9140, 0x10B5, 0x02, 
	0x9142, 0x284C, 0x02, 
	0x9144, 0x0146, 0x02, 
	0x9146, 0xD4F8, 0x02, 
	0x9148, 0xEC05, 0x02, 
	0x914A, 0x04F2, 0x02, 
	0x914C, 0xEC54, 0x02, 
	0x914E, 0x00F0, 0x02, 
	0x9150, 0x5FF8, 0x02, 
	0x9152, 0x2068, 0x02, 
	0x9154, 0x00F0, 0x02, 
	0x9156, 0x61F8, 0x02, 
	0x9158, 0x00F0, 0x02, 
	0x915A, 0x64F8, 0x02, 
	0x915C, 0x2168, 0x02, 
	0x915E, 0x0844, 0x02, 
	0x9160, 0x2060, 0x02, 
	0x9162, 0x10BD, 0x02, 
	0x9164, 0x2DE9, 0x02, 
	0x9166, 0xF84F, 0x02, 
	0x9168, 0x8246, 0x02, 
	0x916A, 0x1D48, 0x02, 
	0x916C, 0x8846, 0x02, 
	0x916E, 0x1646, 0x02, 
	0x9170, 0x8168, 0x02, 
	0x9172, 0x9946, 0x02, 
	0x9174, 0x0D0C, 0x02, 
	0x9176, 0x8FB2, 0x02, 
	0x9178, 0x0A9C, 0x02, 
	0x917A, 0x0022, 0x02, 
	0x917C, 0x3946, 0x02, 
	0x917E, 0x2846, 0x02, 
	0x9180, 0x00F0, 0x02, 
	0x9182, 0x3CF8, 0x02, 
	0x9184, 0x4B46, 0x02, 
	0x9186, 0x3246, 0x02, 
	0x9188, 0x4146, 0x02, 
	0x918A, 0x5046, 0x02, 
	0x918C, 0x0094, 0x02, 
	0x918E, 0x00F0, 0x02, 
	0x9190, 0x4EF8, 0x02, 
	0x9192, 0x0122, 0x02, 
	0x9194, 0x3946, 0x02, 
	0x9196, 0x2846, 0x02, 
	0x9198, 0x00F0, 0x02, 
	0x919A, 0x30F8, 0x02, 
	0x919C, 0x1248, 0x02, 
	0x919E, 0x06EB, 0x02, 
	0x91A0, 0x4801, 0x02, 
	0x91A2, 0x4088, 0x02, 
	0x91A4, 0x201A, 0x02, 
	0x91A6, 0x401E, 0x02, 
	0x91A8, 0xC880, 0x02, 
	0x91AA, 0xBDE8, 0x02, 
	0x91AC, 0xF88F, 0x02, 
	0x91AE, 0x10B5, 0x02, 
	0x91B0, 0x0022, 0x02, 
	0x91B2, 0xAFF2, 0x02, 
	0x91B4, 0xC301, 0x02, 
	0x91B6, 0x0E48, 0x02, 
	0x91B8, 0x00F0, 0x02, 
	0x91BA, 0x3EF8, 0x02, 
	0x91BC, 0x084C, 0x02, 
	0x91BE, 0x0022, 0x02, 
	0x91C0, 0xAFF2, 0x02, 
	0x91C2, 0x8301, 0x02, 
	0x91C4, 0x2060, 0x02, 
	0x91C6, 0x0B48, 0x02, 
	0x91C8, 0x00F0, 0x02, 
	0x91CA, 0x36F8, 0x02, 
	0x91CC, 0x0022, 0x02, 
	0x91CE, 0xAFF2, 0x02, 
	0x91D0, 0x6B01, 0x02, 
	0x91D2, 0x6060, 0x02, 
	0x91D4, 0x0848, 0x02, 
	0x91D6, 0x00F0, 0x02, 
	0x91D8, 0x2FF8, 0x02, 
	0x91DA, 0xA060, 0x02, 
	0x91DC, 0x10BD, 0x02, 
	0x91DE, 0x0000, 0x02, 
	0x91E0, 0x2000, 0x02, 
	0x91E2, 0x9260, 0x02, 
	0x91E4, 0x2000, 0x02, 
	0x91E6, 0x6640, 0x02, 
	0x91E8, 0x2000, 0x02, 
	0x91EA, 0xD900, 0x02, 
	0x91EC, 0x4000, 0x02, 
	0x91EE, 0xB000, 0x02, 
	0x91F0, 0x0000, 0x02, 
	0x91F2, 0xEEAF, 0x02, 
	0x91F4, 0x0000, 0x02, 
	0x91F6, 0xD86B, 0x02, 
	0x91F8, 0x0000, 0x02, 
	0x91FA, 0x01F5, 0x02, 
	0x91FC, 0x49F2, 0x02, 
	0x91FE, 0x417C, 0x02, 
	0x9200, 0xC0F2, 0x02, 
	0x9202, 0x000C, 0x02, 
	0x9204, 0x6047, 0x02, 
	0x9206, 0x4EF6, 0x02, 
	0x9208, 0xAF6C, 0x02, 
	0x920A, 0xC0F2, 0x02, 
	0x920C, 0x000C, 0x02, 
	0x920E, 0x6047, 0x02, 
	0x9210, 0x4DF2, 0x02, 
	0x9212, 0x835C, 0x02, 
	0x9214, 0xC0F2, 0x02, 
	0x9216, 0x000C, 0x02, 
	0x9218, 0x6047, 0x02, 
	0x921A, 0x4DF2, 0x02, 
	0x921C, 0xB16C, 0x02, 
	0x921E, 0xC0F2, 0x02, 
	0x9220, 0x000C, 0x02, 
	0x9222, 0x6047, 0x02, 
	0x9224, 0x4DF2, 0x02, 
	0x9226, 0xC16C, 0x02, 
	0x9228, 0xC0F2, 0x02, 
	0x922A, 0x000C, 0x02, 
	0x922C, 0x6047, 0x02, 
	0x922E, 0x40F2, 0x02, 
	0x9230, 0xF51C, 0x02, 
	0x9232, 0xC0F2, 0x02, 
	0x9234, 0x000C, 0x02, 
	0x9236, 0x6047, 0x02, 
	0x9238, 0x4BF6, 0x02, 
	0x923A, 0x535C, 0x02, 
	0x923C, 0xC0F2, 0x02, 
	0x923E, 0x000C, 0x02, 
	0x9240, 0x6047, 0x02, 
	0x9242, 0x0000, 0x02, 
	0x9244, 0x0000, 0x02, 
	0x9246, 0x0000, 0x02, 
	0x9248, 0x0000, 0x02, 
	0x924A, 0x0000, 0x02, 
	0x924C, 0x0000, 0x02, 
	0x924E, 0x0000, 0x02, 
	0x9250, 0x30A1, 0x02, 
	0x9252, 0x01CB, 0x02, 
	0x9254, 0x0000, 0x02, 
	0x9256, 0x0026, 0x02, 
	0xD900, 0x0001, 0x02, 
	0xD902, 0x0000, 0x02, 
	0xFCFC, 0x4000, 0x02, 
	0x0112, 0x0A0A, 0x02, 
	0x0114, 0x0301, 0x02, 
	0x0116, 0x2B00, 0x02, 
	0x0118, 0x0102, 0x02, 
	0x011C, 0x0101, 0x02, 
	0x0136, 0x1A00, 0x02, 
	0x021E, 0x0000, 0x02, 
	0x0300, 0x0005, 0x02, 
	0x0304, 0x0003, 0x02, 
	0x0306, 0x00E9, 0x02, 
	0x030C, 0x0001, 0x02, 
	0x030E, 0x0004, 0x02, 
	0x0310, 0x0116, 0x02, 
	0x0312, 0x0001, 0x02, 
	0x0340, 0x0B30, 0x02, 
	0x0342, 0x24A8, 0x02, 
	0x0344, 0x0148, 0x02, 
	0x0346, 0x0000, 0x02, 
	0x0348, 0x1DC7, 0x02, 
	0x034A, 0x0AAF, 0x02, 
	0x034C, 0x0E40, 0x02, 
	0x034E, 0x0AB0, 0x02, 
	0x0350, 0x0000, 0x02, 
	0x0352, 0x0000, 0x02, 
	0x0380, 0x0001, 0x02, 
	0x0382, 0x0001, 0x02, 
	0x0384, 0x0001, 0x02, 
	0x0386, 0x0001, 0x02, 
	0x0402, 0x1010, 0x02, 
	0x0404, 0x1000, 0x02, 
	0x081C, 0x0D09, 0x02, 
	0x081E, 0x0A0B, 0x02, 
	0x0820, 0x0200, 0x02, 
	0x0900, 0x0011, 0x02, 
	0x0B02, 0x0103, 0x02, 
	0x0B04, 0x0001, 0x02, 
	0x0B06, 0x0101, 0x02, 
	0x0B80, 0x0100, 0x02, 
	0x0B84, 0x0201, 0x02, 
	0xF45C, 0x00FF, 0x02, 
	0xF462, 0x0015, 0x02, 
	0xF464, 0x0016, 0x02, 
	0xF466, 0x0013, 0x02, 
	0xF46C, 0x0010, 0x02, 
	0xF48A, 0x0020, 0x02, 
	0x6000, 0x0085, 0x02, 
	0x6214, 0x7970, 0x02, 
	/*0x0100, 0x0100, 0x02,// Stream On*/ 
};

const u32 sensor_3j1_setfile_B_2736x2736_30fps[] = {};
const u32 sensor_3j1_setfile_B_3968x2232_30fps[] = {};
const u32 sensor_3j1_setfile_B_3968x1880_30fps[] = {};
const u32 sensor_3j1_setfile_B_2944x2208_30fps[] = {};
const u32 sensor_3j1_setfile_B_3216x1808_30fps[] = {};
const u32 sensor_3j1_setfile_B_3216x1528_30fps[] = {};
const u32 sensor_3j1_setfile_B_2208x2208_30fps[] = {};
const u32 sensor_3j1_setfile_B_1824x1368_30fps[] = {};
const u32 sensor_3j1_setfile_B_1988x1120_120fps[] = {};
const u32 sensor_3j1_setfile_B_1988x1120_240fps[] = {};
const u32 sensor_3j1_setfile_B_912x684_120fps[] = {};
const u32 sensor_3j1_setfile_B_3648x2736_30fps_nonPD[] = {};
const u32 sensor_3j1_setfile_B_3968x2232_30fps_nonPD[] = {};
const u32 sensor_3j1_setfile_B_1824x1368_30fps_nonPD[] = {};
const u32 sensor_3j1_setfile_B_1472x1104_30fps[] = {};
const u32 sensor_3j1_setfile_B_1616x904_30fps[] = {};
const u32 sensor_3j1_setfile_B_1616x768_30fps[] = {};
const u32 sensor_3j1_setfile_B_1104x1104_30fps[] = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_3648x2736_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1807000000, /* mipi_datarate */
	201930000*4, /* pclk */
	0x0B30, /* frame_length_lines */
	0x24A8, /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_2736x2736_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_3968x2232_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_3968x1880_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_2944x2208_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_3216x1808_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_3216x1528_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_2208x2208_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1824x1368_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1988x1120_120fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1988x1120_240fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_912x684_120fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1472x1104_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1616x904_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1616x768_30fps = {};

const struct sensor_pll_info_compact sensor_3j1_pllinfo_B_1104x1104_30fps = {};

static const u32 *sensor_3j1_setfiles_B[] = {
	sensor_3j1_setfile_B_3648x2736_30fps,
	sensor_3j1_setfile_B_2736x2736_30fps,
	sensor_3j1_setfile_B_3968x2232_30fps,
	sensor_3j1_setfile_B_3968x1880_30fps,
	sensor_3j1_setfile_B_2944x2208_30fps,
	sensor_3j1_setfile_B_3216x1808_30fps,
	sensor_3j1_setfile_B_3216x1528_30fps,
	sensor_3j1_setfile_B_2208x2208_30fps,
	sensor_3j1_setfile_B_1824x1368_30fps,
	sensor_3j1_setfile_B_1988x1120_120fps,
	sensor_3j1_setfile_B_1988x1120_240fps,
	sensor_3j1_setfile_B_912x684_120fps,
	sensor_3j1_setfile_B_3648x2736_30fps_nonPD,
	sensor_3j1_setfile_B_3968x2232_30fps_nonPD,
	sensor_3j1_setfile_B_1824x1368_30fps_nonPD,
	sensor_3j1_setfile_B_1472x1104_30fps,
	sensor_3j1_setfile_B_1616x904_30fps,
	sensor_3j1_setfile_B_1616x768_30fps,
	sensor_3j1_setfile_B_1104x1104_30fps,
};

static const u32 sensor_3j1_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_3j1_setfile_B_3648x2736_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_2736x2736_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_3968x2232_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_3968x1880_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_2944x2208_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_3216x1808_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_3216x1528_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_2208x2208_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1824x1368_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1988x1120_120fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1988x1120_240fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_912x684_120fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_3648x2736_30fps_nonPD),
	ARRAY_SIZE(sensor_3j1_setfile_B_3968x2232_30fps_nonPD),
	ARRAY_SIZE(sensor_3j1_setfile_B_1824x1368_30fps_nonPD),
	ARRAY_SIZE(sensor_3j1_setfile_B_1472x1104_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1616x904_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1616x768_30fps),
	ARRAY_SIZE(sensor_3j1_setfile_B_1104x1104_30fps),
};

static const struct sensor_pll_info_compact *sensor_3j1_pllinfos_B[] = {
	&sensor_3j1_pllinfo_B_3648x2736_30fps,
	&sensor_3j1_pllinfo_B_2736x2736_30fps,
	&sensor_3j1_pllinfo_B_3968x2232_30fps,
	&sensor_3j1_pllinfo_B_3968x1880_30fps,
	&sensor_3j1_pllinfo_B_2944x2208_30fps,
	&sensor_3j1_pllinfo_B_3216x1808_30fps,
	&sensor_3j1_pllinfo_B_3216x1528_30fps,
	&sensor_3j1_pllinfo_B_2208x2208_30fps,
	&sensor_3j1_pllinfo_B_1824x1368_30fps,
	&sensor_3j1_pllinfo_B_1988x1120_120fps,
	&sensor_3j1_pllinfo_B_1988x1120_240fps,
	&sensor_3j1_pllinfo_B_912x684_120fps,
	&sensor_3j1_pllinfo_B_3648x2736_30fps,
	&sensor_3j1_pllinfo_B_3968x2232_30fps,
	&sensor_3j1_pllinfo_B_1824x1368_30fps,
	&sensor_3j1_pllinfo_B_1472x1104_30fps,
	&sensor_3j1_pllinfo_B_1616x904_30fps,
	&sensor_3j1_pllinfo_B_1616x768_30fps,
	&sensor_3j1_pllinfo_B_1104x1104_30fps,
};

#endif