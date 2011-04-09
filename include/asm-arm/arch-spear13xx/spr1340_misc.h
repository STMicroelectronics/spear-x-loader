/*
 * (C) Copyright 2000-2009
 * Vipul Kumar Samar, ST Microelectronics, vipulkumar.samar@st.com
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __SPR1340_MISC_H
#define __SPR1340_MISC_H

struct misc_regs {
	u32 soc_cfg;				/* 0x000 */
	u32 bootstrap_cfg;			/* 0x004 */
	u8  reserved_1[0x100 - 0x8];
	u32 pcm_cfg;				/* 0x100 */
	u32 pcm_wkup_cfg;			/* 0x104 */
	u32 switch_ctr;				/* 0x108 */
	u8  reserved_2[0x200 - 0x10c];
	u32 sys_clk_ctrl;			/* 0x200 */
	u32 sys_sw_res;				/* 0x204 */
	u32 sys_clk_plltimer;			/* 0x208 */
	u32 sys_clk_oscitimer;			/* 0x20c */
	u32 pll_cfg;				/* 0x210 */
	u32 pll1_ctr;				/* 0x214 */
	u32 pll1_frq;				/* 0x218 */
	u32 pll1_mod;				/* 0x21c */
	u32 pll2_ctr;				/* 0x220 */
	u32 pll2_frq;				/* 0x224 */
	u32 pll2_mod;				/* 0x228 */
	u32 pll3_ctr;				/* 0x22c */
	u32 pll3_frq;				/* 0x230 */
	u32 pll3_mod;				/* 0x234 */
	u32 pll4_ctr;				/* 0x238 */
	u32 pll4_frq;				/* 0x23C */
	u32 pll4_mod;				/* 0x240 */
	u32 perip_clk_cfg;			/* 0x244 */
	u32 gmac_clk_cfg;			/* 0x248 */
	u32 i2s_clk_cfg;			/* 0x24c */
	u32 c3_clk_synt;			/* 0x250 */
	u32 uart1_clk_synt;			/* 0x254 */
	u32 uart2_clk_synt;			/* 0x258 */
	u32 gmac_clk_synt;			/* 0x25c */
	u32 mcif_sd_clk_synt;			/* 0x260 */
	u32 mcif_cfxd_clk_synt;			/* 0x264 */
	u32 cec1_clk_synt;			/* 0x268 */
	u32 cec2_clk_synt;			/* 0x26c */
	u32 adc_clk_synt;			/* 0x270 */
	u32 amba_clk_sscg;			/* 0x274 */
	u32 amba_clk_sscg_mod;			/* 0x278 */
	u32 clcd_clk_sscg;			/* 0x27c */
	u32 clcd_clk_sscg_mod;			/* 0x280 */
	u32 cpu_clk_sscg;			/* 0x284 */
	u32 cpu_clk_sscg_mod;			/* 0x288 */
	u32 gen_clk_sscg0;			/* 0x28C */
	u32 gen_clk_sscg0_mod;			/* 0x290 */
	u32 gen_clk_sscg1;			/* 0x294 */
	u32 gen_clk_sscg1_mod;			/* 0x298 */
	u32 gen_clk_sscg2;			/* 0x29c */
	u8  reserved_3[0x300 - 0x2A0];
	u32 gen_clk_sscg2_mod;			/* 0x300 */
	u32 gen_clk_sscg3;			/* 0x304 */
	u32 gen_clk_sscg3_mod;			/* 0x308 */
	u32 perip1_clk_enb;			/* 0x30c */
	u32 perip2_clk_enb;			/* 0x310 */
	u32 perip3_clk_enb;			/* 0x314 */
	u32 perip1_sw_rst;			/* 0x318 */
	u32 perip2_sw_rst;			/* 0x31c */
	u32 perip3_sw_rst;			/* 0x320 */
	u8  reserved_4[0x400 - 0x324];
	u32 dmac_hs_sel;			/* 0x400 */
	u32 dmac_sel;				/* 0x404 */
	u32 dmac_flow_sel;			/* 0x408 */
	u32 dmac_dir_sel;			/* 0x40c */
	u32 endianess_cfg;			/* 0x410 */
	u32 usbphy_gen_cfg;			/* 0x414 */
	u32 usbphy_p1_cfg;			/* 0x418 */
	u32 usbphy_p2_cfg;			/* 0x41c */
	u32 usbphy_p3_cfg;			/* 0x420 */
	u32 pcie_sata_cfg;			/* 0x424 */
	u32 pcie_miphy_cfg;			/* 0x428 */
	u32 perip_cfg;				/* 0x42c */
	u32 fsmc_cfg;				/* 0x430 */
	u32 mpmc_cfg;				/* 0x434 */
	u32 mpmc_ctr_sts;			/* 0x438 */
	u32 sata_core_id;			/* 0x43c */
	u32 mali_gen_purpose_1;			/* 0x440 */
	u32 mali_gen_purpose_2;			/* 0x444 */
	u8  reserved_5[0x500 - 0x448];
	u32 prc1_lock_ctr;			/* 0x500 */
	u32 prc2_lock_ctr;			/* 0x504 */
	u32 prc1_irq_ctr;			/* 0x508 */
	u8  reserved_6[0x51c - 0x50c];
	u32 prc2_irq_ctr;			/* 0x51c */
	u8  reserved_7[0x600 - 0x520];
	u32 pad_pu_cfg_1;			/* 0x600 */
	u32 pad_pu_cfg_2;			/* 0x604 */
	u32 pad_pu_cfg_3;			/* 0x608 */
	u32 pad_pu_cfg_4;			/* 0x60c */
	u32 pad_pu_cfg_5;			/* 0x610 */
	u32 pad_pu_cfg_6;			/* 0x614 */
	u32 pad_pu_cfg_7;			/* 0x618 */
	u32 pad_pu_cfg_8;			/* 0x61c */
	u32 pad_pd_cfg_1;			/* 0x620 */
	u32 pad_pd_cfg_2;			/* 0x624 */
	u32 pad_pd_cfg_3;			/* 0x628 */
	u32 pad_pd_cfg_4;			/* 0x62c */
	u32 pad_pd_cfg_5;			/* 0x630 */
	u32 pad_pd_cfg_6;			/* 0x634 */
	u32 pad_pd_cfg_7;			/* 0x638 */
	u32 pad_pd_cfg_8;			/* 0x63c */
	u8  reserved_8[0x648 - 0x640];
	u32 pad_drv_cfg_1;			/* 0x648 */
	u32 pad_drv_cfg_2;			/* 0x64c */
	u32 pad_drv_cfg_3;			/* 0x650 */
	u32 pad_drv_cfg_4;			/* 0x654 */
	u32 pad_drv_cfg_5;			/* 0x658 */
	u32 pad_slew_cfg_1;			/* 0x65c */
	u32 pad_slew_cfg_2;			/* 0x660 */
	u32 pad_slew_cfg_3;			/* 0x664 */
	u32 pad_function_en_1;			/* 0x668 */
	u32 pad_function_en_2;			/* 0x66c */
	u32 pad_function_en_3;			/* 0x670 */
	u32 pad_function_en_4;			/* 0x674 */
	u8  reserved_9[0x690 - 0x678];
	u32 pad_function_en_5;			/* 0x690 */
	u32 pad_function_en_6;			/* 0x694 */
	u32 pad_function_en_7;			/* 0x698 */
	u32 pad_function_en_8;			/* 0x69c */
	u32 pad_shared_ip_en_1;			/* 0x6A0 */
	u32 pad_shared_ip_en_2;			/* 0x6A4 */
	u32 ddr_pad_cfg;			/* 0x6A8 */
	u8  reserved_10[0x700 - 0x6Ac];
	u32 compensation_1v8_3v3_1_cfg;		/* 0x700 */
	u32 compensation_1v8_3v3_2_cfg;		/* 0x704 */
	u32 compensation_3v3_1_cfg;		/* 0x708 */
	u32 compensation_3v3_2_cfg;		/* 0x70c */
	u32 compensation_ddr_cfg;		/* 0x710 */
	u32 compensation_2v5_3v3_1_cfg;		/* 0x714 */
	u8  reserved_11[0x800 - 0x718];
	u32 otp_prog_ctr;			/* 0x800 */
	u32 otp_wdata1_1;			/* 0x804 */
	u32 otp_wdata1_2;			/* 0x808 */
	u32 otp_wdata1_3;			/* 0x80c */
	u32 otp_wdata1_4;			/* 0x810 */
	u32 otp_wdata1_5;			/* 0x814 */
	u32 otp_wdata1_6;			/* 0x818 */
	u32 otp_wdata1_7;			/* 0x81c */
	u32 otp_wdata1_8;			/* 0x820 */
	u32 otp_wdata2_1;			/* 0x824 */
	u32 otp_wdata2_2;			/* 0x828 */
	u32 otp_wdata2_3;			/* 0x82c */
	u32 otp_wdata2_4;			/* 0x830 */
	u32 otp_wdata2_5;			/* 0x834 */
	u32 otp_wdata2_6;			/* 0x838 */
	u32 otp_wdata2_7;			/* 0x83c */
	u32 otp_wdata2_8;			/* 0x840 */
	u32 otp_mask_1;				/* 0x844 */
	u32 otp_mask_2;				/* 0x848 */
	u32 otp_mask_3;				/* 0x84c */
	u32 otp_mask_4;				/* 0x850 */
	u32 otp_mask_5;				/* 0x854 */
	u32 otp_mask_6;				/* 0x858 */
	u32 otp_mask_7;				/* 0x85c */
	u32 otp_mask_8;				/* 0x860 */
	u32 otp_rdata1_1;			/* 0x864 */
	u32 otp_rdata1_2;			/* 0x868 */
	u32 otp_rdata1_3;			/* 0x86c */
	u32 otp_rdata1_4;			/* 0x870 */
	u32 otp_rdata1_5;			/* 0x874 */
	u32 otp_rdata1_6;			/* 0x878 */
	u32 otp_rdata1_7;			/* 0x87c */
	u32 otp_rdata1_8;			/* 0x880 */
	u32 otp_rdata2_1;			/* 0x884 */
	u32 otp_rdata2_2;			/* 0x888 */
	u32 otp_rdata2_3;			/* 0x88c */
	u32 otp_rdata2_4;			/* 0x890 */
	u32 otp_rdata2_5;			/* 0x894 */
	u32 otp_rdata2_6;			/* 0x898 */
	u32 otp_rdata2_7;			/* 0x89c */
	u32 otp_rdata2_8;			/* 0x8a0 */
	u32 otp_rdatam_1;			/* 0x8a4 */
	u32 otp_rdatam_2;			/* 0x8a8 */
	u32 otp_rdatam_3;			/* 0x8ac */
	u32 otp_rdatam_4;			/* 0x8b0 */
	u32 otp_rdatam_5;			/* 0x8b4 */
	u32 otp_rdatam_6;			/* 0x8b8 */
	u32 otp_rdatam_7;			/* 0x8bc */
	u32 otp_rdatam_8;			/* 0x8c0 */
	u32 thsens_cfg;				/* 0x8c4 */
	u8  reserved_12[0x900 - 0x8c8];
	u32 a9sm_clusterid;			/* 0x900 */
	u32 a9sm_statusl;			/* 0x904 */
	u32 a9sm_debug;				/* 0x908 */
	u32 a9sm_filter;			/* 0x90c */
	u32 a9sm_parity_cfg;			/* 0x910 */
	u32 a9sm_parity_err;			/* 0x914 */
	u8  reserved_13[0xa00 - 0x918];
	u32 die_id_1;				/* 0xa00 */
	u32 die_id_2;				/* 0xa04 */
	u32 die_id_3;				/* 0xa08 */
	u32 die_id_4;				/* 0xa0c */
	u8  reserved_14[0xc00 - 0xa10];
	u32 axi_cache_user_ctrl_0;		/* 0xc00 */
	u32 axi_cache_user_ctrl_1;		/* 0xc04 */
	u32 axi_cache_user_ctrl_2;		/* 0xc08 */
	u32 axi_cache_user_ctrl_3;		/* 0xc0c */
	u32 ahb_cache_user_ctrl_0;		/* 0xc10 */
	u32 ahb_cache_user_ctrl_1;		/* 0xc14 */
	u32 ahb_cache_user_ctrl_2;		/* 0xc18 */
	u32 ahb_cache_user_ctrl_3;		/* 0xc1c */
	u32 ahb_cache_user_ctrl_4;		/* 0xc20 */
	u32 ahb_cache_user_ctrl_5;		/* 0xc24 */
	u32 ahb_cache_user_ctrl_6;		/* 0xc28 */
	u32 ahb_cache_user_ctrl_7;		/* 0xc2c */
	u8  reserved_15[0x1000 - 0xc30];
	u32 miphy_test;				/* 0x1000 */
	u32 usb_test;				/* 0x1004 */
	u32 misc_cfg;				/* 0x1008 */
};

/* sys_clk_ctrl definitions */
#define SYS_MODE_MASK				(7 << 0)
#define SYS_MODE_REQ_DOZE			(1 << 0)
#define SYS_MODE_REQ_SLOW			(2 << 0)
#define SYS_MODE_REQ_NORMAL			(4 << 0)
#define PLL_TIMEOUT_ENB				(1 << 3)
#define XTAL_TIMEOUT_ENB			(1 << 4)
#define SYS_STATE_MASK				(0xF << 16)
#define SYS_STATE_NORMAL			(0xF << 16)

/* sys_clk_*timer definitions */
#define PLL_TIM					(0xff << 3)
#define OSCI_TIM				(0xff << 3)

/* pll_freq definitions in MHz */
#define FREQ_1000				(0x7D000006)
#define FREQ_996				(0x53000004)
#define FREQ_533				(0x6F000105)
#define FREQ_400				(0x64000203)
#define FREQ_332				(0x53000203)
#define FREQ_250				(0x7D000303)
#define FREQ_125				(0x7D000403)

/* pll_ctr definitions */
#define PLLLOCK					(1 << 0)
#define PLLENABLE				(1 << 2)

/* perip_clk_cfg definitions */
#define MPMC_CLK_PLL4				(1 << 10)

/* perip*_[clk_enb/sw_rst] definitions */
#define DDR_CTRL_CLKEN				(1 << 0)
#define DDR_CORE_CLKEN				(1 << 1)
#define UART_CLKEN				(1 << 15)

#define PERIPH1_CLK_ALL				(0xFFFFFFFF)
#define PERIPH2_CLK_ALL				(0xFFFFFFFF)
#define PERIPH3_CLK_ALL				(0xFFFFFFFF)
#define PERIPH1_RST_ALL				(0x00000000)
#define PERIPH2_RST_ALL				(0x00000000)
#define PERIPH3_RST_ALL				(0x00000000)

/* ddr_pad_cfg definitions */
#define DDR3_SW_SEL				(1 << 0)
#define DDR3_PAD_SEL				(1 << 1)
#define DDR3_PAD_SW_SEL				(1 << 2)
#define CTRL_PROGA				(1 << 3)
#define CTRL_PROGB				(1 << 4)
#define CLK_PROGA				(1 << 5)
#define CLK_PROGB				(1 << 6)
#define DATA_PROGA				(1 << 7)
#define DATA_PROGB				(1 << 8)
#define PAD_VREF				(1 << 9)

/* usbphy_gen_cfg definitions */
#define COMMON_PWDN				(1 << 0)
#define AUTOPPD_ON_OVRCURR			(1 << 5)
#define USBPHY_POR				(1 << 12)
#define USBPHY_RST				(1 << 13)
#define UTMI_XFER_RST0				(1 << 14)
#define UTMI_XFER_RST1				(1 << 15)
#define UTMI_XFER_RST2				(1 << 16)
#define USB_PLL_LOCK				(1 << 24)

#endif
