/*simple lol shield text lib toprovide full ascii charset. written by Michael Schwarzer
 * TODO: make gplv3 pls!
 * 
 * 
 * if you dont like the font type write your own and share!!!
 * just leave those codes blank ( 0x00 0x00 0x00 0x00 0x00) that arent used!
 * 
 */




#include <avr/pgmspace.h>

#include "Myfont.h"
#include "Charliplexing.h"
#include "Arduino.h"
#include <inttypes.h>

byte la[][5] PROGMEM = {
    /*all ascii codes:*/
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x0 => Blank */
		{0x33,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x2 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x3 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x4 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x5 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x6 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x7 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x8 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x9 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xA => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xB => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xC => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xD => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xE => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0xF => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x10 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x11 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x12 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x13 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x14 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x15 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x16 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x17 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x18 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x19 => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1A => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1B => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1C => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1D => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1E => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x1F => Blank */
		{0x00,0x00,0x00,0x00,0x00}, /* ASCII-Code 0x20 => Space */
		{0x00,0x00,0x4F,0x00,0x00}, /* ASCII-Code 0x21 => ! */
		{0x00,0x07,0x00,0x07,0x00}, /* ASCII-Code 0x22 => " */
		{0x14,0x7F,0x14,0x7F,0x14}, /* ASCII-Code 0x23 => # */
		{0x24,0x2A,0x7F,0x2A,0x12}, /* ASCII-Code 0x24 => $ */
		{0x23,0x13,0x08,0x64,0x62}, /* ASCII-Code 0x25 => % */
		{0x36,0x49,0x55,0x52,0x50}, /* ASCII-Code 0x26 => & */
		{0x00,0x05,0x03,0x00,0x00}, /* ASCII-Code 0x27 => ´ */
		{0x00,0x1C,0x22,0x81,0x00}, /* ASCII-Code 0x28 => { */
		{0x00,0x81,0x22,0x1C,0x00}, /* ASCII-Code 0x29 => } */
		{0x14,0x08,0x3E,0x08,0x14}, /* ASCII-Code 0x2A => * */
		{0x08,0x08,0x3E,0x08,0x08}, /* ASCII-Code 0x2B => + */
		{0x00,0x50,0x30,0x00,0x00}, /* ASCII-Code 0x2C => , */
		{0x08,0x08,0x08,0x08,0x08}, /* ASCII-Code 0x2D => - */
		{0x00,0x60,0x60,0x00,0x00}, /* ASCII-Code 0x2E => . */
		{0x20,0x10,0x08,0x04,0x02}, /* ASCII-Code 0x2F => / */
		{0x3E,0x51,0x49,0x45,0x3E}, /* ASCII-Code 0x30 =>  0 */
		{0x00,0x42,0x7F,0x40,0x00}, /* ASCII-Code 0x31 =>  1 */
		{0x42,0x61,0x51,0x49,0x46}, /* ASCII-Code 0x32 =>  2 */
		{0x21,0x41,0x45,0x4B,0x31}, /* ASCII-Code 0x33 =>  3 */
		{0x18,0x14,0x12,0x7F,0x10}, /* ASCII-Code 0x34 =>  4 */
		{0x27,0x45,0x45,0x45,0x39}, /* ASCII-Code 0x35 =>  5 */
		{0x3C,0x4A,0x49,0x49,0x30}, /* ASCII-Code 0x36 =>  6 */
		{0x01,0x71,0x09,0x05,0x03}, /* ASCII-Code 0x37 =>  7 */
		{0x36,0x49,0x49,0x49,0x36}, /* ASCII-Code 0x38 =>  8 */
		{0x06,0x49,0x49,0x29,0x1E}, /* ASCII-Code 0x39 =>  9 */
		{0x00,0x36,0x36,0x00,0x00}, /* ASCII-Code 0x3A => : */
		{0x00,0x56,0x36,0x00,0x00}, /* ASCII-Code 0x3B => ; */
		{0x08,0x14,0x22,0x41,0x00}, /* ASCII-Code 0x3C => < */		
		{0x14,0x14,0x14,0x14,0x14}, /* ASCII-Code 0x3D => = */		
		{0x41,0x22,0x14,0x08,0x00}, /* ASCII-Code 0x3E => > */
		{0x02,0x01,0x51,0x09,0x06}, /* ASCII-Code 0x3F => ? */
		{0x32,0x49,0x79,0x41,0x3E}, /* ASCII-Code 0x40 => @ */
		{0x7E,0x11,0x11,0x11,0x7E}, /* ASCII-Code 0x41 => A */
		{0x7F,0x49,0x49,0x49,0x36}, /* ASCII-Code 0x42 => B */
		{0x3E,0x41,0x41,0x41,0x22}, /* ASCII-Code 0x43 => C */
		{0x7F,0x41,0x41,0x22,0x1C}, /* ASCII-Code 0x44 => D */
		{0x7F,0x49,0x49,0x49,0x41}, /* ASCII-Code 0x45 => E */
		{0x7F,0x09,0x09,0x09,0x01}, /* ASCII-Code 0x46 => F */
		{0x3E,0x41,0x49,0x49,0x7A}, /* ASCII-Code 0x47 => G */
		{0x7F,0x08,0x08,0x08,0x7F}, /* ASCII-Code 0x48 => H */
		{0x00,0x41,0x7F,0x41,0x00}, /* ASCII-Code 0x49 => I */
		{0x20,0x40,0x41,0x3F,0x01}, /* ASCII-Code 0x4A => J */
		{0x7F,0x08,0x14,0x22,0x41}, /* ASCII-Code 0x4B => K */
		{0x7F,0x40,0x40,0x40,0x40}, /* ASCII-Code 0x4C => L */
		{0x7F,0x02,0x0C,0x02,0x7F}, /* ASCII-Code 0x4D => M */
		{0x7F,0x04,0x08,0x10,0x7F}, /* ASCII-Code 0x4E => N */
		{0x3E,0x41,0x41,0x41,0x3E}, /* ASCII-Code 0x4F => O */
		{0x7F,0x09,0x09,0x09,0x06}, /* ASCII-Code 0x50 => P */
		{0x3E,0x41,0x51,0x21,0x5E}, /* ASCII-Code 0x51 => Q */
		{0x7F,0x09,0x19,0x29,0x46}, /* ASCII-Code 0x52 => R */
		{0x46,0x49,0x49,0x49,0x31}, /* ASCII-Code 0x53 => S */
		{0x01,0x01,0x7F,0x01,0x01}, /* ASCII-Code 0x54 => T */
		{0x3F,0x40,0x40,0x40,0x3F}, /* ASCII-Code 0x55 => U */
		{0x1F,0x20,0x40,0x20,0x1F}, /* ASCII-Code 0x56 => V */
		{0x3F,0x40,0x38,0x40,0x3F}, /* ASCII-Code 0x57 => W */
		{0x63,0x14,0x08,0x14,0x63}, /* ASCII-Code 0x58 => X */
		{0x07,0x08,0x70,0x08,0x07}, /* ASCII-Code 0x59 => Y */
		{0x61,0x51,0x49,0x45,0x43}, /* ASCII-Code 0x5A => Z */
		{0x00,0x7F,0x41,0x41,0x00}, /* ASCII-Code 0x5B => [ */
		{0x15,0x16,0x7C,0x16,0x15}, /* ASCII-Code 0x5C => \ */
		{0x00,0x41,0x41,0x7F,0x00}, /* ASCII-Code 0x5D => ] */
		{0x04,0x02,0x01,0x02,0x04}, /* ASCII-Code 0x5E => ^ */
		{0x40,0x40,0x40,0x40,0x40}, /* ASCII-Code 0x5F => _ */
		{0x00,0x01,0x02,0x04,0x00}, /* ASCII-Code 0x60 => ` */
		{0x20,0x54,0x54,0x54,0x78}, /* ASCII-Code 0x61 => a */
		{0x7F,0x48,0x44,0x44,0x38}, /* ASCII-Code 0x62 => b */
		{0x38,0x44,0x44,0x44,0x20}, /* ASCII-Code 0x63 => c */
		{0x38,0x44,0x44,0x48,0x7F}, /* ASCII-Code 0x64 => d */
		{0x38,0x54,0x54,0x54,0x18}, /* ASCII-Code 0x65 => e */
		{0x08,0x7E,0x09,0x01,0x02}, /* ASCII-Code 0x66 => f */
		{0x0C,0x52,0x52,0x52,0x3E}, /* ASCII-Code 0x67 => g */
		{0x7F,0x08,0x04,0x04,0x78}, /* ASCII-Code 0x68 => h */
		{0x00,0x44,0x7D,0x40,0x00}, /* ASCII-Code 0x69 => i */
		{0x20,0x40,0x44,0x3D,0x00}, /* ASCII-Code 0x6A => j */
		{0x7F,0x10,0x28,0x44,0x00}, /* ASCII-Code 0x6B => k */
		{0x00,0x41,0x7F,0x40,0x00}, /* ASCII-Code 0x6C => l */
		{0x7C,0x04,0x18,0x04,0x78}, /* ASCII-Code 0x6D => m */
		{0x7C,0x08,0x04,0x04,0x78}, /* ASCII-Code 0x6E => n */
		{0x38,0x44,0x44,0x44,0x38}, /* ASCII-Code 0x6F => o */
		{0x7C,0x14,0x14,0x14,0x08}, /* ASCII-Code 0x70 => p */
		{0x08,0x14,0x14,0x18,0x7C}, /* ASCII-Code 0x71 => q */
		{0x7C,0x08,0x04,0x04,0x08}, /* ASCII-Code 0x72 => r */
		{0x48,0x54,0x54,0x54,0x20}, /* ASCII-Code 0x73 => s */
		{0x04,0x3F,0x44,0x40,0x20}, /* ASCII-Code 0x74 => t */
		{0x3C,0x40,0x40,0x20,0x7C}, /* ASCII-Code 0x75 => u */
		{0x1C,0x20,0x40,0x20,0x1C}, /* ASCII-Code 0x76 => v */
		{0x3C,0x40,0x30,0x40,0x3C}, /* ASCII-Code 0x77 => w */
		{0x44,0x28,0x10,0x28,0x44}, /* ASCII-Code 0x78 => x */
		{0x0C,0x50,0x50,0x50,0x3C}, /* ASCII-Code 0x79 => y */
		{0x44,0x64,0x54,0x4C,0x44}, /* ASCII-Code 0x7A => z */
		{0x00,0x08,0x36,0x41,0x00}, /* ASCII-Code 0x7B => { */
		{0x00,0x00,0x7F,0x00,0x00}, /* ASCII-Code 0x7C => | */
		{0x00,0x41,0x36,0x08,0x00}, /* ASCII-Code 0x7D => } */
		{0x08,0x08,0x2A,0x1C,0x08}, /* ASCII-Code 0x7E => -> */
		{0x08,0x1C,0x2A,0x08,0x08}}; /* ASCII-Code 0x7F => <- */
void Myfont::Draw(int xval, unsigned char chr) /*draws an ascii char to the screen using the given x value */
{
    uint8_t vr=0;
    vr=chr;
    for(uint8_t i=0; i<5; i++)
    {
        uint8_t mask = 0x01;  /*bitmask used to select the different bits from the values in the table*/
        for(uint8_t j=0; j<7; j++)
        {
            
            uint8_t tmps=pgm_read_byte( &la[vr][i] )&mask; /*read a value from the table and do a & with the mask*/
            if(tmps==mask) /*if there was a 1 set tmps to 1 else set it to 0*/
            {
                tmps=1;
            }
            else
            {
                tmps=0;
            }
            if(xval+i<14 && (xval+i) >(-1)){ /*only write x vals that are existing on the screen*/
                LedSign::Set(xval+i, j+1, tmps); /*write it*/
            }
            mask <<= 1; /*take the next bit of the val from the table*/
        }
    }
}

void Myfont::Banner(int len, unsigned char* text){ /* text banner creator. use with example code!!*/
    
    
    int xoff=14;/* setmx offset to the right end of the screen*/
    for(int i=0; i<len*5 +52; i++){ /*scrolling loop*/
        for(int j=0; j<len; j++){ /*loop over all of the chars in the text*/
            Myfont::Draw(xoff + j*6, text[j]); /* call the draw font function*/
        }
        xoff--; /* decrement x offset*/
        delay(70); /*scrolling speed increments if delay goes down*/
        LedSign::Clear(); /*empty the screen */
    }
    
    
}
