#ifndef ShiftLCD_h
#define ShiftLCD_h

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


#include <inttypes.h>
#include "Print.h"

// commands
#define LCD_CLEARDISPLAY 0x01
#define LCD_RETURNHOME 0x02
#define LCD_ENTRYMODESET 0x04
#define LCD_DISPLAYCONTROL 0x08
#define LCD_CURSORSHIFT 0x10
#define LCD_FUNCTIONSET 0x20
#define LCD_SETCGRAMADDR 0x40
#define LCD_SETDDRAMADDR 0x80

// flags for display entry mode
#define LCD_ENTRYRIGHT 0x00
#define LCD_ENTRYLEFT 0x02
#define LCD_ENTRYSHIFTINCREMENT 0x01
#define LCD_ENTRYSHIFTDECREMENT 0x00

// flags for display on/off control
#define LCD_DISPLAYON 0x04
#define LCD_DISPLAYOFF 0x00
#define LCD_CURSORON 0x02
#define LCD_CURSOROFF 0x00
#define LCD_BLINKON 0x01
#define LCD_BLINKOFF 0x00

// flags for display/cursor shift
#define LCD_DISPLAYMOVE 0x08
#define LCD_CURSORMOVE 0x00
#define LCD_MOVERIGHT 0x04
#define LCD_MOVELEFT 0x00

// flags for function set
#define LCD_8BITMODE 0x10
#define LCD_4BITMODE 0x00
#define LCD_2LINE 0x08
#define LCD_1LINE 0x00
#define LCD_5x10DOTS 0x04
#define LCD_5x8DOTS 0x00

// pins for functional output
#define LCD_RS_PIN 0x01
#define LCD_EN_PIN 0x02
#define LCD_BL_PIN 0x04


/*
    ShiftLCD Class
*/
class ShiftLCD: public Print {
public:

  ShiftLCD(uint8_t dp, uint8_t cp, uint8_t lp, uint8_t mode = 4);
	
  void init(uint8_t dp, uint8_t cp, uint8_t lp, uint8_t mode);
    
  void begin(uint8_t cols, uint8_t rows, uint8_t charsize = LCD_5x8DOTS);

  void clear();
  void home();

  void noDisplay();
  void display();
  void noBlink();
  void blink();
  void noCursor();
  void cursor();
  void scrollDisplayLeft();
  void scrollDisplayRight();
  void leftToRight();
  void rightToLeft();
  void autoscroll();
  void noAutoscroll();
  void backlightOn();
  void backlightOff();

  void createChar(uint8_t, uint8_t[]);
  void setCursor(uint8_t, uint8_t); 
  virtual void write(uint8_t);
  void command(uint8_t);
private:
	void updateBacklight();
  void send(uint8_t, uint8_t);
  void write4bits(uint8_t, uint8_t);
  void write8bits(uint8_t, uint8_t);
  
  uint8_t _clock_pin;	//shift register clock pin
  uint8_t _data_pin;	//shift register data pin
  uint8_t _latch_pin;	//shift register latch pin
  uint8_t _smart_enable;

  uint8_t _displayfunction;
  uint8_t _displaycontrol;
  uint8_t _displaymode;

  uint8_t _backlight;

  uint8_t _initialized;

  uint8_t _numlines,_currline;
};

#endif
