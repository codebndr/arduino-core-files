/*
 * WriteNetworkSettings

   This sketch writes a set of network configuration settings to EEPROM
   in such a way that both the Ariadne bootloader & a sketch
   can read them back later and share the same settings.

   As commented below these are the settings available for modification:

     * Gateway IP address
     * Subnet mask
     * MAC address
     * Arduino device IP address

   Once the settings have been written to EEPROM, an LED on pin 9
   (if connected) will flash rapdily. The arduino will reset after 4 seconds

   The default settings used by the bootloader:

      192,168,1,254,                       // Gateway IP address
      255,255,255,0,                       // Subnet mask
      0xDE,0xAD,0xBE,0xEF,0xFE,0xED,       // MAC address
      192,168,1,128,                       // Arduino device IP address


   Settings suitable for link-local use:

      169,254,1,1,                         // Gateway IP address
      255,255,0,0,                         // Subnet mask
      0x12,0x34,0x45,0x78,0x9A,0xBC,       // MAC address
      169,254,254,169,                     // Arduino device IP address

 */

#include <avr/wdt.h>
#include <NewEEPROM.h>
#include <NetEEPROM.h>

/* You have to set each and every of these variables below to their correct values
 * for your network. The bootloader won't function correctly if one of these is wrong.
 * For the MAC Address, you can set it to anything you like, but using the one provided
 * with your Ethernet Shield or Arduino Ethernet is strongly suggested. */
byte  mac[] = {0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC};
IPAddress  ip(192, 168, 1, 120);
IPAddress  gateway(192, 168, 1, 1);
IPAddress  subnet(255, 255, 255, 0);
/* You might want to also change the TFTP transfer port. If you have more than one arduinos
 * with ethernet behind your router that you want to program from outside your local
 * network you need a unique value for each one value. The initial negotiation of tftp still
 * happens at port [69]. You will also need to forwards these ports from your router.
 * The value set below is the built-in default [46969]. */
word port = 46970;
/* This is the "password" for the reset server in case you want to reset your Arduino
 * remotely. This setting has no effect on the bootloader itself. Password can be 36 characters
 * long, at maximum. Any string longer than 36 characters will be truncated.
 * Spaces should not be used */
String password = "r4nd0m_p4ss";

/* Preset for Arduino Ethernet.
 * For Arduino with Ethernet Shield set this to 13 */
int ledpin = 9;

void setup()
{
	/* Write the new settings values to EEPROM */
	NetEEPROM.writeNet(mac, ip, gateway, subnet);
	/* Set the TFTP data transfer port in EEPROM. Change it only if you need to */
	//NetEEPROM.writePort(port);
	/* Write Reset Server password in EEPROM */
	NetEEPROM.writePass(password);
	/* Set image status to bad, so upon reboot the bootloader won't load the previous sketch */
	NetEEPROM.writeImgBad();

	pinMode(ledpin, OUTPUT);
	/* Timeout and reset after 4 seconds */
	wdt_enable(WDTO_4S);
}


void loop()
{
	/* Blink an LED on pin defined above rapidly if present
	 * to indicate the settings have been stored in EEPROM. */
	digitalWrite(ledpin, HIGH);
	delay(500);
	digitalWrite(ledpin, LOW);
	delay(500);
	/* 1 Hz blinking continues until timer (which was started
	 * in "setup") forces reset and this sketch then is invalid. */
}
