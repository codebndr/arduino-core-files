#include "Arduino.h"
#include "Serial.h"

HardwareSerial Serial;

HardwareSerial::HardwareSerial() {
}

void HardwareSerial::begin(unsigned long a, uint8_t b) {
  return;
}

void HardwareSerial::end(void) {
  return;
}

int HardwareSerial::available(void) {

  return serialCanGetChar();
}

int HardwareSerial::peek(void) {

  if (have_next_byte)
    return next_byte;
  if (serialCanGetChar()) {
    have_next_byte = 1;
    next_byte = serialGetChar();
    return next_byte;
  }
  return 0;
}

int HardwareSerial::read(void) {

  if (have_next_byte) {
    have_next_byte = 0;
    return next_byte;
  }
  return serialGetChar();
}

int HardwareSerial::availableForWrite(void) {

  return 1;
}

void HardwareSerial::flush(void) {
  return;
}

size_t HardwareSerial::write(uint8_t c) {

  return serialPutChar(c);
}
