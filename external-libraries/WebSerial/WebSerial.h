/* 

WebSerial Library for Arduino

Implementation of an over Ethernet (WebSerial) Monitor,equivalent to Serial Monitor, using Websockets.

Created by Alexandros Baltas, 2013.
www.codebender.cc

*/

#ifndef WebSerial_h
#define WebSerial_h

#define _WS_MAX_RX_BUFF 128 // RX buffer size
#define _WS_MAX_TX_BUFF 128 // TX buffer size

#include <WebSocket.h>
#include <inttypes.h>



class WebSerial : public Stream
{
private:
    WebSocket *_webSocket;
	
	static char _receive_buffer[_WS_MAX_RX_BUFF]; 
	static volatile uint8_t _receive_buffer_tail;
	static volatile uint8_t _receive_buffer_head;

	static char _transmit_buffer[_WS_MAX_TX_BUFF]; 
	static volatile uint8_t _transmit_buffer_tail;

	uint8_t *_mac;
	IPAddress _ip;

public:
 
	static WebSerial *active_object;
	WebSerial(uint8_t *mac, IPAddress ip);
	
	void recv(char *data, uint8_t len);
	void loop();
	
	void begin();
    void begin(unsigned long);
    void begin(unsigned long, uint8_t);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
	size_t write(const uint8_t *buffer, size_t size);
	using Print::write;
    };
    
#endif