/*
 * Apple System Management Control (SMC) Tool
 * Copyright (C) 2006 devnull
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __SMC_H__
#define __SMC_H__
#endif

#include <IOKit/IOKitLib.h>

#ifndef __SMC_C__
#define PUBLIC extern
#else
#define PUBLIC
#endif

#define SMC_KEY_CPU_TEMP      "TC0P"

PUBLIC kern_return_t SMCOpen(void);
PUBLIC double SMCGetTemperature(char *key);
PUBLIC kern_return_t SMCClose(void);

#undef PUBLIC
