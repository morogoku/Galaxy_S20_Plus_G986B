/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_3P8_SET_A_H
#define IS_CIS_3P8_SET_A_H

#include "is-cis.h"
#include "is-cis-3p8.h"

/* Use "setfile_A" as Non-PDAF setting */
/* Reference : S5K3P8SN_EVT1.0_Ver_0.8_20160909.xlsx */

const u32 sensor_3p8_setfile_A_Global[] = {
	/* this commented data is set to cis_init
	 * it is for reset -> 3ms delay
	 * 0xFCFC, 0x4000, 0x2,
	 * 0x6010, 0x0001, 0x2,
	 */
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,

	0x6028, 0x2000, 0x02,
	0x602A, 0x3074, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0449, 0x02,
	0x6F12, 0x0348, 0x02,
	0x6F12, 0x0860, 0x02,
	0x6F12, 0xCA8D, 0x02,
	0x6F12, 0x101A, 0x02,
	0x6F12, 0x8880, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x52B8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x31B8, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1E80, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x70B5, 0x02,
	0x6F12, 0x0646, 0x02,
	0x6F12, 0x2C48, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0168, 0x02,
	0x6F12, 0x0C0C, 0x02,
	0x6F12, 0x8DB2, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x61F8, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x63F8, 0x02,
	0x6F12, 0x2748, 0x02,
	0x6F12, 0x284A, 0x02,
	0x6F12, 0x0188, 0x02,
	0x6F12, 0x1180, 0x02,
	0x6F12, 0x911C, 0x02,
	0x6F12, 0x4088, 0x02,
	0x6F12, 0x0880, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x7040, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x50B8, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x8046, 0x02,
	0x6F12, 0x1E48, 0x02,
	0x6F12, 0x1446, 0x02,
	0x6F12, 0x0F46, 0x02,
	0x6F12, 0x4068, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x85B2, 0x02,
	0x6F12, 0x060C, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x42F8, 0x02,
	0x6F12, 0x1B48, 0x02,
	0x6F12, 0x408C, 0x02,
	0x6F12, 0x70B1, 0x02,
	0x6F12, 0x94F8, 0x02,
	0x6F12, 0x6B00, 0x02,
	0x6F12, 0x4021, 0x02,
	0x6F12, 0xB1FB, 0x02,
	0x6F12, 0xF0F0, 0x02,
	0x6F12, 0x1849, 0x02,
	0x6F12, 0x194A, 0x02,
	0x6F12, 0x098B, 0x02,
	0x6F12, 0x5288, 0x02,
	0x6F12, 0x891A, 0x02,
	0x6F12, 0x0901, 0x02,
	0x6F12, 0x91FB, 0x02,
	0x6F12, 0xF0F0, 0x02,
	0x6F12, 0x84B2, 0x02,
	0x6F12, 0x05E0, 0x02,
	0x6F12, 0x2246, 0x02,
	0x6F12, 0x3946, 0x02,
	0x6F12, 0x4046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x35F8, 0x02,
	0x6F12, 0x0446, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x3046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x25F8, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF081, 0x02,
	0x6F12, 0x10B5, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x9B01, 0x02,
	0x6F12, 0x0C48, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x2AF8, 0x02,
	0x6F12, 0x054C, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x6F01, 0x02,
	0x6F12, 0x2060, 0x02,
	0x6F12, 0x0948, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x22F8, 0x02,
	0x6F12, 0x6060, 0x02,
	0x6F12, 0x10BD, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x31B0, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x4A00, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0x950C, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2F10, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1B10, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2F40, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x15E9, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x9ECD, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0xA37C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x41F2, 0x02,
	0x6F12, 0xE95C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x49F6, 0x02,
	0x6F12, 0xCD6C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x4DF6, 0x02,
	0x6F12, 0x1B0C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x3108, 0x02,
	0x6F12, 0x021C, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0005, 0x02,
	0x602A, 0x4A00, 0x02,
	0x6F12, 0x0088, 0x02,
	0x6F12, 0x0D70, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
	0x602A, 0x164C, 0x02,
	0x6F12, 0x5555, 0x02,
	0x602A, 0x164E, 0x02,
	0x6F12, 0x5500, 0x02,
	0x602A, 0x166C, 0x02,
	0x6F12, 0x4040, 0x02,
	0x602A, 0x166E, 0x02,
	0x6F12, 0x4040, 0x02,
	0xFCFC, 0x4000, 0x02,
	0xF496, 0x0048, 0x02,
	0xF470, 0x0008, 0x02,
	0xF43A, 0x0015, 0x02,
	0xF484, 0x0006, 0x02,
	0xF442, 0x44C6, 0x02,
	0xF408, 0xFFF7, 0x02,
	0xF494, 0x0010, 0x02,
	0xF4D4, 0x0038, 0x02,
	0xF4D6, 0x0039, 0x02,
	0xF4D8, 0x0034, 0x02,
	0xF4DA, 0x0035, 0x02,
	0xF4DC, 0x0038, 0x02,
	0xF4DE, 0x0039, 0x02,
	0xF47C, 0x001F, 0x02,
	0xF62E, 0x00C5, 0x02,
	0xF630, 0x00CD, 0x02,
	0xF632, 0x00DD, 0x02,
	0xF634, 0x00E5, 0x02,
	0xF636, 0x00F5, 0x02,
	0xF638, 0x00FD, 0x02,
	0xF63A, 0x010D, 0x02,
	0xF63C, 0x0115, 0x02,
	0xF63E, 0x0125, 0x02,
	0xF640, 0x012D, 0x02,
	0x3070, 0x0000, 0x02,
	0x31C0, 0x00C8, 0x02,
	0x31A4, 0x0102, 0x02,
};

/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_4624x3466_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D9F, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0D8A, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x0130, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_4624x2602_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x1210, 0x02,
	0x034E, 0x0A2A, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x0130, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_2312x1732_60fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D9F, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x06C4, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x071E, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

#if defined(USE_SMART_BINNING_FRONT)
/* 4:3 16x10 margin, EXTCLK 26Mhz */
/* smart binning 2 mode setting */
const u32 sensor_3p8_setfile_A_2312x1732_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D9F, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x06C4, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0002, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0xA060, 0x02,
};
#else  /*original binning*/
/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_2312x1732_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D9F, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x06C4, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};
#endif

/* 4:3 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_2312x1732_15fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D97, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x06C4, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x1C76, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_2312x1300_60fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x0514, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x071E, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

#if defined(USE_SMART_BINNING_FRONT)
/* 16:9 16x10 margin, EXTCLK 26Mhz */
/* smart binning 2 mode setting */
const u32 sensor_3p8_setfile_A_2312x1300_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x0514, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0002, 0x02,
	0x0404, 0x0020, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0xA060, 0x02,
};
#else /*original binning*/
/* 16:9 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_2312x1300_30fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0010, 0x02,
	0x0348, 0x121F, 0x02,
	0x0346, 0x01C0, 0x02,
	0x034A, 0x0BEF, 0x02,
	0x034C, 0x0908, 0x02,
	0x034E, 0x0514, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x0E3B, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0122, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0003, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0003, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0001, 0x02,
	0x1006, 0x0002, 0x02,
	0xF440, 0x002F, 0x02,
	0x3664, 0x0019, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x00A0, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};
#endif

/* 4:3 4x4 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_1152x864_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0346, 0x0010, 0x02,
	0x034A, 0x0D8F, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0360, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x038F, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0144, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0007, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0000, 0x02,
	0x1006, 0x0003, 0x02,
	0xF440, 0x00AF, 0x02,
	0x3664, 0x0011, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x0007, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

/* 16:9 4x4 margin, EXTCLK 26Mhz */
const u32 sensor_3p8_setfile_A_1152x648_120fps[] = {
	0xFCFC, 0x4000, 0x02,
	0x6214, 0x7971, 0x02,
	0x6218, 0x7150, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0003, 0x02,
	0x0304, 0x0007, 0x02,
	0x0306, 0x0071, 0x02,
	0x030E, 0x0070, 0x02,
	0x3004, 0x0003, 0x02,
	0x0344, 0x0018, 0x02,
	0x0348, 0x1217, 0x02,
	0x0346, 0x01C8, 0x02,
	0x034A, 0x0BE7, 0x02,
	0x034C, 0x0480, 0x02,
	0x034E, 0x0288, 0x02,
	0x0342, 0x1400, 0x02,
	0x0340, 0x038F, 0x02,
	0x0202, 0x0200, 0x02,
	0x0200, 0x0618, 0x02,
	0x021E, 0x0300, 0x02,
	0x021C, 0x0000, 0x02,
	0x0900, 0x0144, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0007, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0007, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x3604, 0x0002, 0x02,
	0x3606, 0x0103, 0x02,
	0x0216, 0x0000, 0x02,
	0x3000, 0x0000, 0x02,
	0x1006, 0x0003, 0x02,
	0xF440, 0x00AF, 0x02,
	0x3664, 0x0011, 0x02,
	0x3058, 0x0000, 0x02,
	0x317A, 0x0007, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x162C, 0x02,
	0x6F12, 0x8080, 0x02,
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_4624x3466_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x0E3B, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_4624x2602_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x0E3B, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_2312x1732_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x071E, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_2312x1732_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x0E3B, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_2312x1732_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x1C76, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_2312x1300_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x071E, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_2312x1300_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x0E3B, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_1152x864_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x038F, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};

const struct sensor_pll_info sensor_3p8_pllinfo_A_1152x648_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x03, /* vt_pix_clk_div	(0x0300) */
	0x01, /* vt_sys_clk_div	(0x0302) */
	0x07, /* pre_pll_clk_div(0x0304) */
	0x71, /* pll_multiplier	(0x0306) */
	0x08, /* op_pix_clk_div	(0x0308) */
	0x01, /* op_sys_clk_div	(0x030A) */

	0x04, /* secnd_pre_pll_clk_div(0x030C) */
	0x70, /* secnd_pll_multiplier	(0x030E) */
	0x038F, /* frame_length_lines	(0x0340) */
	0x1400, /* line_length_pck		(0x0342) */
};


static const u32 *sensor_3p8_setfiles_A[] = {
	/* 16x12 margin */
	sensor_3p8_setfile_A_4624x3466_30fps,
	sensor_3p8_setfile_A_4624x2602_30fps,
	sensor_3p8_setfile_A_2312x1732_60fps,
	sensor_3p8_setfile_A_2312x1732_30fps,
	sensor_3p8_setfile_A_2312x1732_15fps,
	sensor_3p8_setfile_A_2312x1300_60fps,
	sensor_3p8_setfile_A_2312x1300_30fps,
	sensor_3p8_setfile_A_1152x864_120fps,
	sensor_3p8_setfile_A_1152x648_120fps,
};

static const u32 sensor_3p8_setfile_A_sizes[] = {
	/* 16x12 margin */
	sizeof(sensor_3p8_setfile_A_4624x3466_30fps) / sizeof(sensor_3p8_setfile_A_4624x3466_30fps[0]),
	sizeof(sensor_3p8_setfile_A_4624x2602_30fps) / sizeof(sensor_3p8_setfile_A_4624x2602_30fps[0]),
	sizeof(sensor_3p8_setfile_A_2312x1732_60fps) / sizeof(sensor_3p8_setfile_A_2312x1732_60fps[0]),
	sizeof(sensor_3p8_setfile_A_2312x1732_30fps) / sizeof(sensor_3p8_setfile_A_2312x1732_30fps[0]),
	sizeof(sensor_3p8_setfile_A_2312x1732_15fps) / sizeof(sensor_3p8_setfile_A_2312x1732_15fps[0]),
	sizeof(sensor_3p8_setfile_A_2312x1300_60fps) / sizeof(sensor_3p8_setfile_A_2312x1300_60fps[0]),
	sizeof(sensor_3p8_setfile_A_2312x1300_30fps) / sizeof(sensor_3p8_setfile_A_2312x1300_30fps[0]),
	sizeof(sensor_3p8_setfile_A_1152x864_120fps) / sizeof(sensor_3p8_setfile_A_1152x864_120fps[0]),
	sizeof(sensor_3p8_setfile_A_1152x648_120fps) / sizeof(sensor_3p8_setfile_A_1152x648_120fps[0]),
};

static const struct sensor_pll_info *sensor_3p8_pllinfos_A[] = {
	/* 16x12 margin */
	&sensor_3p8_pllinfo_A_4624x3466_30fps,
	&sensor_3p8_pllinfo_A_4624x2602_30fps,
	&sensor_3p8_pllinfo_A_2312x1732_60fps,
	&sensor_3p8_pllinfo_A_2312x1732_30fps,
	&sensor_3p8_pllinfo_A_2312x1732_15fps,
	&sensor_3p8_pllinfo_A_2312x1300_60fps,
	&sensor_3p8_pllinfo_A_2312x1300_30fps,
	&sensor_3p8_pllinfo_A_1152x864_120fps,
	&sensor_3p8_pllinfo_A_1152x648_120fps,
};

#endif
