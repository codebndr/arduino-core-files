#include "Arduino-types.h"
extern "C" {
    __attribute__((naked))
    void __aeabi_atexit(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __cxa_atexit(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void atexit(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void _atexit(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __cxa_finalize(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_d2f(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_f2d(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_h2f(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_h2f_alt(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_f2h(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_f2h_alt(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_d2h(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void __aeabi_d2h_alt(void) {
      asm("svc #0");
    }
    __attribute__((naked))
    void getSyscallABI(void) {
      asm("svc #1");
    }
    __attribute__((naked))
    void getSyscallAddr(void) {
      asm("svc #2");
    }
    __attribute__((naked))
    void memcpy(void) {
      asm("svc #3");
    }
    __attribute__((naked))
    void __aeabi_memcpy8(void) {
      asm("svc #3");
    }
    __attribute__((naked))
    void __aeabi_memcpy4(void) {
      asm("svc #3");
    }
    __attribute__((naked))
    void __aeabi_memcpy(void) {
      asm("svc #3");
    }
    __attribute__((naked))
    void memmove(void) {
      asm("svc #4");
    }
    __attribute__((naked))
    void __aeabi_memmove8(void) {
      asm("svc #4");
    }
    __attribute__((naked))
    void __aeabi_memmove4(void) {
      asm("svc #4");
    }
    __attribute__((naked))
    void __aeabi_memmove(void) {
      asm("svc #4");
    }
    __attribute__((naked))
    void memset(void) {
      asm("svc #5");
    }
    __attribute__((naked))
    void __aeabi_memset8(void) {
      asm("svc #5");
    }
    __attribute__((naked))
    void __aeabi_memset4(void) {
      asm("svc #5");
    }
    __attribute__((naked))
    void __aeabi_memset(void) {
      asm("svc #5");
    }
    __attribute__((naked))
    void memclr(void) {
      asm("svc #6");
    }
    __attribute__((naked))
    void __aeabi_memclr8(void) {
      asm("svc #6");
    }
    __attribute__((naked))
    void __aeabi_memclr4(void) {
      asm("svc #6");
    }
    __attribute__((naked))
    void __aeabi_memclr(void) {
      asm("svc #6");
    }
    __attribute__((naked))
    void __aeabi_uread4(void) {
      asm("svc #7");
    }
    __attribute__((naked))
    void __aeabi_uwrite4(void) {
      asm("svc #8");
    }
    __attribute__((naked))
    void __aeabi_uread8(void) {
      asm("svc #9");
    }
    __attribute__((naked))
    void __aeabi_idiv(void) {
      asm("svc #10");
    }
    __attribute__((naked))
    void __aeabi_uidiv(void) {
      asm("svc #11");
    }
    __attribute__((naked))
    void __aeabi_idivmod(void) {
      asm("svc #12");
    }
    __attribute__((naked))
    void __aeabi_uidivmod(void) {
      asm("svc #13");
    }
    __attribute__((naked))
    void __aeabi_lmul(void) {
      asm("svc #14");
    }
    __attribute__((naked))
    void __aeabi_ldivmod(void) {
      asm("svc #15");
    }
    __attribute__((naked))
    void __aeabi_uldivmod(void) {
      asm("svc #16");
    }
    __attribute__((naked))
    void __aeabi_llsl(void) {
      asm("svc #17");
    }
    __attribute__((naked))
    void __aeabi_llsr(void) {
      asm("svc #18");
    }
    __attribute__((naked))
    void __aeabi_lasr(void) {
      asm("svc #19");
    }
    __attribute__((naked))
    void __aeabi_lcmp(void) {
      asm("svc #20");
    }
    __attribute__((naked))
    void __aeabi_ulcmp(void) {
      asm("svc #21");
    }
    __attribute__((naked))
    void __aeabi_i2f(void) {
      asm("svc #22");
    }
    __attribute__((naked))
    void __aeabi_l2f(void) {
      asm("svc #22");
    }
    __attribute__((naked))
    void __aeabi_i2d(void) {
      asm("svc #23");
    }
    __attribute__((naked))
    void __aeabi_l2d(void) {
      asm("svc #23");
    }
    __attribute__((naked))
    void __aeabi_ui2f(void) {
      asm("svc #24");
    }
    __attribute__((naked))
    void __aeabi_ul2f(void) {
      asm("svc #24");
    }
    __attribute__((naked))
    void __aeabi_ui2d(void) {
      asm("svc #25");
    }
    __attribute__((naked))
    void __aeabi_ul2d(void) {
      asm("svc #25");
    }
    __attribute__((naked))
    void __aeabi_f2iz(void) {
      asm("svc #26");
    }
    __attribute__((naked))
    void __aeabi_f2lz(void) {
      asm("svc #26");
    }
    __attribute__((naked))
    void __aeabi_d2iz(void) {
      asm("svc #27");
    }
    __attribute__((naked))
    void __aeabi_d2lz(void) {
      asm("svc #27");
    }
    __attribute__((naked))
    void __aeabi_f2uiz(void) {
      asm("svc #28");
    }
    __attribute__((naked))
    void __aeabi_f2ulz(void) {
      asm("svc #28");
    }
    __attribute__((naked))
    void __aeabi_d2uiz(void) {
      asm("svc #29");
    }
    __attribute__((naked))
    void __aeabi_d2ulz(void) {
      asm("svc #29");
    }
    __attribute__((naked))
    void __aeabi_cfcmpeq(void) {
      asm("svc #30");
    }
    __attribute__((naked))
    void __aeabi_cdcmpeq(void) {
      asm("svc #31");
    }
    __attribute__((naked))
    void __aeabi_cfcmple(void) {
      asm("svc #32");
    }
    __attribute__((naked))
    void __aeabi_cdcmple(void) {
      asm("svc #33");
    }
    __attribute__((naked))
    void __aeabi_cfrcmple(void) {
      asm("svc #34");
    }
    __attribute__((naked))
    void __aeabi_cdcrmple(void) {
      asm("svc #35");
    }
    __attribute__((naked))
    void __aeabi_fcmpeq(void) {
      asm("svc #36");
    }
    __attribute__((naked))
    void __aeabi_dcmpeq(void) {
      asm("svc #37");
    }
    __attribute__((naked))
    void __aeabi_fcmplt(void) {
      asm("svc #38");
    }
    __attribute__((naked))
    void __aeabi_dcmplt(void) {
      asm("svc #39");
    }
    __attribute__((naked))
    void __aeabi_fcmple(void) {
      asm("svc #40");
    }
    __attribute__((naked))
    void __aeabi_dcmple(void) {
      asm("svc #41");
    }
    __attribute__((naked))
    void __aeabi_fcmpge(void) {
      asm("svc #42");
    }
    __attribute__((naked))
    void __aeabi_dcmpge(void) {
      asm("svc #43");
    }
    __attribute__((naked))
    void __aeabi_fcmpgt(void) {
      asm("svc #44");
    }
    __attribute__((naked))
    void __aeabi_dcmpgt(void) {
      asm("svc #45");
    }
    __attribute__((naked))
    void __aeabi_fcmpun(void) {
      asm("svc #46");
    }
    __attribute__((naked))
    void __aeabi_dcmpun(void) {
      asm("svc #47");
    }
    __attribute__((naked))
    void __aeabi_fadd(void) {
      asm("svc #48");
    }
    __attribute__((naked))
    void __aeabi_dadd(void) {
      asm("svc #49");
    }
    __attribute__((naked))
    void __aeabi_fdiv(void) {
      asm("svc #50");
    }
    __attribute__((naked))
    void __adabi_ddiv(void) {
      asm("svc #51");
    }
    __attribute__((naked))
    void __aeabi_fmul(void) {
      asm("svc #52");
    }
    __attribute__((naked))
    void __aeabi_dmul(void) {
      asm("svc #53");
    }
    __attribute__((naked))
    void __aeabi_frsub(void) {
      asm("svc #54");
    }
    __attribute__((naked))
    void __aeabi_drsub(void) {
      asm("svc #55");
    }
    __attribute__((naked))
    void __aeabi_fsub(void) {
      asm("svc #56");
    }
    __attribute__((naked))
    void __aeabi_dsub(void) {
      asm("svc #57");
    }
    __attribute__((naked))
    void float2str(void) {
      asm("svc #58");
    }
    __attribute__((naked))
    void str2float(void) {
      asm("svc #59");
    }
    __attribute__((naked))
    void cos(void) {
      asm("svc #60");
    }
    __attribute__((naked))
    void cosf(void) {
      asm("svc #60");
    }
    __attribute__((naked))
    void sin(void) {
      asm("svc #61");
    }
    __attribute__((naked))
    void sinf(void) {
      asm("svc #61");
    }
    __attribute__((naked))
    void tan(void) {
      asm("svc #62");
    }
    __attribute__((naked))
    void tanf(void) {
      asm("svc #62");
    }
    __attribute__((naked))
    void atan2(void) {
      asm("svc #63");
    }
    __attribute__((naked))
    void atan2f(void) {
      asm("svc #63");
    }
    __attribute__((naked))
    void exp(void) {
      asm("svc #64");
    }
    __attribute__((naked))
    void fexp(void) {
      asm("svc #64");
    }
    __attribute__((naked))
    void log2(void) {
      asm("svc #65");
    }
    __attribute__((naked))
    void log2f(void) {
      asm("svc #65");
    }
    __attribute__((naked))
    void sqrt(void) {
      asm("svc #66");
    }
    __attribute__((naked))
    void sqrtf(void) {
      asm("svc #66");
    }
    __attribute__((naked))
    void strncpy(void) {
      asm("svc #67");
    }
    __attribute__((naked))
    void strcpy(void) {
      asm("svc #68");
    }
    __attribute__((naked))
    void strcmp(void) {
      asm("svc #69");
    }
    __attribute__((naked))
    void strncmp(void) {
      asm("svc #70");
    }
    __attribute__((naked))
    void strchr(void) {
      asm("svc #71");
    }
    __attribute__((naked))
    void strlen(void) {
      asm("svc #72");
    }
    __attribute__((naked))
    void snprintf(void) {
      asm("svc #73");
    }
    __attribute__((naked))
    void ltoa(void) {
      asm("svc #74");
    }
    __attribute__((naked))
    void utoa(void) {
      asm("svc #75");
    }
    __attribute__((naked))
    void ultoa(void) {
      asm("svc #76");
    }
    __attribute__((naked))
    void itoa(void) {
      asm("svc #77");
    }
    __attribute__((naked))
    void strtol(void) {
      asm("svc #78");
    }
    __attribute__((naked))
    void strtoul(void) {
      asm("svc #79");
    }
    __attribute__((naked))
    void printf(void) {
      asm("svc #80");
    }
    __attribute__((naked))
    void tfp_printf(void) {
      asm("svc #80");
    }
    __attribute__((naked))
    void serialPutChar(void) {
      asm("svc #81");
    }
    __attribute__((naked))
    void serialGetChar(void) {
      asm("svc #82");
    }
    __attribute__((naked))
    void serialCanGetChar(void) {
      asm("svc #83");
    }
    __attribute__((naked))
    void free(void) {
      asm("svc #84");
    }
    __attribute__((naked))
    void malloc(void) {
      asm("svc #85");
    }
    __attribute__((naked))
    void realloc(void) {
      asm("svc #86");
    }
    __attribute__((naked))
    void ledShow(void) {
      asm("svc #87");
    }
    __attribute__((naked))
    void attachFastInterrupt(void) {
      asm("svc #95");
    }
    __attribute__((naked))
    void detachFastInterrupt(void) {
      asm("svc #97");
    }
    __attribute__((naked))
    void map(void) {
      asm("svc #108");
    }
    __attribute__((naked))
    void i2cTransceive(void) {
      asm("svc #111");
    }
    __attribute__((naked))
    void i2cSetupSlave(void) {
      asm("svc #112");
    }
    __attribute__((naked))
    void usbSetup(void) {
      asm("svc #113");
    }
    __attribute__((naked))
    void usbSend(void) {
      asm("svc #114");
    }
    __attribute__((naked))
    void usbReceive(void) {
      asm("svc #115");
    }
    __attribute__((naked))
    void usbAttach(void) {
      asm("svc #116");
    }
    __attribute__((naked))
    void usbDetach(void) {
      asm("svc #117");
    }
    __attribute__((naked))
    void createThread(void) {
      asm("svc #118");
    }
    __attribute__((naked))
    void exitThread(void) {
      asm("svc #119");
    }
    __attribute__((naked))
    void suspendThread(void) {
      asm("svc #120");
    }
    __attribute__((naked))
    void suspendThreadTimeout(void) {
      asm("svc #121");
    }
    __attribute__((naked))
    void resumeThread(void) {
      asm("svc #122");
    }
    __attribute__((naked))
    void yieldThread(void) {
      asm("svc #123");
    }
    __attribute__((naked))
    void threadSleep(void) {
      asm("svc #124");
    }
    __attribute__((naked))
    void threadSleepUntil(void) {
      asm("svc #125");
    }
    __attribute__((naked))
    void waitThread(void) {
      asm("svc #126");
    }
    __attribute__((naked))
    void setTimer(void) {
      asm("svc #127");
    }
    __attribute__((naked))
    void resetTimer(void) {
      asm("svc #128");
    }
    __attribute__((naked))
    void runCallbacks(void) {
      asm("svc #129");
    }
    __attribute__((naked))
    void lockSystem(void) {
      asm("svc #130");
    }
    __attribute__((naked))
    void unlockSystem(void) {
      asm("svc #131");
    }
    __attribute__((naked))
    void lockSystemFromISR(void) {
      asm("svc #132");
    }
    __attribute__((naked))
    void unlockSystemFromISR(void) {
      asm("svc #133");
    }
    __attribute__((naked))
    void mutexInit(void) {
      asm("svc #134");
    }
    __attribute__((naked))
    void mutexLock(void) {
      asm("svc #135");
    }
    __attribute__((naked))
    void mutexTryLock(void) {
      asm("svc #136");
    }
    __attribute__((naked))
    void mutexUnlock(void) {
      asm("svc #137");
    }
    __attribute__((naked))
    void flashErase(void) {
      asm("svc #138");
    }
    __attribute__((naked))
    void flashWrite(void) {
      asm("svc #139");
    }
    __attribute__((naked))
    void __gnu_thumb1_case_sqi(void) {
      asm("svc #140");
    }
    __attribute__((naked))
    void __gnu_thumb1_case_uqi(void) {
      asm("svc #141");
    }
    __attribute__((naked))
    void __gnu_thumb1_case_uhi(void) {
      asm("svc #142");
    }
    __attribute__((naked))
    void doSudo(void) {
      asm("svc #143");
    }
    __attribute__((naked))
    void setSerialSpeed(void) {
      asm("svc #144");
    }
};
  __attribute__((naked))
  void pinMode(int pin, enum pin_mode mode) {
    asm("svc #88");
  }
  __attribute__((naked))
  void digitalWrite(int pin, int value) {
    asm("svc #89");
  }
  __attribute__((naked))
  int digitalRead(int pin) {
    asm("svc #90");
  }
  __attribute__((naked))
  void analogWrite(int pin, int value) {
    asm("svc #91");
  }
  __attribute__((naked))
  void analogReference(enum analog_reference_type type) {
    asm("svc #92");
  }
  __attribute__((naked))
  int analogRead(int pin) {
    asm("svc #93");
  }
  __attribute__((naked))
  void attachInterrupt(int irq, void (*func)(void), enum irq_mode mode) {
    asm("svc #94");
  }
  __attribute__((naked))
  void detachInterrupt(int irq) {
    asm("svc #96");
  }
  __attribute__((naked))
  void tone(int pin, unsigned int frequency, unsigned long duration) {
    asm("svc #98");
  }
  __attribute__((naked))
  void noTone(int pin) {
    asm("svc #99");
  }
  __attribute__((naked))
  void shiftOut(int dataPin, int clockPin, int bitOrder, uint8_t val) {
    asm("svc #100");
  }
  __attribute__((naked))
  uint8_t shiftIn(int dataPin, int clockPin, int bitOrder) {
    asm("svc #101");
  }
  __attribute__((naked))
  unsigned long pulseIn(int pin, uint8_t state, unsigned long timeout) {
    asm("svc #102");
  }
  __attribute__((naked))
  unsigned long pulseInLong(int pin, uint8_t state, unsigned long timeout) {
    asm("svc #103");
  }
  __attribute__((naked))
  unsigned long millis(void) {
    asm("svc #104");
  }
  __attribute__((naked))
  unsigned long micros(void) {
    asm("svc #105");
  }
  __attribute__((naked))
  void delay(unsigned long msecs) {
    asm("svc #106");
  }
  __attribute__((naked))
  void delayMicroseconds(unsigned int usecs) {
    asm("svc #107");
  }
  __attribute__((naked))
  long random(long min, long max) {
    asm("svc #109");
  }
  __attribute__((naked))
  long randomSeed(unsigned long seed) {
    asm("svc #110");
  }
