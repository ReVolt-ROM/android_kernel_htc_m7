/*
 * arch/arm/mach-tegra/msm-config.h
 *
 * Copyright (C) 2013 Timothy Nelson (aka KozmiKKicK)
 *
 * Author:
 *	kozmikkick <nelson.ecp@gmail.com>
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/* in kHz */

#define VDD_MEM_MAX		1150000  /* default: 1150000 */
#define VDD_DIG_MAX		1150000  /* default: 1150000 */
#define VREG_CORE_MAX		1450000  /* default: 1300000 */
#define VREG_CORE_MIN		600000  /* default: 850000 */

#define LIMIT_TEMP_MAX		60  /* default: 51 */

#define CPU_INITIAL_FREQ_MAX	1782000
#define CPU_INITIAL_FREQ_MIN	384000
/* End */
