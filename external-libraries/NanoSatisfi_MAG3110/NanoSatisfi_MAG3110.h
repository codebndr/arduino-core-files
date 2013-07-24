/* 
    NanoSatisfi_MAG3110.h - Library for Arduino returns x,y,z data on current magnetic field
    Copyright (C) 2012  Jeroen Cappaert & Lara Booth for NanoSatisfi

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
    
////////////////////////////////////////////////////////////////////////////////    
          Notes:
         
          Designed for use with Freescale (C) MAG3110 Magnetometer
   
          Tested with MAG3110 Breakout from Sparkfun and Arduino Uno
         
          Based on Sparkfun's example for the MAG3110 breakout board:
          http://dlnmh9ip6v2uc.cloudfront.net/datasheets/BreakoutBoards/Mag3110_v10.pde
         
////////////////////////////////////////////////////////////////////////////////   
   
*/

#ifndef NanoSatisfi_MAG3110_h
#define NanoSatisfi_MAG3110_h

#include <Arduino.h>
#include <Wire.h>


// define magnetometer I2C address (fixed)
#define NS_MAG3110  0x0E // Magnetometer MAG3110 


class NanoSatisfi_MAG3110
{
  public:
    //constructor
    NanoSatisfi_MAG3110();
    
    //public methods
    void configMag(); 
    int readx();
    int ready();
    int readz();
    float x_value();
    float y_value();
    float z_value();
    int getHeading(float x, float y, float z);

  private:
    //class-only methods:
    int read16Data(char r);
    
    //global variables
    float mag_x_scale;
    float mag_y_scale;
    float mag_z_scale;
    
};


#endif
