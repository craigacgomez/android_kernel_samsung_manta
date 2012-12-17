/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 *
 * EXYNOS5250 - Adaptive Support Voltage Header file
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/cpufreq.h>

#ifndef __ASM_ARCH_EXYNOS5250_ASV_H
#define __ASM_ARCH_EXYNOS5250_ASV_H __FILE__

#define ARM_DVFS_LEVEL_NR		FREQ_STEPS
#define ARM_ASV_GRP_NR			12
#define INT_DVFS_LEVEL_NR		5
#define INT_ASV_GRP_NR			12
#define MIF_DVFS_LEVEL_NR		8
#define MIF_ASV_GRP_NR			4
#define G3D_DVFS_LEVEL_NR		FREQ_STEPS_GPU
#define G3D_ASV_GRP_NR			12

#define MAX_ASV_GRP_NR			12

static unsigned int arm_refer_table_get_asv[2][MAX_ASV_GRP_NR] = {
	{ 7, 9, 10, 11, 13, 15, 17, 21, 25, 32, 39, 999},
	{ 6, 8,  9, 10, 12, 13, 14, 16, 17, 19, 20, 999},
};

static unsigned int arm_asv_volt_info[ARM_DVFS_LEVEL_NR][MAX_ASV_GRP_NR + 1] = {
	{ 2100000, 1400000, 1275000, 1275000, 1262500, 1250000, 1225000, 1212500, 1200000, 1187500, 1175000, 1150000, 1125000},
	{ 2000000, 1375000, 1275000, 1275000, 1262500, 1250000, 1225000, 1212500, 1200000, 1187500, 1175000, 1150000, 1125000},
	{ 1900000, 1350000, 1275000, 1275000, 1262500, 1250000, 1225000, 1212500, 1200000, 1187500, 1175000, 1150000, 1125000},
	{ 1800000, 1325000, 1275000, 1275000, 1262500, 1250000, 1225000, 1212500, 1200000, 1187500, 1175000, 1150000, 1125000},
	{ 1700000, 1300000, 1275000, 1275000, 1262500, 1250000, 1225000, 1212500, 1200000, 1187500, 1175000, 1150000, 1125000},
	{ 1600000, 1250000, 1225000, 1225000, 1212500, 1200000, 1187500, 1175000, 1162500, 1150000, 1137500, 1112500, 1100000},
	{ 1500000, 1225000, 1187500, 1175000, 1162500, 1150000, 1137500, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500},
	{ 1400000, 1200000, 1125000, 1125000, 1125000, 1112500, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000},
	{ 1300000, 1150000, 1100000, 1100000, 1100000, 1087500, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000},
	{ 1200000, 1125000, 1075000, 1075000, 1062500, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  975000},
	{ 1100000, 1100000, 1050000, 1050000, 1037500, 1025000, 1012500, 1000000,  987500,  975000,  962500,  950000,  925000},
	{ 1000000, 1075000, 1037500, 1037500, 1012500, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500},
	{  900000, 1050000, 1025000, 1012500,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  912500,  900000},
	{  800000, 1025000, 1000000,  987500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000},
	{  700000, 1012500,  975000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000},
	{  600000, 1000000,  962500,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000},
	{  500000,  975000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  887500},
	{  400000,  950000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  887500},
	{  300000,  937500,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  887500,  875000},
	{  200000,  925000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  887500,  875000,  875000},
	{  100000,  900000,  912500,  900000,  900000,  900000,  900000,  900000,  900000,  887500,  887500,  875000,  875000},
};

static unsigned int int_refer_table_get_asv[2][MAX_ASV_GRP_NR] = {
	{ 7, 9, 10, 11, 13, 15, 17, 21, 25, 32, 39, 999},
	{ 6, 8,  9, 10, 12, 13, 14, 16, 17, 19, 20, 999},
};

static unsigned int int_asv_volt_info[INT_DVFS_LEVEL_NR][MAX_ASV_GRP_NR + 1] = {
	{ 266000, 1037500, 1025000, 1025000, 1012500, 1000000, 987500, 975000, 962500, 962500, 950000, 950000, 937500},
	{ 200000, 1000000,  975000,  987500,  975000,  962500, 950000, 937500, 925000, 925000, 912500, 912500, 900000},
	{ 160000,  975000,  962500,  975000,  962500,  950000, 937500, 925000, 912500, 912500, 900000, 900000, 900000},
	{ 133000,  950000,  937500,  950000,  937500,  925000, 912500, 900000, 900000, 900000, 900000, 900000, 887500},
	{ 100000,  925000,  912500,  925000,  912500,  900000, 900000, 900000, 900000, 900000, 887500, 887500, 875000},
};

static unsigned int mif_refer_table_get_asv[2][MAX_ASV_GRP_NR] = {
	{ 0,  12,  15, 999, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 100, 112, 999, 0, 0, 0, 0, 0, 0, 0, 0},
};

static unsigned int mif_asv_volt_info[MIF_DVFS_LEVEL_NR][MAX_ASV_GRP_NR + 1] = {
	{ 800000, 1125000, 1062500, 1037500, 987500, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 733000, 1075000, 1012500,  987500, 937500, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 667000, 1025000,  962500,  937500, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 533000, 1025000,  962500,  937500, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 400000, 1012500,  950000,  925000, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 267000, 1000000,  937500,  912500, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 160000,  975000,  912500,  900000, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 100000,  962500,  900000,  900000, 900000, 0, 0, 0, 0, 0, 0, 0, 0},
};

static unsigned int g3d_refer_table_get_asv[2][MAX_ASV_GRP_NR] = {
	{ 7, 9, 10, 11, 13, 15, 17, 21, 25, 32, 39, 999},
	{ 6, 8,  9, 10, 12, 13, 14, 16, 17, 19, 20, 999},
};

static unsigned int g3d_asv_volt_info[G3D_DVFS_LEVEL_NR][MAX_ASV_GRP_NR + 1] = {
	{ 612000, 1250000, 1187500, 1187500, 1187500, 1175000, 1150000, 1137500, 1125000, 1125000, 1125000, 1112500, 1112500},
	{ 533000, 1200000, 1187500, 1187500, 1187500, 1175000, 1150000, 1137500, 1125000, 1125000, 1125000, 1112500, 1112500},
	{ 450000, 1150000, 1137500, 1125000, 1125000, 1112500, 1100000, 1087500, 1075000, 1075000, 1050000, 1050000, 1050000},
	{ 400000, 1125000, 1087500, 1075000, 1075000, 1075000, 1050000, 1037500, 1025000, 1012500, 1012500, 1000000, 1000000},
	{ 350000, 1075000, 1037500, 1037500, 1037500, 1025000, 1000000,  987500,  987500,  987500,  975000,  962500,  962500},
	{ 266000, 1025000, 1000000,  950000,  950000,  937500,  937500,  925000,  912500,  912500,  900000,  900000,  900000},
	{ 160000,  925000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000},
	{ 100000,  925000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  900000,  875000,  875000},
};

#endif /* EXYNOS5250_ASV_H */
