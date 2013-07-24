#ifndef EthernetReset_h
#define EthernetReset_h

#include <avr/pgmspace.h>
#include <avr/wdt.h>
#include <string.h>
#include <Arduino.h>
#include <NewEEPROM.h>
#include <NetEEPROM.h>
#include <SPI.h>
#include <Ethernet.h>
#include <EthernetServer.h>
#include <EthernetClient.h>

#define pgm_uchar(name)   static const prog_uchar name[] PROGMEM

#define DEBUG
#ifdef DEBUG
	#define DBG(c) c
#else
	#define DBG(c)
#endif

class EthernetReset
{
	private:
		EthernetServer  * _server;
		EthernetClient _client;
		char _path[20];

		void stdResponce(char* msg);
		void watchdogReset();
		void stop(void);

	public:
		EthernetReset(int port);
		//~EthernetReset();

		void begin(void);
		bool check(void);
};

#endif
