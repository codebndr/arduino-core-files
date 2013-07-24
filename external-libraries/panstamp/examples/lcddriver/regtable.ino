/**
 * regtable
 *
 * Copyright (c) 2012 Daniel Berenguer <dberenguer@usapiens.com>
 * 
 * This file is part of the panStamp project.
 * 
 * panStamp  is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 * 
 * panLoader is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with panLoader; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 
 * USA
 * 
 * Author: Daniel Berenguer
 * Creation date: 01/19/2012
 */

#include <EEPROM.h>
#include "product.h"
#include "panstamp.h"
#include "regtable.h"

/**
 * Declaration of common callback functions
 */
DECLARE_COMMON_CALLBACKS()

/**
 * Definition of common registers
 */
DEFINE_COMMON_REGISTERS()

/*
 * Definition of custom registers
 */
// LCD line 0
static byte dtLcdLine0[] = {0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};
REGISTER regLcdLine0(dtLcdLine0, sizeof(dtLcdLine0), NULL, &setLcdLine);
// LCD line 1
static byte dtLcdLine1[] = {0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};;
REGISTER regLcdLine1(dtLcdLine1, sizeof(dtLcdLine1), NULL, &setLcdLine);
// LCD line 2
static byte dtLcdLine2[] = {0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};;
REGISTER regLcdLine2(dtLcdLine2, sizeof(dtLcdLine2), NULL, &setLcdLine);
// LCD line 3
static byte dtLcdLine3[] = {0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};;
REGISTER regLcdLine3(dtLcdLine3, sizeof(dtLcdLine3), NULL, &setLcdLine);
// LCD backlight
static byte dtBackLight[1] = {0};
REGISTER regBackLight(dtBackLight, sizeof(dtBackLight), NULL, &setBackLight);
// Binary input register
REGISTER regBinInputs(&states, sizeof(states), NULL, NULL);

/**
 * Initialize table of registers
 */
DECLARE_REGISTERS_START()
  &regLcdLine0,
  &regLcdLine1,
  &regLcdLine2,
  &regLcdLine3,
  &regBackLight,
  &regBinInputs
DECLARE_REGISTERS_END()

/**
 * Definition of common getter/setter callback functions
 */
DEFINE_COMMON_CALLBACKS()

/**
 * Definition of custom getter/setter callback functions
 */

/**
 * setLcdLine
 *
 * Enter text into LCD line
 *
 * 'rId'     Register ID
 * 'text'    New text to be entered
 */
const void setLcdLine(byte rId, byte *text)
{
  byte line = rId - REGI_LCDLINE0;
  
  // Update register
  memcpy(regTable[rId]->value, text, regTable[rId]->length);

  // Place cursor at the beginning of the line
  lcd.setCursor(0, line);

  if (line == 0)
    lcd.clear();

  // Write text
  lcd.print((char*)regTable[rId]->value);
}

/**
 * setBackLight
 *
 * Set backlight level
 *
 * 'rId'     Register ID
 * 'level'   New backlight level
 */
const void setBackLight(byte rId, byte *level)
{
  // Set actual level
  analogWrite(PIN_BACKLIGHT, level[0]);

  // Update register
  memcpy(dtBackLight, level, sizeof(dtBackLight));
}

