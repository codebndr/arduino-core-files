#include "WebSerial.h"
#include <Ethernet.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>

char WebSerial::_receive_buffer[_WS_MAX_RX_BUFF]; 
volatile uint8_t WebSerial::_receive_buffer_tail = 0;
volatile uint8_t WebSerial::_receive_buffer_head = 0;

char WebSerial::_transmit_buffer[_WS_MAX_TX_BUFF]; 
volatile uint8_t WebSerial::_transmit_buffer_tail = 0;

WebSerial *WebSerial::active_object = 0;

void onConnect(WebSocket &socket)
{
}
void onData(WebSocket &socket, char* dataString, byte frameLength)
{
  if( strncmp("codebender.cc_heartbeat_req", dataString, strlen("codebender.cc_heartbeat_req")) == 0 
  		&& strlen("codebender.cc_heartbeat_req") == frameLength)
  	{
  	socket.send("codebender.cc_heartbeat_res", strlen("codebender.cc_heartbeat_res"));
  	}
  else
  	{
	WebSerial::active_object -> recv(dataString, frameLength);
	}
}
void onDisconnect(WebSocket &socket)
{
}

void WebSerial::loop()
{
	_webSocket->listen();
	flush();
}
 
WebSerial::WebSerial(uint8_t *mac, IPAddress ip)
{
	_webSocket = new WebSocket();
	_webSocket->registerConnectCallback(&onConnect);
	_webSocket->registerDataCallback(&onData);
	_webSocket->registerDisconnectCallback(&onDisconnect); 
	active_object = this;
	_mac = mac;
	_ip = ip;
}

void WebSerial::recv(char *data, uint8_t len)
{
for (int i=0;i<len;i++)
	{
	_receive_buffer[_receive_buffer_tail] = *(data+i); // save new byte
    _receive_buffer_tail = (_receive_buffer_tail + 1) % _WS_MAX_RX_BUFF;
	}	
}

void WebSerial::begin()
{
	Ethernet.begin(_mac,_ip);
	_webSocket->begin();
    cli(); 
    TCCR1A = 0;
    TCCR1B = 0;
    TIMSK1 = (1 << TOIE1);
    TCCR1B |= (1 << CS11);
    sei();
}

void WebSerial::begin(unsigned long baud)
{	
	begin();
}

ISR(TIMER1_OVF_vect)        
{
	WebSerial::active_object->loop();
}

void WebSerial::begin(unsigned long baud, uint8_t dummy)
{
	begin(baud);
}
void WebSerial::end()
{
	WebSerial::active_object = NULL;
}
int WebSerial::available(void)
 {    
  return (_receive_buffer_tail + _WS_MAX_RX_BUFF - _receive_buffer_head) % _WS_MAX_RX_BUFF; 	
 }
 
int WebSerial::peek(void)
{
//Empty buffer?
  if (_receive_buffer_head == _receive_buffer_tail)
    return -1;

  // Read from "head"
  return _receive_buffer[_receive_buffer_head];
	
}
int WebSerial::read(void)
{
//Empty buffer?
  if (_receive_buffer_head == _receive_buffer_tail)
    return -1;

  // Read from "head"
  uint8_t d = _receive_buffer[_receive_buffer_head]; // grab next byte
  _receive_buffer_head = (_receive_buffer_head + 1) % _WS_MAX_RX_BUFF;
  return d;
}

void WebSerial::flush(void)
{
	if(_transmit_buffer_tail>0)
		{
		_webSocket->send(&_transmit_buffer[0], _transmit_buffer_tail);
		_transmit_buffer_tail=0;
		}
}

size_t WebSerial::write(uint8_t c)
{
 	write(&c,1);
	return(1);
}

size_t WebSerial::write(const uint8_t *buffer, size_t size)
{
 
 for (int i=0;i<size;i++)
	{
	_transmit_buffer[_transmit_buffer_tail] = *(buffer+i); // save new byte
	_transmit_buffer_tail = (_transmit_buffer_tail + 1);
	if (_transmit_buffer_tail== _WS_MAX_TX_BUFF)   		
   		break;   		
	}
 

    return size;
}

