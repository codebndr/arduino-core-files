/*
 * ReadNetworkSettings
 *
 *
 */

#include <NewEEPROM.h>
#include <NetEEPROM.h>

/* Preset for Arduino Ethernet.
 * For Arduino with Ethernet Shield set this to 13 */
int ledpin = 9;

void setup()
{
	// Initialize serial and wait for port to open:
	Serial.begin(9600);
	/* Wait for serial port to connect. Needed for Leonardo only
	 * but breaks compilation on Arduino 1.0. Leonardo is not
	 * supported by the bootloader yet */
	//while(!Serial) {
	//	;
	//}

	/* Print the network settings to serial. Baud rate is 9600 */
	NetEEPROM.printAll(&Serial);
	/* If you want to invalidate the image after first run, uncomment this
	 * Because Duemilanove doesn't have auto-reset, don't uncomment this or
	 * you will invalidate the image before you open the serial console */
	//neteeprom.WriteImgBad();
	pinMode(ledpin, OUTPUT);
}

void loop()
{
	/* Blink an LED on pin defined above rapidly if present
	 * to indicate the settings have been read in EEPROM. */
	digitalWrite(ledpin, HIGH);
	delay(500);
	digitalWrite(ledpin, LOW);
	delay(500);
}
