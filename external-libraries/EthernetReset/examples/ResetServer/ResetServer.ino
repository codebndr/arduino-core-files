/*
 Reset Web Server

 A simple sketch that creates 2 web servers on Arduino. The first one on port 80 is used
 for showing the values of the analog pins and it is the standard example found in the Arduino
 wiki. The second one run on the same port the Ariadne bootloader uses for uploading the sketch
 to the Arduino, in this case the standard 46969. This server is used for remote resetting and
 reprogramming thourgh a GET request to specific URLs.
 * http://{ip}/{reset_path}/reset
 * http://{ip}/{reset_path}/reprogram
 The first on will do a normal reset and after the bootloader times out the existing sketch
 will be ran. The second one will invalidate the existing sketch so the bootloader won't time out.
 {reset_path} is used instead of a password. If the path is correct you can access the commands
 "reset" and "reprogram". That is why you should pay extra attention to not let that path in your
 sketch if want to show it to the world. This is not as secure as a username and a password but
 it is more space efficient.

 Circuit:
 * Ethernet shield attached to pins 10, 11, 12, 13
 * Analog inputs attached to pins A0 through A5 (optional)

 created 14 Sep 2012
 by Stelios Tsampas

 */

#include <NewEEPROM.h>
#include <NetEEPROM.h>
#include <SPI.h>
#include <EthernetServer.h>
#include <EthernetClient.h>
#include <EthernetReset.h>

/* Create the reset server. This way your reser server will be at the port you
 * have speciefied in the bootloader for remote uploading. For more information on that
 * look at the "NetEEPROM" library in the "WriteNetworkSettings" sketch.
 * If you want to use your own port, create the object as this
 * "EthernetReset reset(reset_path, port);" where port is a number, i.e. 81 */
EthernetReset resetServer(80);
// constants won't change. Used here to 
// set pin numbers:
const int ledPin = 9; // the number of the LED pin

// Variables will change:
int ledState = LOW; // ledState used to set the LED
long previousMillis = 0; // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000; // interval at which to blink (milliseconds)
void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(9600);
	/* For now the Arduino EthShield and the server are being configured using the
	 * settings already stored in the EEPROM and are the same with the ones for Ariadne bootloader.
	 * This means that you *MUST* have updated the network settings on your Arduino with the
	 * "WriteNetworkSettings" sketch.
	 * The "begin()" command takes care of everything, from initializing the EthShield to
	 * starting the web server for resetting. This is why you should always start it before any other
	 * server you might want to have */
	resetServer.begin();
        pinMode(ledPin, OUTPUT);
}


void loop()
{
	/* After the reset server is running the only thing needed is this command at the start of
	 * the "loop()" function in your sketch and it will take care of checking for any reset or
	 * reprogram requests */
       resetServer.check();
       unsigned long currentMillis = millis();

	if (currentMillis - previousMillis > interval)
	{
		// save the last time you blinked the LED 
		previousMillis = currentMillis;

		// if the LED is off turn it on and vice-versa:
		if (ledState == LOW) ledState = HIGH;
		else ledState = LOW;

		// set the LED with the ledState of the variable:
		digitalWrite(ledPin, ledState);
	}
}
