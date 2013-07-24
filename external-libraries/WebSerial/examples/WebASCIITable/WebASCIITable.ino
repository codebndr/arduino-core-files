#include <WebSerial.h>
#include <WebSocket.h>
#include <Ethernet.h>
#include <SPI.h>
  
/* 
	WebASCIITable

	Modified ASCIITable Communications example, in order to work with WebSerial.
	Prints printable ASCII characters in all possible formats:
	-Raw binary
	-ASCII-encoded decimal
	-ASCII-encoded hex
	-ASCII-encoded octal 
	-ASCII-encoded binary.
	
	WebSerial works over Ethernet so Arduino Ethernet, or Ethernet shield needed.

	Created in 2013
	by Alexandros Baltas
	www.codebender.cc
	
*/
	  
byte mac[] = { 0x90, 0xA2, 0xDA, 0x00, 0x0D, 0x04 }; // MAC address of the Arduino. Needed for WebSerial.
byte ip[] = { 192, 168, 1 , 100 };	// IP Address of the Arduino.
WebSerial mySerial(mac, ip); // Initialises WebSerial with mac and ip.
int thisByte=33; // First visible ASCII character (!) .

void setup() 
{	
	mySerial.begin(); // Begins WebSerial
}	
	
  
void loop()
{

  
	mySerial.write(thisByte);    
	// prints value unaltered, i.e. the raw binary version of the 
    // byte. The serial monitor interprets all bytes as 
    // ASCII, so 33, the first number,  will show up as '!' 

	mySerial.print(", dec: "); 
	// prints value as string as an ASCII-encoded decimal (base 10). 
	// Decimal is the  default format for WebSerial.print() and WebSerial.println(),
	// so no modifier is needed:
	mySerial.print(thisByte); 
	
	// But you can declare the modifier for decimal if you want to.
    //this also works if you uncomment it:

    // WebSerial.print(thisByte, DEC);       

	mySerial.print(", hex: "); 
	// prints value as string in hexadecimal (base 16):
	mySerial.print(thisByte, HEX);     

	mySerial.print(", oct: "); 
	// prints value as string in octal (base 8);
	mySerial.print(thisByte, OCT);     

	mySerial.print(", bin: "); 
	// prints value as string in binary (base 2) 
	// also prints ending line break:
	mySerial.println(thisByte, BIN);   

	delay(200); //delay for 200ms before printing the next character
	thisByte++; //proceed to the next one
	
	// if printed the last printable character (126 is '~') start over.
	if(thisByte == 127) 
		{
		thisByte = 33;
		}
		
	
}