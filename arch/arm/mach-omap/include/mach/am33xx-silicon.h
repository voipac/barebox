/*
 * This file contains the address info for various AM33XX modules.
 *
 * Copyright (C) 2012 Teresa Gámez <t.gamez@phytec.de>,
 *		 Phytec Messtechnik GmbH
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_AM33XX_H
#define __ASM_ARCH_AM33XX_H

#include <sizes.h>

/** AM335x Internal Bus Base addresses */
#define AM33XX_L4_WKUP_BASE		0x44C00000
#define AM33XX_L4_PER_BASE		0x48000000
#define AM33XX_L4_FAST_BASE		0x4A000000

/* the device numbering is the same as in the TRM memory map (SPRUH73G) */

/* UART */
#define AM33XX_UART0_BASE		(AM33XX_L4_WKUP_BASE + 0x209000)
#define AM33XX_UART1_BASE		(AM33XX_L4_PER_BASE + 0x22000)
#define AM33XX_UART2_BASE		(AM33XX_L4_PER_BASE + 0x24000)

/* GPIO */
#define AM33XX_GPIO0_BASE		(AM33XX_L4_WKUP_BASE + 0x207000 + 0x100)
#define AM33XX_GPIO1_BASE		(AM33XX_L4_PER_BASE + 0x4C000 + 0x100)
#define AM33XX_GPIO2_BASE		(AM33XX_L4_PER_BASE + 0x1AC000 + 0x100)
#define AM33XX_GPIO3_BASE		(AM33XX_L4_PER_BASE + 0x1AE000 + 0x100)

/* EMFI Registers */
#define AM33XX_EMFI0_BASE		0x4C000000

#define AM33XX_DRAM_ADDR_SPACE_START	0x80000000
#define AM33XX_DRAM_ADDR_SPACE_END	0xC0000000

/* I2C */
#define AM33XX_I2C0_BASE	(AM33XX_L4_WKUP_BASE + 0x20B000)
#define AM33XX_I2C1_BASE	(AM33XX_L4_PER_BASE + 0x02A000)
#define AM33XX_I2C2_BASE	(AM33XX_L4_PER_BASE + 0x19C000)

/* GPMC */
#define AM33XX_GPMC_BASE		0x50000000

/* MMC */
#define AM33XX_MMCHS0_BASE		(AM33XX_L4_PER_BASE + 0x60000)
#define AM33XX_MMC1_BASE		(AM33XX_L4_PER_BASE + 0x1D8000)
#define AM33XX_MMCHS2_BASE		0x47810000

/* SPI */
#define AM33XX_MCSPI0_BASE		(AM33XX_L4_PER_BASE + 0x30000)
#define AM33XX_MCSPI1_BASE		(AM33XX_L4_PER_BASE + 0x1A0000)

/* DTMTimer0 */
#define AM33XX_DMTIMER0_BASE		(AM33XX_L4_WKUP_BASE + 0x205000)

/* PRM */
#define AM33XX_PRM_BASE			(AM33XX_L4_WKUP_BASE + 0x200000)

#define AM33XX_PRM_RSTCTRL		(AM33XX_PRM_BASE + 0x0f00)
#define AM33XX_PRM_RSTCTRL_RESET	0x1

/* CTRL */
#define AM33XX_CTRL_BASE		(AM33XX_L4_WKUP_BASE + 0x210000)
#define AM33XX_IDCODE_REG		(AM33XX_CTRL_BASE + 0x600)

/* Watchdog Timer */
#define AM33XX_WDT_BASE			0x44E35000

/* EMIF Base address */
#define AM33XX_EMIF4_0_CFG_BASE		0x4C000000
#define AM33XX_EMIF4_1_CFG_BASE		0x4D000000
#define AM33XX_DMM_BASE			0x4E000000

#define AM335X_CPSW_BASE		0x4A100000
#define AM335X_CPSW_MDIO_BASE		0x4A101000

/*DMM & EMIF4 MMR Declaration*/
#define AM33XX_DMM_LISA_MAP__0		(AM33XX_DMM_BASE + 0x40)
#define AM33XX_DMM_LISA_MAP__1		(AM33XX_DMM_BASE + 0x44)
#define AM33XX_DMM_LISA_MAP__2		(AM33XX_DMM_BASE + 0x48)
#define AM33XX_DMM_LISA_MAP__3		(AM33XX_DMM_BASE + 0x4C)
#define AM33XX_DMM_PAT_BASE_ADDR	(AM33XX_DMM_BASE + 0x460)

#define AM33XX_EMIF4_0_REG(REGNAME)	(AM33XX_EMIF4_0_CFG_BASE + EMIF4_##REGNAME)
#define AM33XX_EMIF4_1_REG(REGNAME)	(AM33XX_EMIF4_1_CFG_BASE + EMIF4_##REGNAME)

#define EMIF4_MOD_ID_REV		0x0
#define EMIF4_SDRAM_STATUS		0x04
#define EMIF4_SDRAM_CONFIG		0x08
#define EMIF4_SDRAM_CONFIG2		0x0C
#define EMIF4_SDRAM_REF_CTRL		0x10
#define EMIF4_SDRAM_REF_CTRL_SHADOW	0x14
#define EMIF4_SDRAM_TIM_1		0x18
#define EMIF4_SDRAM_TIM_1_SHADOW	0x1C
#define EMIF4_SDRAM_TIM_2		0x20
#define EMIF4_SDRAM_TIM_2_SHADOW	0x24
#define EMIF4_SDRAM_TIM_3		0x28
#define EMIF4_SDRAM_TIM_3_SHADOW	0x2C
#define EMIF0_SDRAM_MGMT_CTRL		0x38
#define EMIF0_SDRAM_MGMT_CTRL_SHD	0x3C
#define EMIF4_ZQ_CONFIG			0xC8
#define EMIF4_DDR_PHY_CTRL_1		0xE4
#define EMIF4_DDR_PHY_CTRL_1_SHADOW	0xE8
#define EMIF4_DDR_PHY_CTRL_2		0xEC
#define EMIF4_IODFT_TLGC		0x60

#define AM33XX_VTP0_CTRL_REG		0x44E10E0C
#define AM33XX_VTP1_CTRL_REG		0x48140E10

/* OCMC */
#define AM33XX_SRAM0_START			0x402f0400
#define AM33XX_SRAM0_SIZE			(SZ_128K - SZ_1K)
#define AM33XX_SRAM_SCRATCH_SPACE		0x4030b800 /* start of public stack */
#define AM33XX_SRAM_GPMC_STACK_SIZE		(0x40)

/* DDR offsets */
#define	AM33XX_DDR_PHY_BASE_ADDR		0x44E12000
#define	AM33XX_DDR_IO_CTRL			0x44E10E04
#define	AM33XX_DDR_CKE_CTRL			0x44E1131C
#define	AM33XX_CONTROL_BASE_ADDR		0x44E10000

#define	AM33XX_DDR_CMD0_IOCTRL			(AM33XX_CONTROL_BASE_ADDR + 0x1404)
#define	AM33XX_DDR_CMD1_IOCTRL			(AM33XX_CONTROL_BASE_ADDR + 0x1408)
#define	AM33XX_DDR_CMD2_IOCTRL			(AM33XX_CONTROL_BASE_ADDR + 0x140C)
#define	AM33XX_DDR_DATA0_IOCTRL			(AM33XX_CONTROL_BASE_ADDR + 0x1440)
#define	AM33XX_DDR_DATA1_IOCTRL			(AM33XX_CONTROL_BASE_ADDR + 0x1444)

#define	AM33XX_CMD0_CTRL_SLAVE_RATIO_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x01C)
#define	AM33XX_CMD0_CTRL_SLAVE_FORCE_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x020)
#define	AM33XX_CMD0_CTRL_SLAVE_DELAY_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x024)
#define	AM33XX_CMD0_DLL_LOCK_DIFF_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x028)
#define	AM33XX_CMD0_INVERT_CLKOUT_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x02C)

#define	AM33XX_CMD1_CTRL_SLAVE_RATIO_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x050)
#define	AM33XX_CMD1_CTRL_SLAVE_FORCE_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x054)
#define	AM33XX_CMD1_CTRL_SLAVE_DELAY_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x058)
#define	AM33XX_CMD1_DLL_LOCK_DIFF_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x05C)
#define	AM33XX_CMD1_INVERT_CLKOUT_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x060)

#define	AM33XX_CMD2_CTRL_SLAVE_RATIO_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x084)
#define	AM33XX_CMD2_CTRL_SLAVE_FORCE_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x088)
#define	AM33XX_CMD2_CTRL_SLAVE_DELAY_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x08C)
#define	AM33XX_CMD2_DLL_LOCK_DIFF_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x090)
#define	AM33XX_CMD2_INVERT_CLKOUT_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x094)

#define AM33XX_DATA0_RD_DQS_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x0C8)
#define AM33XX_DATA0_RD_DQS_SLAVE_RATIO_1	(AM33XX_DDR_PHY_BASE_ADDR + 0x0CC)
#define	AM33XX_DATA0_WR_DQS_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x0DC)

#define	AM33XX_DATA0_WR_DQS_SLAVE_RATIO_1	(AM33XX_DDR_PHY_BASE_ADDR + 0x0E0)
#define	AM33XX_DATA0_WRLVL_INIT_RATIO_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x0F0)

#define	AM33XX_DATA0_WRLVL_INIT_RATIO_1		(AM33XX_DDR_PHY_BASE_ADDR + 0x0F4)
#define	AM33XX_DATA0_WRLVL_INIT_MODE_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x0F8)
#define	AM33XX_DATA0_GATELVL_INIT_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x0FC)

#define	AM33XX_DATA0_GATELVL_INIT_RATIO_1	(AM33XX_DDR_PHY_BASE_ADDR + 0x100)
#define	AM33XX_DATA0_GATELVL_INIT_MODE_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x104)
#define	AM33XX_DATA0_FIFO_WE_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x108)

#define	AM33XX_DATA0_FIFO_WE_SLAVE_RATIO_1	(AM33XX_DDR_PHY_BASE_ADDR + 0x10C)
#define	AM33XX_DATA0_WR_DATA_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x120)

#define	AM33XX_DATA0_WR_DATA_SLAVE_RATIO_1	(AM33XX_DDR_PHY_BASE_ADDR + 0x124)
#define AM33XX_DATA0_DLL_LOCK_DIFF_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x138)

#define AM33XX_DATA0_RANK0_DELAYS_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x134)

#define	AM33XX_DATA1_RD_DQS_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x16C)
#define	AM33XX_DATA1_WR_DQS_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x180)

#define	AM33XX_DATA1_WRLVL_INIT_MODE_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x19C)
#define	AM33XX_DATA1_GATELVL_INIT_MODE_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x1A8)

#define	AM33XX_DATA1_FIFO_WE_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x1AC)
#define	AM33XX_DATA1_WR_DATA_SLAVE_RATIO_0	(AM33XX_DDR_PHY_BASE_ADDR + 0x1C4)

#define	AM33XX_DATA1_RANK0_DELAYS_0		(AM33XX_DDR_PHY_BASE_ADDR + 0x1D8)

/* Ethernet MAC ID from EFuse */
#define AM33XX_MAC_ID0_LO	(AM33XX_CTRL_BASE + 0x630)
#define AM33XX_MAC_ID0_HI	(AM33XX_CTRL_BASE + 0x634)
#define AM33XX_MAC_ID1_LO	(AM33XX_CTRL_BASE + 0x638)
#define AM33XX_MAC_ID1_HI	(AM33XX_CTRL_BASE + 0x63c)
#define AM33XX_MAC_MII_SEL	(AM33XX_CTRL_BASE + 0x650)

struct am33xx_cmd_control {
	u32 slave_ratio0;
	u32 dll_lock_diff0;
	u32 invert_clkout0;
	u32 slave_ratio1;
	u32 dll_lock_diff1;
	u32 invert_clkout1;
	u32 slave_ratio2;
	u32 dll_lock_diff2;
	u32 invert_clkout2;
};

struct am33xx_emif_regs {
	u32 emif_read_latency;
	u32 emif_tim1;
	u32 emif_tim2;
	u32 emif_tim3;
	u32 sdram_config;
	u32 sdram_config2;
	u32 zq_config;
	u32 sdram_ref_ctrl;
};

struct am33xx_ddr_data {
	u32 rd_slave_ratio0;
	u32 wr_dqs_slave_ratio0;
	u32 wrlvl_init_ratio0;
	u32 gatelvl_init_ratio0;
	u32 fifo_we_slave_ratio0;
	u32 wr_slave_ratio0;
	u32 use_rank0_delay;
	u32 dll_lock_diff0;
};

void am33xx_uart0_soft_reset(void);
void am33xx_config_vtp(void);
void am33xx_ddr_phydata_cmd_macro(const struct am33xx_cmd_control *cmd_ctrl);
void am33xx_config_io_ctrl(int ioctrl);
void am33xx_config_sdram(const struct am33xx_emif_regs *regs);
void am33xx_config_ddr_data(const struct am33xx_ddr_data *data, int macronr);
void am335x_sdram_init(int ioctrl, const struct am33xx_cmd_control *cmd_ctrl,
			const struct am33xx_emif_regs *emif_regs,
			const struct am33xx_ddr_data *ddr_data);

#endif
