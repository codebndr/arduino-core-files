/*
  ShiftLCD Library - CreateChar
 
 Demonstrates the use a 16x2 LCD display.  The ShiftLCD library works with
 all LCD displays that are compatible with the Hitachi HD44780 driver.
 There are many of them out there, and you can usually tell them by the
 16-pin interface.
 
 This sketch prints "Hello, World!" and then adds a smiley after it
 
  The circuit:
 
 ---Shift Register 74HC595---
 * SR Pin 14 to Arduino pin 2
 * SR Pin 12 to Arduino pin 3
 * SR Pin 11 to Arduino pin 4
 * SR Pin  8 to Ground
 * SR Pin 16 to +5v
 * SR Pin 13 to Ground
 * SR Pin 10 to +5v
 -----Shift Reg to LCD--------
 * SR Pin 15 to D7
 * SR Pin 1  to D6
 * SR Pin 2  to D5
 * SR Pin 3  to D4
 * SR Pin 5  to MOSFET gate
 * SR Pin 6  to Enable
 * SR Pin 7  to RS
 -----LCD HD44780-------------
 * Vss to Ground
 * Vdd to +5V
 * Vo  to 10k Wiper
 * R/W to Ground
 * 5v  to +5v
 * Gnd to MOSFET Drain
 ------N Chanel MOSFET--------
 * Source to Ground
 * Gate   to SP Pin 5
 * Drain  to LCD Gnd
 * 1k Resistor Between gate and source
 
 For a more detailed schematic, please see my blog:
 
 http://cjparish.blogspot.com/2010/01/controlling-lcd-display-with-shift.html 
 
 Library modified from the original LiquidCrystal Library
 Example based on the code from the arduino.cc reference library for LiquidCrystal
 Chris Parish, January 17th 2010
 
 */

 //include the library code:
 #include <ShiftLCD.h>

 // initalise the library with the numbers of the interface pins
 ShiftLCD lcd(2,4,3);

 //define the smiley
 byte smiley[8] = {
   B00000,
   B10001,
   B00000,
   B00000,
   B10001,
   B01110,
   B00000,
 };


 void setup()
 {
   // create the character. This must be done before calling lcd.begin
   lcd.createChar(0, smiley);
   // initalise the display with the number of row and colums:
   lcd.begin(16,2);
   // output Hello World to the display:
   lcd.print("Hello, World!");
   // output the custom character:
   lcd.write(0);
 }
 
 void loop()
 {
 }
