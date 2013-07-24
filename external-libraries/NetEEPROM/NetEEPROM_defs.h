/*
 * NetEEPROM_defs.h - Ariadne Bootloader helper library
 * Copyright (c) 2012 Stylianos Tsampas.  All right reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef NetEEPROM_defs_h
#define NetEEPROM_defs_h

/* EEPROM partitioning */
#define NETEEPROM_MAJVER   0
#define NETEEPROM_MINVER   1
#define NETEEPROM_IMG_STAT 2
#define NETEEPROM_SIG_1    3
#define NETEEPROM_SIG_2    4
#define NETEEPROM_DATA     5
#define NETEEPROM_GW       5
#define NETEEPROM_SN       9
#define NETEEPROM_MAC      13
#define NETEEPROM_IP       19
#define NETEEPROM_SIG_3    23
#define NETEEPROM_PORT     24
#define NETEEPROM_SIG_4    26
#define NETEEPROM_PASS     27
#define NETEEPROM_END      63

#define EEPROM_SETTINGS_SIZE 18
#define REGISTER_BLOCK_SIZE  28

/* EEPROM values */
#define ARIADNE_MAJVER 0
#define ARIADNE_MINVER 4

#define NETEEPROM_IMG_OK_VALUE  (0xEE)
#define NETEEPROM_IMG_BAD_VALUE (0xFF)

#define NETEEPROM_SIG_1_VALUE   (0x55)
#define NETEEPROM_SIG_2_VALUE   (0xAA)
#define NETEEPROM_SIG_3_VALUE   (0xBB)
#define NETEEPROM_SIG_4_VALUE   (0xCC)

#define DEFAULT_MAC_ADDR    0xDE,0xAD,0xBE,0xEF,0xFE,0xED
#define DEFAULT_IP_ADDR     192,168,1,128
#define DEFAULT_SUB_MASK    255,255,255,0
#define DEFAULT_GW_ADDR     192,168,1,1


#endif