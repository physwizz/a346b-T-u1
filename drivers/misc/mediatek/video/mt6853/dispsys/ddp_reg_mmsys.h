// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2019 MediaTek Inc.
 */


#ifndef _DDP_REG_MMSYS_H_
#define _DDP_REG_MMSYS_H_

/* field definition */
/* ------------------------------------------------------------- */
/* Config */
#define DISP_REG_CONFIG_MMSYS_INTEN \
	(DISPSYS_CONFIG_BASE + 0x000)
#define DISP_REG_CONFIG_MMSYS_INTSTA \
	(DISPSYS_CONFIG_BASE + 0x004)
#define DISP_REG_CONFIG_MDP_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x00C)
#define DISP_REG_CONFIG_IMG_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x010)
#define DISP_REG_CONFIG_CAM_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x014)
#define DISP_REG_CONFIG_IPU_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x018)
#define DISP_REG_CONFIG_VDEC_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x020)
#define DISP_REG_CONFIG_VENC_APB_TX_CON \
	(DISPSYS_CONFIG_BASE + 0x024)
#define DISP_REG_CONFIG_MMSYS_HRT_WEIGHTING_OVL0 \
	(DISPSYS_CONFIG_BASE + 0x028)
#define DISP_REG_CONFIG_MMSYS_HRT_WEIGHTING_OVL0_2L \
	(DISPSYS_CONFIG_BASE + 0x02C)
#define DISP_REG_CONFIG_MMSYS_HRT_WEIGHTING_OTHERS \
	(DISPSYS_CONFIG_BASE + 0x034)
#define DISP_REG_CONFIG_MMSYS_HRT_WEIGHTING_CTRL \
	(DISPSYS_CONFIG_BASE + 0x038)
#define DISP_REG_CONFIG_MMSYS_MISC \
	(DISPSYS_CONFIG_BASE + 0x0F0)
#define DISP_REG_CONFIG_MMSYS_SODI_REQ_MASK \
	(DISPSYS_CONFIG_BASE + 0x0F4)
#define MMSYS_SODI_REQ_MASK_FLD_SODI_REQ_SEL REG_FLD_MSB_LSB(11, 8)
#define MMSYS_SODI_REQ_MASK_FLD_SODI_REQ_VAL REG_FLD_MSB_LSB(15, 12)

#define DISP_REG_CONFIG_MMSYS_EMI_REQ_CTL \
	(DISPSYS_CONFIG_BASE + 0x0F8)
#define MMSYS_EMI_REQ_CTL_FLD_HRT_URGENT_CTL REG_FLD_MSB_LSB(7, 0)

#define DISP_REG_CONFIG_MMSYS_RPT \
	(DISPSYS_CONFIG_BASE + 0x0FC)
#define DISP_REG_CONFIG_MMSYS_CG_CON0 \
	(DISPSYS_CONFIG_BASE + 0x100)
#define DISP_REG_CONFIG_MMSYS_CG_SET0 \
	(DISPSYS_CONFIG_BASE + 0x104)
#define DISP_REG_CONFIG_MMSYS_CG_CLR0 \
	(DISPSYS_CONFIG_BASE + 0x108)
#define MMSYS_CG_FLD_FAKE_ENG REG_FLD_MSB_LSB(20, 20)

#define DISP_REG_CONFIG_MMSYS_CG_CON1 \
	(DISPSYS_CONFIG_BASE + 0x110)
#define DISP_REG_CONFIG_MMSYS_CG_SET1 \
	(DISPSYS_CONFIG_BASE + 0x114)
#define DISP_REG_CONFIG_MMSYS_CG_CLR1 \
	(DISPSYS_CONFIG_BASE + 0x118)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS0 \
	(DISPSYS_CONFIG_BASE + 0x120)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_SET0 \
	(DISPSYS_CONFIG_BASE + 0x124)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_CLR0 \
	(DISPSYS_CONFIG_BASE + 0x128)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS1 \
	(DISPSYS_CONFIG_BASE + 0x130)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_SET1 \
	(DISPSYS_CONFIG_BASE + 0x134)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_CLR1 \
	(DISPSYS_CONFIG_BASE + 0x138)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS0 \
	(DISPSYS_CONFIG_BASE + 0x140)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_SET0 \
	(DISPSYS_CONFIG_BASE + 0x144)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_CLR0 \
	(DISPSYS_CONFIG_BASE + 0x148)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS1 \
	(DISPSYS_CONFIG_BASE + 0x150)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_SET1 \
	(DISPSYS_CONFIG_BASE + 0x154)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_CLR1 \
	(DISPSYS_CONFIG_BASE + 0x158)
#define DISP_REG_CONFIG_MMSYS_SW0_RST_B \
	(DISPSYS_CONFIG_BASE + 0x160)
#define DISP_REG_CONFIG_MMSYS_SW1_RST_B \
	(DISPSYS_CONFIG_BASE + 0x164)
#define DISP_REG_CONFIG_MMSYS_SW2_RST_B \
	(DISPSYS_CONFIG_BASE + 0x168)
#define DISP_REG_CONFIG_MMSYS_LCM_RST_B \
	(DISPSYS_CONFIG_BASE + 0x180)
#define DISP_REG_CONFIG_MMSYS_PROC_TRACK_EMI_BUSY_CON \
	(DISPSYS_CONFIG_BASE + 0x190)
#define DISP_REG_CONFIG_MMSYS_CG_CON2 \
	(DISPSYS_CONFIG_BASE + 0x1A0)
#define DISP_REG_CONFIG_MMSYS_CG_SET2 \
	(DISPSYS_CONFIG_BASE + 0x1A4)
#define DISP_REG_CONFIG_MMSYS_CG_CLR2 \
	(DISPSYS_CONFIG_BASE + 0x1A8)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS2 \
	(DISPSYS_CONFIG_BASE + 0x1B0)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_SET2 \
	(DISPSYS_CONFIG_BASE + 0x1B4)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_1ST_DIS_CLR2 \
	(DISPSYS_CONFIG_BASE + 0x1B8)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS2 \
	(DISPSYS_CONFIG_BASE + 0x1C0)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_SET2 \
	(DISPSYS_CONFIG_BASE + 0x1C4)
#define DISP_REG_CONFIG_MMSYS_HW_DCM_2ND_DIS_CLR2 \
	(DISPSYS_CONFIG_BASE + 0x1C8)
#define DISP_REG_CONFIG_SPM_DRAM_ACCESS_CG_MASK0 \
	(DISPSYS_CONFIG_BASE + 0x1D0)
#define DISP_REG_CONFIG_SPM_DRAM_ACCESS_CG_MASK1 \
	(DISPSYS_CONFIG_BASE + 0x1D4)
#define DISP_REG_CONFIG_SPM_DRAM_ACCESS_CG_MASK2 \
	(DISPSYS_CONFIG_BASE + 0x1D8)
#define DISP_REG_CONFIG_SPM_MAIN_PLL_CG_MASK0 \
	(DISPSYS_CONFIG_BASE + 0x1E0)
#define DISP_REG_CONFIG_SPM_MAIN_PLL_CG_MASK1 \
	(DISPSYS_CONFIG_BASE + 0x1E4)
#define DISP_REG_CONFIG_SPM_MAIN_PLL_CG_MASK2 \
	(DISPSYS_CONFIG_BASE + 0x1E8)

#define DISP_REG_CONFIG_DISP_FAKE_ENG0_EN \
	(DISPSYS_CONFIG_BASE + 0x200)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_RST \
	(DISPSYS_CONFIG_BASE + 0x204)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_CON0 \
	(DISPSYS_CONFIG_BASE + 0x208)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_CON1 \
	(DISPSYS_CONFIG_BASE + 0x20C)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_RD_ADDR \
	(DISPSYS_CONFIG_BASE + 0x210)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_WR_ADDR \
	(DISPSYS_CONFIG_BASE + 0x214)
#define DISP_REG_CONFIG_DISP_FAKE_ENG0_STATE \
	(DISPSYS_CONFIG_BASE + 0x218)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_EN \
	(DISPSYS_CONFIG_BASE + 0x220)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_RST \
	(DISPSYS_CONFIG_BASE + 0x224)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_CON0 \
	(DISPSYS_CONFIG_BASE + 0x228)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_CON1 \
	(DISPSYS_CONFIG_BASE + 0x22C)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_RD_ADDR \
	(DISPSYS_CONFIG_BASE + 0x230)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_WR_ADDR \
	(DISPSYS_CONFIG_BASE + 0x234)
#define DISP_REG_CONFIG_DISP_FAKE_ENG1_STATE \
	(DISPSYS_CONFIG_BASE + 0x238)

#define DISP_REG_CONFIG_DISP_Y2R0_EN \
	(DISPSYS_CONFIG_BASE + 0x250)
#define DISP_REG_CONFIG_DISP_Y2R0_RST \
	(DISPSYS_CONFIG_BASE + 0x254)
#define DISP_REG_CONFIG_DISP_Y2R0_CON0 \
	(DISPSYS_CONFIG_BASE + 0x258)
#define DISP_REG_CONFIG_MMSYS_DEBUG_OUT_SEL \
	(DISPSYS_CONFIG_BASE + 0x300)
#define DISP_REG_CONFIG_MMSYS_DUMMY0 \
	(DISPSYS_CONFIG_BASE + 0x400)
#define DISP_REG_CONFIG_MMSYS_DUMMY1 \
	(DISPSYS_CONFIG_BASE + 0x404)
#define DISP_REG_CONFIG_MMSYS_DUMMY2 \
	(DISPSYS_CONFIG_BASE + 0x408)
#define DISP_REG_CONFIG_MMSYS_DUMMY3 \
	(DISPSYS_CONFIG_BASE + 0x40C)
#define DISP_REG_CONFIG_DISP_SMI_IOMMU_CON \
	(DISPSYS_CONFIG_BASE + 0x500)
#define DISP_REG_CONFIG_DISP_GALS_BIST_EN \
	(DISPSYS_CONFIG_BASE + 0x510)
#define DISP_REG_CONFIG_DISP_GALS_BIST_STATUS \
	(DISPSYS_CONFIG_BASE + 0x514)
#define DISP_REG_CONFIG_DISP_GALS_DBG_0 \
	(DISPSYS_CONFIG_BASE + 0x520)
#define DISP_REG_CONFIG_DISP_GALS_DBG_1 \
	(DISPSYS_CONFIG_BASE + 0x524)
#define DISP_REG_CONFIG_DISP_GALS_DBG_2 \
	(DISPSYS_CONFIG_BASE + 0x528)
#define DISP_REG_CONFIG_DISP_GALS_DBG_3 \
	(DISPSYS_CONFIG_BASE + 0x52C)
#define DISP_REG_CONFIG_DISP_GALS_DBG_4 \
	(DISPSYS_CONFIG_BASE + 0x530)
#define DISP_REG_CONFIG_DISP_GALS_DBG_5 \
	(DISPSYS_CONFIG_BASE + 0x534)
#define DISP_REG_CONFIG_DISP_GALS_DBG_6 \
	(DISPSYS_CONFIG_BASE + 0x538)
#define DISP_REG_CONFIG_DISP_GALS_DBG_7 \
	(DISPSYS_CONFIG_BASE + 0x53C)
#define DISP_REG_CONFIG_DISP_GALS_DBG_8 \
	(DISPSYS_CONFIG_BASE + 0x540)
#define DISP_REG_CONFIG_DISP_GALS_DBG_9 \
	(DISPSYS_CONFIG_BASE + 0x544)
#define DISP_REG_CONFIG_DISP_GALS_DBG_10 \
	(DISPSYS_CONFIG_BASE + 0x548)
#define DISP_REG_CONFIG_DISP_GALS_DBG_11 \
	(DISPSYS_CONFIG_BASE + 0x54C)
#define DISP_REG_CONFIG_DISP_GALS_DBG_12 \
	(DISPSYS_CONFIG_BASE + 0x550)
#define DISP_REG_CONFIG_DISP_GALS_DBG_13 \
	(DISPSYS_CONFIG_BASE + 0x554)
#define DISP_REG_CONFIG_DISP_GALS_DBG_14 \
	(DISPSYS_CONFIG_BASE + 0x558)
#define DISP_REG_CONFIG_DISP_GALS_DBG_15 \
	(DISPSYS_CONFIG_BASE + 0x55C)
#define DISP_REG_CONFIG_MMSYS_MBIST_CON \
	(DISPSYS_CONFIG_BASE + 0x600)
#define DISP_REG_CONFIG_MMSYS_MBIST_PRE_FUSE \
	(DISPSYS_CONFIG_BASE + 0x638)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL0 \
	(DISPSYS_CONFIG_BASE + 0x640)
#define DISP_REG_CONFIG_MMSYS_MBIST_BSEL1 \
	(DISPSYS_CONFIG_BASE + 0x644)
#define DISP_REG_CONFIG_MMSYS_RDMA_SHARE_SRAM_CON \
	(DISPSYS_CONFIG_BASE + 0x654)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN0 \
	(DISPSYS_CONFIG_BASE + 0x660)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN1 \
	(DISPSYS_CONFIG_BASE + 0x664)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN2 \
	(DISPSYS_CONFIG_BASE + 0x668)
#define DISP_REG_CONFIG_MMSYS_MBIST_HDEN3 \
	(DISPSYS_CONFIG_BASE + 0x66C)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL0 \
	(DISPSYS_CONFIG_BASE + 0x680)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL1 \
	(DISPSYS_CONFIG_BASE + 0x684)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL2 \
	(DISPSYS_CONFIG_BASE + 0x688)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL3 \
	(DISPSYS_CONFIG_BASE + 0x68C)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL4 \
	(DISPSYS_CONFIG_BASE + 0x690)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL5 \
	(DISPSYS_CONFIG_BASE + 0x694)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL6 \
	(DISPSYS_CONFIG_BASE + 0x698)
#define DISP_REG_CONFIG_MMSYS_MBIST_DELSEL7 \
	(DISPSYS_CONFIG_BASE + 0x69C)
#define DISP_REG_CONFIG_MMSYS_MBIST_RP_RST_B \
	(DISPSYS_CONFIG_BASE + 0x6D0)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL \
	(DISPSYS_CONFIG_BASE + 0x6A0)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL1 \
	(DISPSYS_CONFIG_BASE + 0x6A4)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL2 \
	(DISPSYS_CONFIG_BASE + 0x6A8)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL3 \
	(DISPSYS_CONFIG_BASE + 0x6AC)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL4 \
	(DISPSYS_CONFIG_BASE + 0x6B0)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL5 \
	(DISPSYS_CONFIG_BASE + 0x6B4)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL6 \
	(DISPSYS_CONFIG_BASE + 0x6B8)
#define DISP_REG_CONFIG_MMSYS_USE_DEFAULT_DELSEL7 \
	(DISPSYS_CONFIG_BASE + 0x6BC)
#define DISP_REG_CONFIG_MMSYS_TMBIST_TEST \
	(DISPSYS_CONFIG_BASE + 0x700)
#define DISP_REG_CONFIG_MMSYS_TMBIST_PREFUSE_01 \
	(DISPSYS_CONFIG_BASE + 0x704)
#define DISP_REG_CONFIG_MMSYS_TMBIST_PREFUSE_23 \
	(DISPSYS_CONFIG_BASE + 0x708)
#define DISP_REG_CONFIG_MMSYS_TMBIST_PREFUSE_45 \
	(DISPSYS_CONFIG_BASE + 0x70C)
#define DISP_REG_CONFIG_MMSYS_TMBIST_PREFUSE_67 \
	(DISPSYS_CONFIG_BASE + 0x710)
#define DISP_REG_CONFIG_MMSYS_SMI_LARB0_GREQ \
	(DISPSYS_CONFIG_BASE + 0x8DC)
#define DISP_REG_CONFIG_MMSYS_SMI_LARB1_GREQ \
	(DISPSYS_CONFIG_BASE + 0x8E0)
#define DISP_REG_CONFIG_MMSYS_HRT_WEIGHT_READ \
	(DISPSYS_CONFIG_BASE + 0x8F0)
#define DISP_REG_CONFIG_MMSYS_PWR_METER_CTL0 \
	(DISPSYS_CONFIG_BASE + 0x900)
#define DISP_REG_CONFIG_MMSYS_PWR_METER_CTL1 \
	(DISPSYS_CONFIG_BASE + 0x904)
#define DISP_REG_CONFIG_MMSYS_BUF_UNDERRUN \
	(DISPSYS_CONFIG_BASE + 0xE00)
#define DISP_REG_CONFIG_MMSYS_BUF_UNDERRUN_ID0 \
	(DISPSYS_CONFIG_BASE + 0xE04)
#define DISP_REG_CONFIG_MMSYS_BUF_UNDERRUN_ID1 \
	(DISPSYS_CONFIG_BASE + 0xE08)
#define DISP_REG_CONFIG_MMSYS_DISP_RDMA_VDE_SEL \
	(DISPSYS_CONFIG_BASE + 0xE10)
#define DISP_REG_CONFIG_MMSYS_MOUT_MASK0 \
	(DISPSYS_CONFIG_BASE + 0xE90)
#define DISP_REG_CONFIG_MMSYS_MOUT_MASK1 \
	(DISPSYS_CONFIG_BASE + 0xE94)
#define DISP_REG_CONFIG_MMSYS_MOUT_MASK2 \
	(DISPSYS_CONFIG_BASE + 0xE98)

#define DISP_REG_CONFIG_MMSYS_DL_VALID0 \
	(DISPSYS_CONFIG_BASE + 0xE9C)
#define DISP_REG_CONFIG_MMSYS_DL_VALID1 \
	(DISPSYS_CONFIG_BASE + 0xEA0)
#define DISP_REG_CONFIG_MMSYS_DL_VALID2 \
	(DISPSYS_CONFIG_BASE + 0xEA4)
#define DISP_REG_CONFIG_MMSYS_DL_VALID3 \
	(DISPSYS_CONFIG_BASE + 0xE80)
#define DISP_REG_CONFIG_MMSYS_DL_VALID4 \
	(DISPSYS_CONFIG_BASE + 0xE84)
#define DISP_REG_CONFIG_MMSYS_DL_VALID5 \
	(DISPSYS_CONFIG_BASE + 0xE88)
#define DISP_REG_CONFIG_MMSYS_DL_READY0 \
	(DISPSYS_CONFIG_BASE + 0xEA8)
#define DISP_REG_CONFIG_MMSYS_DL_READY1 \
	(DISPSYS_CONFIG_BASE + 0xEAC)
#define DISP_REG_CONFIG_MMSYS_DL_READY2 \
	(DISPSYS_CONFIG_BASE + 0xEB0)
#define DISP_REG_CONFIG_MMSYS_DL_READY3 \
	(DISPSYS_CONFIG_BASE + 0xE70)
#define DISP_REG_CONFIG_MMSYS_DL_READY4 \
	(DISPSYS_CONFIG_BASE + 0xE74)
#define DISP_REG_CONFIG_MMSYS_DL_READY5 \
	(DISPSYS_CONFIG_BASE + 0xE78)

#define DISP_REG_CONFIG_MMSYS_MOUT_RST \
	(DISPSYS_CONFIG_BASE + 0xF00)
#define DISP_REG_CONFIG_MMSYS_OVL_CON \
	(DISPSYS_CONFIG_BASE + 0xF04)

#define FLD_CON_OVL0_2L REG_FLD(1, 2)
#define FLD_CON_OVL0 REG_FLD(1, 0)

#define DISP_RDMA0_RSZ0_SOUT_SEL	(DISPSYS_CONFIG_BASE + 0xF0C)
#define DISP_SPR0_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF10)
#define DISP_TOVL0_OUT0_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF14)
#define DISP_TOVL0_OUT1_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF18)
#define DISP_RSZ0_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF1C)
#define DISP_DITHER0_MOUT_EN		(DISPSYS_CONFIG_BASE + 0xF20)
#define DISP_RSZ0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF24)
#define DISP_RDMA0_SEL_IN		(DISPSYS_CONFIG_BASE + 0xF28)
#define DISP_BYPASS_SPR0_SEL_IN	(DISPSYS_CONFIG_BASE + 0xF2C)
#define DSI0_SEL_IN	(DISPSYS_CONFIG_BASE + 0xF30)
#define DISP_WDMA0_SEL_IN	(DISPSYS_CONFIG_BASE + 0xF34)
#define DISPSYS_VERSION	(DISPSYS_CONFIG_BASE + 0xFFC)

#define DISP_REG_CONFIG_DISP_AAL0_SEL_IN \
	(DISPSYS_CONFIG_BASE + 0xF38)
#define DISP_REG_CONFIG_DISP_DITHER0_MOUT_EN \
	(DISPSYS_CONFIG_BASE + 0xF3C)
#define DISP_REG_CONFIG_DSI0_SEL_IN \
	(DISPSYS_CONFIG_BASE + 0xF40)
#define DISP_REG_CONFIG_DISP_WDMA0_SEL_IN \
	(DISPSYS_CONFIG_BASE + 0xF44)
#define DISP_REG_CONFIG_UFBC_WDMA0_SEL_IN \
	(DISPSYS_CONFIG_BASE + 0xF48)

/* field definition */
/* ------------------------------------------------------------- */

#endif
