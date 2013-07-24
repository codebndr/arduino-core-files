/*
 * NetEEPROM.h - Ariadne Bootloader helper library
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

#ifndef NetEEPROM_h
#define NetEEPROM_h

#include <avr/pgmspace.h>
#include <Arduino.h>
#include <HardwareSerial.h>
#include <NewEEPROM.h>
#include <IPAddress.h>

#define pgm_uchar(name)   static const unsigned char name[] PROGMEM

#ifdef DEBUG
	#define DBG(c) c
#else
	#define DBG(c)
#endif

class NetEEPROMClass : NewEEPROMClass {

	private:
		/*
		 * Network functions
		 */
		/** Write signature bytes in eeprom, informing the bootloader that
		 *  the network settings will be loaded from the eeprom */
		void writeNetSig();
		/** Generic function to write IP addresses to EEPROM */
		void writeAddr(IPAddress addr, byte start);
		/** Write MAC address to EEPROM.
		 *  @param mac pointer to byte array where the MAC address is stored. */
		void writeMAC(byte* mac);
		/** Write IP to EEPROM.
		 *  @param ip IPAddress object with the IP to set for the Arduino. */
		void writeIP(IPAddress ip);
		/** Write gateway to EEPROM.
		 *  @param gw IPAddress object with the IP of the Gateway. */
		void writeGW(IPAddress gw);
		/** Write subnet mask to EEPROM.
		 *  @param sn IPAddress object with the Subnet Mask. */
		void writeSN(IPAddress sn);
		/** Basic method to read addresses used in public functions */
		IPAddress readAddr(byte start);

		/*
		 * Port functions
		 */
		/** Write port signature byte to enable reading the TFTP data port from the bootloader */
		void writePortSig();

		/*
		 * Password functions
		 */
		/** Write password signature to enable reading of password from EEPROM */
		void writePassSig();


	public:
		/** @name Image Status
		 * Image status functions
		 */
		/** Set the flashed image status to bad, to prevent the bootloader
		 *  from timing out */
		void writeImgBad(void);
		/** Set the flashed image status to good, to allow the bootloader
		 *  to load the program in memory */
		void writeImgOk(void);


		/** @name Networking
		 * Network functions
		 */
		/** Erase signature bytes in eeprom to revert the bootloader to
		 *  built-in networking settings */
		void eraseNetSig(void);
		/** Write the full network settings to the EEPROM and set the network
		 *  settings signature in order to have the bootloader detect them.
		 *  @param mac pointer to byte array where the MAC address is stored.
		 *  @param ip IPAddress object with the IP to set for the Arduino.
		 *  @param gw IPAddress object with the IP of the Gateway. Needed even for local use.
		 *  @param sn IPAddress object with the Subnet Mask. */
		void writeNet(byte* mac, IPAddress ip, IPAddress gw, IPAddress sn);
		/** Query if the bootloader uses the custom network settings.
		 *  @return True if network settings have been set in the EEPROM. */
		bool netSigIsSet(void);
		/** Read the MAC address from EEPROM.
		 *  @return  Pointer to allocated memory with the MAC address. */
		byte* readMAC(void);
		/** Read IP.
		 *  @return IPAddress object with the IP of the Arduino. */
		IPAddress readIP(void);
		/** Read Gateway
		*  @return IPAddress object with the IP of the Gateway. */
		IPAddress readGW(void);
		/** Read Subnet Mask
		*  @return IPAddress object with the Subnet Mask. */
		IPAddress readSN(void);
		/** Print the network settings. Serial needs to be initalized in the sketch
		 *  @param serial pointer to the initialized serial (use &Serial) */
		void printNet(HardwareSerial* serial);



		/** @name Tftp
		 * Port functions
		 */
		/** Erase port signature byte to disable reading the TFTP data port from the bootloader */
		void erasePortSig(void);
		/** Write the port value to EEPROM.
		 *  @param port The number of the port to be used for the TFTP data transfer. */
		void writePort(word port);
		/** Query if the port signature is set.
		 * @return True if there is a port specified in EEPROM. */
		bool portSigIsSet(void);
		/** Read the port from EEPROM */
		word readPort(void);
		/** Print the port number to the serial. Serial needs to be initalized in the sketch
		 *  @param serial pointer to the initialized serial (use &Serial) */
		void printPort(HardwareSerial* serial);



		/** @name Password
		 * Password functions
		 */
		/** Erase password signature byte to disable password in the bootloader.
		 *  No default pass exists */
		void erasePassSig(void);
		/** Write the password to the EEPROM.
		 *  @param passwd String object with the password to be stored. */
		void writePass(String passwd);
		/** Query if the password is set.
		 *  @return True if the password has been set. */
		bool passSigIsSet(void);
		/** Read the password from EEPROM
		 *  @return String object with the password. */
		String readPass(void);
		/** Print password stored in EEPROM to serial. Serial has to be initalized in the sketch
		 *  @param serial pointer to the initialized serial (use &Serial) */
		void printPass(HardwareSerial* serial);



		/** @name Generic
		 * General purpose functions
		 */
		/** Print all set bootloader settings */
		void print(HardwareSerial* serial);
		/** Print all bootloader settings. Printing defaults if unset */
		void printAll(HardwareSerial* serial);
};

extern NetEEPROMClass NetEEPROM;

#endif
// kate: indent-mode cstyle; indent-width 4; replace-tabs off; tab-width 4;
