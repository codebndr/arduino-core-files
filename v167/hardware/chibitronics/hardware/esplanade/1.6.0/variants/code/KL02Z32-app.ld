/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio.

    This file is part of ChibiOS.

    ChibiOS is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * KL25Z128 memory setup.
 */

ENTRY(Esplanade_Main)

MEMORY
{
  flashcfg :  org = 0x00005900,  len = 0x30
  flash    :  org = 0x00005930,  len = 32k - 0x5930
  osram    :  org = 0x1FFFFC00,  len = 1024
  ram      :  org = 0x1FFFFC00 + LENGTH(osram),  len = 4k - LENGTH(osram)
}

__ram_start__           = ORIGIN(ram);
__ram_size__            = LENGTH(ram);
__ram_end__             = __ram_start__ + __ram_size__;

SECTIONS
{
  . = 0x5900;

  .hdr : ALIGN(4) SUBALIGN(4)
  {
    KEEP(*(.progheader))
  } > flashcfg

  _text = .;

  constructors : ALIGN(4) SUBALIGN(4)
  {
    PROVIDE(__init_array_start = .);
    KEEP(*(SORT(.init_array.*)))
    KEEP(*(.init_array))
    PROVIDE(__init_array_end = .);
  } > flash

  destructors : ALIGN(4) SUBALIGN(4)
  {
    PROVIDE(__fini_array_start = .);
    KEEP(*(.fini_array))
    KEEP(*(SORT(.fini_array.*)))
    PROVIDE(__fini_array_end = .);
  } > flash

  .text : ALIGN(4) SUBALIGN(4)
  {
    *(.text .stub .text.* .gnu.linkonce.t.*)
    KEEP(*(SORT(.chibi_list*)));
    *(.rodata)
    *(.rodata.*)
  } > flash

  .ARM.extab :
  {
    *(.ARM.extab* .gnu.linkonce.armextab.*)
  } > flash

  .ARM.exidx : {
    PROVIDE(__exidx_start = .);
    *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    PROVIDE(__exidx_end = .);
  } > flash

  .eh_frame_hdr :
  {
    *(.eh_frame_hdr)
  } > flash

  .eh_frame : ONLY_IF_RO
  {
    *(.eh_frame)
  } > flash

  .textalign : ONLY_IF_RO
  {
    . = ALIGN(8);
  } > flash

  _etext = .;
  _textdata = _etext;

  .data :
  {
    . = ALIGN(4);
    PROVIDE(_data = .);
    *(.data .data.* .gnu.linkonce.d.*)
    . = ALIGN(4);
    *(.ramtext)
    . = ALIGN(4);
    PROVIDE(_edata = .);
  } > ram AT > flash

  . = ALIGN(4);

  .flasheeprom (NOLOAD) : ALIGN(1024)
  {
    *(.flasheeprom)
  } > flash

  .bss :
  {
    . = ALIGN(4);
    PROVIDE(_bss_start = .);
    *(.bss .bss.* .gnu.linkonce.b.*)
    . = ALIGN(4);
    *(COMMON)
    . = ALIGN(4);
    PROVIDE(_bss_end = .);
  } > ram

  PROVIDE(end = .);
  _end            = .;

  /DISCARD/ : {
    *(.note.GNU-stack)
    *(.gnu_debuglink)
    *(.note.gnu.build-id)
    *(.note.gnu.build-id.*);
    *(.glue_7t)
    *(.glue_7)
    *(.gcc*)
    *(.interp)
  }

  /* ld.bfd will segfault without these */
  .rel.plt :
  {
    . = ALIGN(4);
  }
  .got.plt :
  {
    . = ALIGN(4);
  }
}

/* RAM region to be used for Main stack. This stack accommodates the processing
      of all exceptions and interrupts*/
REGION_ALIAS("MAIN_STACK_RAM", ram);

/* RAM region to be used for the process stack. This is the stack used by
      the main() function.*/
REGION_ALIAS("PROCESS_STACK_RAM", ram);

/* RAM region to be used for data segment.*/
REGION_ALIAS("DATA_RAM", ram);

/* RAM region to be used for BSS segment.*/
REGION_ALIAS("BSS_RAM", ram);

__heap_base__   = _end;
__heap_end__    = __ram_end__;
