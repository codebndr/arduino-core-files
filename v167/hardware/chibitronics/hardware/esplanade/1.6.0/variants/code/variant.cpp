/*
  Copyright (c) 2016 Chibitronics.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

#include "app.h"
#include "Arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Variables provided by the linker */
extern uint32_t _textdata;
extern uint32_t _data;
extern uint32_t _edata;
extern uint32_t _bss_start;
extern uint32_t _bss_end;
extern uint32_t __init_array_start;
extern uint32_t __init_array_end;
extern uint32_t __heap_base__;
extern uint32_t __heap_end__;

__attribute__((naked, noreturn))
void Esplanade_Main(void) {

  setup();

  while (1) {
    runCallbacks();
    loop();
  }
}

__attribute__ ((used, section(".progheader")))
struct app_header app_header = {
  .data_load_start  = &_textdata,
  .data_start       = &_data,
  .data_end         = &_edata,
  .bss_start        = &_bss_start,
  .bss_end          = &_bss_end,
  .entry            = Esplanade_Main,
  .magic            = APP_MAGIC,
  .version          = APP_VERSION,
  .const_start      = &__init_array_start,
  .const_end        = &__init_array_end,
  .heap_start       = &__heap_base__,
  .heap_end         = &__heap_end__,
};

#ifdef __cplusplus
}
#endif

