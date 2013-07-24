#include <WebSerial.h>
#include <WebSocket.h>
#include <Ethernet.h>
#include <SPI.h>
/*
	WebSerialEcho
	
	Echoes what is sent back, through WebSerial.
	WebSerial works over Ethernet so Arduino Ethernet, or Ethernet shield needed.

	Created in 2013
	by Alexandros Baltas
	www.codebender.cc
	
*/

byte mac[] = { 0x90, 0xA2, 0xDA, 0x00, 0x0D, 0x04 }; // MAC address of the Arduino. Needed for WebSerial.
byte ip[] = { 192, 168, 1 , 100 };	// IP Address of the Arduino.
WebSerial mySerial(mac, ip); // Initialises WebSerial with mac and ip.
byte receivedByte=0; // For the incoming data

void setup() 
{	
	mySerial.begin(); // Begins WebSerial
}	
	
	
void loop() 
{	
	if(mySerial.available()>0) // Returns number of bytes in the RX buffer.
		{
		// When you have incoming data
		receivedByte = mySerial.read(); // Read the byte
		mySerial.print((char)receivedByte); // And send it back
	}
}