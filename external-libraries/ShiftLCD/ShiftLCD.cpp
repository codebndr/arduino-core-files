#include "ShiftLCD.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "WProgram.h"

/**
 * This is a modified version of the standard LiquidCrystal class that
 * ships with the Arduino software.
 *
 * It has been modified to work with either one or two eight bit shift registers
 * in 4 and 8 bit mode respectivly
 *
 * The original file was released under the LGPL licence which I have to confess
 * I found more than a little confusing. I belive that I am obligated to release
 * this software under the GPL licence, as it is a derivitive work:
 * (if not, I am very sorry and please tell me what I should hve done)
 *
 *******************************************************************************
    ShiftLCD, allows the HD44780 LCD to be opertaed via a shift register
    Copyright (C) 2010  Chris Parish

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************
 * Please see the example files for usage information
 */

ShiftLCD::ShiftLCD(uint8_t dp, uint8_t cp, uint8_t lp, uint8_t mode)
{
	init (dp, cp, lp, mode);
}


void ShiftLCD::init(uint8_t dp, uint8_t cp, uint8_t lp, uint8_t mode)
{
	_data_pin = dp;
	_clock_pin = cp;
	_latch_pin = lp;
	
	_backlight = LCD_BL_PIN;
  
	pinMode(_data_pin, OUTPUT);
	pinMode(_clock_pin, OUTPUT);
	pinMode(_latch_pin, OUTPUT);
	
  if (mode <= 4)
    _displayfunction = LCD_4BITMODE | LCD_1LINE | LCD_5x8DOTS;
  else
    _displayfunction = LCD_8BITMODE | LCD_1LINE | LCD_5x8DOTS;
  
  begin(16, 1);  
}

void ShiftLCD::begin(uint8_t cols, uint8_t lines, uint8_t dotsize) {
  if (lines > 1) {
    _displayfunction |= LCD_2LINE;
  }
  _numlines = lines;
  _currline = 0;

  // for some 1 line displays you can select a 10 pixel high font
  if ((dotsize != 0) && (lines == 1)) {
    _displayfunction |= LCD_5x10DOTS;
  }

  // SEE PAGE 45/46 FOR INITIALIZATION SPECIFICATION!
  // according to datasheet, we need at least 40ms after power rises above 2.7V
  // before sending commands. Arduino can turn on way befer 4.5V so we'll wait 50
  delayMicroseconds(50000); 
  // clear the shift register by sending 16 0's to it
	shiftOut(_data_pin, _clock_pin, LSBFIRST, B00000000);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, B00000000);
  
  
  //put the LCD into 4 bit or 8 bit mode
  if (! (_displayfunction & LCD_8BITMODE)) {
    // this is according to the hitachi HD44780 datasheet
    // figure 24, pg 46

    // we start in 8bit mode, try to set 4 bit mode
    write4bits(0x03, LOW);
    delayMicroseconds(4500); // wait min 4.1ms

    // second try
    write4bits(0x03, LOW);
    delayMicroseconds(4500); // wait min 4.1ms
    
    // third go!
    write4bits(0x03, LOW); 
    delayMicroseconds(150);

    // finally, set to 8-bit interface
    write4bits(0x02, LOW); 
  } else {
    // this is according to the hitachi HD44780 datasheet
    // page 45 figure 23

    // Send function set command sequence
    command(LCD_FUNCTIONSET | _displayfunction);
    delayMicroseconds(4500);  // wait more than 4.1ms

    // second try
    command(LCD_FUNCTIONSET | _displayfunction);
    delayMicroseconds(150);

    // third go
    command(LCD_FUNCTIONSET | _displayfunction);
  }

  // finally, set # lines, font size, etc.
  command(LCD_FUNCTIONSET | _displayfunction);  

  // turn the display on with no cursor or blinking default
  _displaycontrol = LCD_DISPLAYON | LCD_CURSOROFF | LCD_BLINKOFF;  
  display();

  // clear it off
  clear();

  // Initialize to default text direction (for romance languages)
  _displaymode = LCD_ENTRYLEFT | LCD_ENTRYSHIFTDECREMENT;
  // set the entry mode
  command(LCD_ENTRYMODESET | _displaymode);

}

/********** high level commands, for the user! */
void ShiftLCD::clear()
{
  command(LCD_CLEARDISPLAY);  // clear display, set cursor position to zero
  delayMicroseconds(2000);  // this command takes a long time!
}

void ShiftLCD::home()
{
  command(LCD_RETURNHOME);  // set cursor position to zero
  delayMicroseconds(2000);  // this command takes a long time!
}

void ShiftLCD::setCursor(uint8_t col, uint8_t row)
{
  int row_offsets[] = { 0x00, 0x40, 0x14, 0x54 };
  if ( row > _numlines ) {
    row = _numlines-1;    // we count rows starting w/0
  }
  
  command(LCD_SETDDRAMADDR | (col + row_offsets[row]));
}

// Turn the display on/off (quickly)
void ShiftLCD::noDisplay() {
  _displaycontrol &= ~LCD_DISPLAYON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}
void ShiftLCD::display() {
  _displaycontrol |= LCD_DISPLAYON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}

// Turns the underline cursor on/off
void ShiftLCD::noCursor() {
  _displaycontrol &= ~LCD_CURSORON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}
void ShiftLCD::cursor() {
  _displaycontrol |= LCD_CURSORON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}

// Turn on and off the blinking cursor
void ShiftLCD::noBlink() {
  _displaycontrol &= ~LCD_BLINKON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}
void ShiftLCD::blink() {
  _displaycontrol |= LCD_BLINKON;
  command(LCD_DISPLAYCONTROL | _displaycontrol);
}

// These commands scroll the display without changing the RAM
void ShiftLCD::scrollDisplayLeft(void) {
  command(LCD_CURSORSHIFT | LCD_DISPLAYMOVE | LCD_MOVELEFT);
}
void ShiftLCD::scrollDisplayRight(void) {
  command(LCD_CURSORSHIFT | LCD_DISPLAYMOVE | LCD_MOVERIGHT);
}

// This is for text that flows Left to Right
void ShiftLCD::leftToRight(void) {
  _displaymode |= LCD_ENTRYLEFT;
  command(LCD_ENTRYMODESET | _displaymode);
}

// This is for text that flows Right to Left
void ShiftLCD::rightToLeft(void) {
  _displaymode &= ~LCD_ENTRYLEFT;
  command(LCD_ENTRYMODESET | _displaymode);
}

// This will 'right justify' text from the cursor
void ShiftLCD::autoscroll(void) {
  _displaymode |= LCD_ENTRYSHIFTINCREMENT;
  command(LCD_ENTRYMODESET | _displaymode);
}

// This will 'left justify' text from the cursor
void ShiftLCD::noAutoscroll(void) {
  _displaymode &= ~LCD_ENTRYSHIFTINCREMENT;
  command(LCD_ENTRYMODESET | _displaymode);
}

// This will turn the backlight on
void ShiftLCD::backlightOn(void) {
	_backlight = LCD_BL_PIN;
	updateBacklight();
}

// This will turn the backlight off
void ShiftLCD::backlightOff(void) {
	_backlight &= ~LCD_BL_PIN;
	updateBacklight();
}

// Allows us to fill the first 8 CGRAM locations
// with custom characters
void ShiftLCD::createChar(uint8_t location, uint8_t charmap[]) {
  location &= 0x7; // we only have 8 locations 0-7
  command(LCD_SETCGRAMADDR | (location << 3));
  for (int i=0; i<8; i++) {
    write(charmap[i]);
  }
}

/*********** mid level commands, for sending data/cmds */

inline void ShiftLCD::command(uint8_t value) {
  send(value, false);
}

inline void ShiftLCD::write(uint8_t value) {
  send(value, true);
}

/************ low level data pushing commands **********/

void ShiftLCD::updateBacklight(void) {
	if (_displayfunction & LCD_8BITMODE) {
		digitalWrite(_latch_pin, HIGH);
		shiftOut(_data_pin, _clock_pin, LSBFIRST, _backlight);
		shiftOut(_data_pin, _clock_pin, LSBFIRST, B00000000);
		digitalWrite(_latch_pin, LOW);
	} else {
		digitalWrite(_latch_pin, HIGH);
		shiftOut(_data_pin, _clock_pin, LSBFIRST, _backlight);
		digitalWrite(_latch_pin, LOW);
	}
}

// write either command or data, with automatic 4/8-bit selection
void ShiftLCD::send(uint8_t value, uint8_t mode) {
  
  if (_displayfunction & LCD_8BITMODE) {
    write8bits(value, mode); 
  } else {
    write4bits(value>>4, mode);
    write4bits(value, mode);
  }
}


void ShiftLCD::write4bits(uint8_t value, uint8_t mode) {
	int EN_SWITCH = B00000010;
	int RS_SWITCH = B00000001;
	int cmd = 0;
	int data = 0;
	if (!mode) {
		cmd = 0 | _backlight;
	} else {
		cmd = LCD_RS_PIN | _backlight;
	}
    data = value<<4 & B11110000;
	cmd |= EN_SWITCH;
	digitalWrite(_latch_pin, HIGH);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, data | cmd);
	digitalWrite(_latch_pin, LOW);
	delayMicroseconds(1);
	
	cmd &= ~EN_SWITCH;
	digitalWrite(_latch_pin, HIGH);
	shiftOut (_data_pin, _clock_pin, LSBFIRST, data | cmd);
	digitalWrite(_latch_pin, LOW);
	delayMicroseconds(1);
	
	cmd |= EN_SWITCH;
	digitalWrite(_latch_pin, HIGH);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, data | cmd);
	digitalWrite(_latch_pin, LOW);
	
	delayMicroseconds(100);
}

void ShiftLCD::write8bits(uint8_t value, uint8_t mode) {
	int EN_SWITCH = B00000010;
	int RS_SWITCH = B00000001;
	int cmd = 0;
	if (!mode) {
		cmd = 0;
	} else {
		cmd = RS_SWITCH;
	}
	//set enable low
	cmd |= EN_SWITCH;
	digitalWrite (_latch_pin, HIGH);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, cmd);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, value);
	digitalWrite (_latch_pin, LOW);
	//delay (500);
	//set enable high;
	cmd &= ~EN_SWITCH;
	digitalWrite (_latch_pin, HIGH);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, cmd);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, value);
	digitalWrite (_latch_pin, LOW);
	delayMicroseconds (1);
	//delay (500);
	//set enable low
	cmd |= EN_SWITCH;
	digitalWrite (_latch_pin, HIGH);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, cmd);
	shiftOut(_data_pin, _clock_pin, LSBFIRST, value);
	digitalWrite (_latch_pin, LOW);
	delayMicroseconds (100);
	
}

