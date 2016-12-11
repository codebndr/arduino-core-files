#ifndef __ARDUINO_KOSAGI_H__
#define __ARDUINO_KOSAGI_H__

#include "Arduino-types.h"
#include "WString.h"
#include "Serial.h"

#define double float

/* Program lifetime */
#if !defined(ARDUINO_OS) /* These are not syscalls */
#ifdef __cplusplus
extern "C" {
#endif
void setup(void);
void init(void);
void runCallbacks(void);
void loop(void);

typedef uint32_t size_t;
size_t strlen(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);
char *strstr(const char *haystack, const char *needle);
void *memcpy(void *dest, const void *src, size_t n);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
float atof(const char *nptr);
int atoi(const char *nptr);
long atol(const char *nptr);
int printf(const char *format, ...);
int printf(const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);

#ifdef __cplusplus
};
#endif
#endif /* !ARDUINO_OS */

/* Undef this, as there's no difference between the types of memory */
#define PROGMEM

/* Generic IO */
void pinMode(int pin, enum pin_mode mode);

/* Digital IO */
void digitalWrite(int pin, int value);
int digitalRead(int pin);

/* Analog IO */
void analogWrite(int pin, int value);
void analogReference(enum analog_reference_type type);
int analogRead(int pin);

/* Interrupt handling */
void attachInterrupt(int irq, void (*func)(void), enum irq_mode mode);
void detachInterrupt(int irq);

/* Tone production */
void tone(int pin, unsigned int frequency, unsigned long duration
#if !defined(ARDUINO_OS) && defined(__cplusplus)
    = 0
#endif /* !ARDUINO_OS */
);
void noTone(int pin);

/* Simple communication protocols */
void shiftOut(int dataPin, int clockPin, int bitOrder, uint8_t val);
uint8_t shiftIn(int dataPin, int clockPin, int bitOrder);
unsigned long pulseIn(int pin, uint8_t state, unsigned long timeout
#if !defined(ARDUINO_OS) && defined(__cplusplus)
    = 1000000
#endif /* !ARDUINO_OS */
);
unsigned long pulseInLong(int pin, uint8_t state, unsigned long timeout
#if !defined(ARDUINO_OS) && defined(__cplusplus)
    = 1000000
#endif /* !ARDUINO_OS */
);

/* Time */
unsigned long millis(void);
unsigned long micros(void);
void delay(unsigned long msecs);
void delayMicroseconds(unsigned int usecs);

/* Math */
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#ifdef __cplusplus
extern "C" {
#endif
extern int abs(int x);

int serialCanGetChar(void);
int serialGetChar(void);
int serialPutChar(int c);

/* Trig */
double cos(double rad);
double tan(double rad);
double sin(double rad);
long map(long value, long fromLow, long fromHigh, long toLow, long toHigh);
double pow(double base, double exponent);
double sqrt(double x);
#ifdef __cplusplus
};
#endif
#define constrain(amt,low,high) ((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#define round(x)     ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))
#define radians(deg) ((deg)*DEG_TO_RAD)
#define degrees(rad) ((rad)*RAD_TO_DEG)
#define sq(x) ((x)*(x))

/* Characters */
static inline int isSpace(int c) {
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

static inline bool isDigit(int c) {
	return (c >= '0' && c <= '9');
}

static inline bool isHexadecimalDigit(int c) {
	return ((c >= '0' && c <= '9') ||
		(c >= 'a' && c <= 'f') ||
		(c >= 'A' && c <= 'F'));
}

static inline bool isUpperCase(int c) {
	return (c >= 'A' && c <= 'Z');
}

static inline bool isLowerCase(int c) {
	return (c >= 'a' && c <= 'z');
}

static inline bool isAlpha(int c) {
	return isUpperCase(c) || isLowerCase(c);
}

static inline bool isAlphaNumeric(int c) {
	return isAlpha(c) || isDigit(c);
}

static inline int toUpperCase(int c) {
	if (!isLowerCase(c))
		return c;
	return c - ('a' - 'A');
}

static inline int toLowerCase(int c) {
	if (!isUpperCase(c))
		return c;
	return c + ('a' - 'A');
}

static inline bool isAscii(int c) {
  return !(c & 0x80);
}

static inline bool isWhitespace(int c) {
  return (c == ' ') || (c == '\t');
}

static inline bool isControl(int c) {
  return (c >= 0) && (c <= 0xd);
}

static inline bool isPrintable(int c) {
  return ((c >= 0xe) && (c <= 0xff)) || (c == 0xb);
}

static inline bool isGraph(int c) {
  return !isPrintable(c);
}

static inline bool isPunct(int c) {
  return (c >= 0x21) && (c <= 0x7f) && !isAlphaNumeric(c);
}

static inline int toAscii(int c) {
  return c & 0x7f;
}

/* So Random */
long random(long min, long max);
#if !defined(ARDUINO_OS) && defined(__cplusplus)
/* Non OS-version uses overloaded version */
static inline long random(long max) {
  return random(0, max);
}
#endif
long randomSeed(unsigned long seed);

/* Bits and Bytes */
#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))
#define bit(b) (1UL << (b))

#define PTA(x) (0x40 | (x))
#define PTB(x) (0x40 | (32 + x))

#define A0 0x80
#define A1 0x81
#define A2 0x82
#define A3 0x83
#define A4 0x84
#define A5 0x85 /* Temperature sensor */
#define A6 0x86 /* Voltage sensor */
#define A7 0x87 /* VDD voltage value */
#define A8 0x88 /* VCC voltage value */

/* Digital pins */
#define D0 0x00
#define D1 0x01

#define LED_BUILTIN       PTA(12)
#define LED_A2            LED_BUILTIN
#define BUTTON_A1         PTA(9)
#define BUTTON_REC        PTB(1) /* Silkscreened as "Rec" */
#define BUTTON_A3         PTB(13)
#define LED_BUILTIN_RGB   PTA(6)

#define LED_BUILTIN_RED   PTA(5)
#define LED_BUILTIN_GREEN PTB(6)
#define UART_TX           PTB(3)
#define UART_RX           PTB(4)
#define SWD_CLK           PTA(0)
#define SWD_DIO           PTA(2)

/* Interrupts */
#define I2C_IRQ           8
#define SERIAL_IRQ        12
#define ADC_IRQ           15
#define PWM0_IRQ          17
#define PWM1_IRQ          18
#define LPTMR_IRQ         28
#define PORTA_IRQ         30
#define PORTB_IRQ         31

#endif /* __ARDUINO_KOSAGI_H__ */
