#include "Arduino.h"
#include "ChibiOS.h"
#include "EEPROM.h"

static virtual_timer_t my_timer;

__attribute__((section(".flasheeprom")))
static const uint8_t *flash_area;

__attribute__((aligned(4)))
static uint8_t flash_backing[E2END + 1];

static enum {
  STATE_EMPTY,
  STATE_DIRTY,
  STATE_CLEAN,
} flash_state;

void eeprom_flush(void *arg) {
  (void)arg;

  flashErase(((uint32_t)&flash_area) / 1024, 1);
  flashWrite((uint8_t *)flash_backing, (const uint8_t *)&flash_area,
             sizeof(flash_backing));
  flash_state = STATE_CLEAN;
}

uint8_t eeprom_read_byte(uint8_t *index) {
  return ((const uint8_t *)&flash_area)[(uint32_t)index];
}

uint8_t eeprom_write_byte(uint8_t *index, uint8_t val) {
  if (((uint32_t)index) >= sizeof(flash_backing))
    return 1;

  if (flash_state == STATE_EMPTY)
    memcpy(flash_backing, (const void *)&flash_area, sizeof(flash_backing));

  flash_backing[(uint32_t)index] = val;
  flash_state = STATE_DIRTY;

  setTimer(&my_timer, MS2ST(30), eeprom_flush, NULL);

  return 0;
}
