/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2012
 * David Purdy <david.c.purdy@gmail.com>
 *
 * Based on Kirkwood support:
 * (C) Copyright 2009
 * Marvell Semiconductor <www.marvell.com>
 * Written-by: Prafulla Wadaskar <prafulla@marvell.com>
 */

#ifndef _CONFIG_POGO_E02_H
#define _CONFIG_POGO_E02_H

#include "mv-common.h"

/*
 * Default environment variables
 */

#define CONFIG_EXTRA_ENV_SETTINGS \
	"mtdparts=mtdparts=orion_nand:1M(u-boot),4M(uImage)," \
	"32M(rootfs),-(data)\0"\
	"mtdids=nand0=orion_nand\0"\
	"bootargs_console=console=ttyS0,115200\0" \
	"bootcmd_usb=usb start; ext2load usb 0:1 0x00800000 /uImage; " \
	"ext2load usb 0:1 0x01100000 /uInitrd\0"

/*
 * Ethernet Driver configuration
 */
#define CONFIG_MVGBE_PORTS	{1, 0}	/* enable port 0 only */
#define CONFIG_PHY_BASE_ADR	0

#endif /* _CONFIG_POGO_E02_H */
