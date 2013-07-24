/**
 * sensor
 *
 * Copyright (c) 2011 Daniel Berenguer <dberenguer@usapiens.com>
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
 * Creation date: 03/31/2011
 */

#include "Arduino.h"
#include "sensor.h"

#ifdef TEMPPRESS
#include "Wire.h"
#include "BMP085.h"
BMP085 bmp;
#endif

/**
 * Local functions
 */
#ifdef TEMPHUM
byte sensor_ReadByte(void);

/**
 * sensor_ReadByte
 *
 * Read data byte from DHT11 sensor
 */
byte sensor_ReadByte(void)
{
  byte i, result = 0;
  int count = 20000;

  for(i=0; i< 8; i++)
  {
    while(!getDataPin())
    {
      if (--count == 0)
        return -1;
    }
    delayMicroseconds(30);
		
    if (getDataPin())
      result |=(1<<(7-i));

    count = 20000;

    while(getDataPin())
    {
      if (--count == 0)
        return -1;
    }
  }
  return result;
}

/**
 * sensor_ReadTempHum
 *
 * Read temperature and humidity values from DHT11 sensor
 *
 * Return -1 in case of error. Return 0 otherwise
 */
int sensor_ReadTempHum(void)
{
  byte dhtData[5];
  byte dht_in, i, dhtCrc;
  int result, temperature, humidity;
  
  // Power ON sensor
  dhtSensorON();
  delay(400);
  
  setDataOutput();
  setDataPin();
   
  // Start condition
  clearDataPin();
  delay(18);
  setDataPin();
  delayMicroseconds(40);	
  setDataInput();
  delayMicroseconds(40);

  if ((dht_in = getDataPin()))
    return -1;  // Start condition not met

  delayMicroseconds(80);	
  if (!(dht_in = getDataPin()))
    return -1;  // Start condition not met
  delayMicroseconds(80);

  // Now ready for data reception 
  for (i=0; i<5; i++)  
    dhtData[i] = sensor_ReadByte();

  setDataOutput();
  setDataPin();
  
  // Power OFF sensor
  dhtSensorOFF();
  
  dhtCrc = dhtData[0] + dhtData[1] + dhtData[2] + dhtData[3];

  // check check_sum
  if(dhtData[4]!= dhtCrc)
    return -1;  // CRC error

  // Prepare values for 2-decimal format:
  #ifdef DHT11
  temperature = dhtData[2] * 10 + 500;  // Apply same format as for the DHT22
  humidity = dhtData[0] * 10;
  #elif DHT22
  int sign = 1;
  if (dhtData[2] & 0x80)
  {
    sign = -1;
    dhtData[2] &= 0x7F; 
  }
  temperature = sign * word(dhtData[2], dhtData[3]) + 500;  // 50.0 ºC offset in order to accept negative temperatures
  humidity = word(dhtData[0], dhtData[1]);
  #endif

  dtSensor[0] = (temperature >> 8) & 0xFF;
  dtSensor[1] = temperature & 0xFF;
  dtSensor[2] = (humidity >> 8) & 0xFF;
  dtSensor[3] = humidity & 0xFF;
  
  return 0;
}

#elif TEMP
/**
 * sensor_ReadTemp
 *
 * Read temperature from TMP36 sensor
 *
 * Return -1 in case of error. Return 0 otherwise
 */
int sensor_ReadTemp(void)
{ 
  // Switch on sensor
  tempSensorON();
  delay(200);
  
  // Read voltage from ADC pin
  unsigned int reading = analogRead(PIN_ADCTEMP);  

  // Switch off sensor
  tempSensorOFF();

  // Convert reading to voltage
  float fVolt = ((reading * 1.1) / 1024.0) * 100;
  unsigned int voltage = fVolt * 10;

  // Fill register
  dtSensor[0] = (voltage >> 8) & 0xFF;
  dtSensor[1] = voltage & 0xFF;
  
  return 0;
}

#elif TEMPPRESS
/**
 * sensor_ReadTempPress
 *
 * Read temperature and pressure from BMP085 sensor
 *
 * Return -1 in case of error. Return 0 otherwise
 */
int sensor_ReadTempPress(void)
{
  pressSensorON();
  delay(400);
  unsigned int temperature = bmp.readTemperature() * 10 + 500;
  unsigned int pressure = bmp.readPressure() / 100;  // mbar

  dtSensor[0] = (temperature >> 8) & 0xFF;
  dtSensor[1] = temperature & 0xFF;
  dtSensor[2] = (pressure >> 8) & 0xFF;
  dtSensor[3] = pressure & 0xFF;

  pressSensorOFF();

  return 0;
}

#endif

/**
 * initSensor
 *
 * Initialize sensor pins
 */
void initSensor(void)
{
#ifdef TEMP
  pinMode(PIN_PWRTEMP, OUTPUT);   // Configure Power pin as output
  tempSensorOFF();
  analogReference(INTERNAL);      // Use internal 1.1 V reference fro ADC conversions
#elif TEMPHUM
  pinMode(PIN_PWRDHT, OUTPUT);    // Configure Power pin as output
  dhtSensorOFF();
#elif TEMPPRESS
  pinMode(PIN_PWRPRESS, OUTPUT);  // Configure Power pin as output
  pressSensorOFF();
  bmp.begin();
#endif
}

