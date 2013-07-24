/*
  NewEEPROM.h - EEPROM library
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  Adapted for Ariadne Bootloader support be Stylianos Tsampas, 2012.

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

#ifndef NewEEPROM_h
#define NewEEPROM_h

#include <inttypes.h>

#define ARIADNE_SIGPOS (0x02)
#define ARIADNE_SIGVAL (0xEE)
#define ARIADNE_OFFSET (0x40)
#define NO_OFFSET      (0x00)

class NewEEPROMClass {

	private:
		uint8_t _offset;

	protected:
		uint8_t read(int, uint8_t);
		void write(int, uint8_t, uint8_t);

	public:
		NewEEPROMClass(void);
		uint8_t read(int);
		void write(int, uint8_t);
};

extern NewEEPROMClass EEPROM;

#endif

// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
