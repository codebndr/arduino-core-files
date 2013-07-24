/*
  NewEEPROM.cpp - EEPROM library
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  Adapted for Ariadne Bootloader support by Stylianos Tsampas, 2012.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/******************************************************************************
 * Includes
 ******************************************************************************/

#include <avr/eeprom.h>
#include "Arduino.h"
#include "NewEEPROM.h"

/******************************************************************************
 * Definitions
 ******************************************************************************/

uint8_t NewEEPROMClass::read(int address, uint8_t offset)
{
	return eeprom_read_byte((unsigned char*) address + offset);
}

void NewEEPROMClass::write(int address, uint8_t value, uint8_t offset)
{
	eeprom_write_byte((unsigned char*) address + offset, value);
}

/******************************************************************************
 * Constructors
 ******************************************************************************/

NewEEPROMClass::NewEEPROMClass(void)
{
	if(read(ARIADNE_SIGPOS, 0) == ARIADNE_SIGVAL) _offset = ARIADNE_OFFSET;
	else _offset = NO_OFFSET;
}

/******************************************************************************
 * User API
 ******************************************************************************/

uint8_t NewEEPROMClass::read(int address)
{
	return read(address, _offset);
}

void NewEEPROMClass::write(int address , uint8_t value)
{
	write(address, value, _offset);
}

NewEEPROMClass EEPROM;
// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
