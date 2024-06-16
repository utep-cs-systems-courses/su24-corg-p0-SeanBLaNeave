#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char row = 6; row >= 0; row--) {
    unsigned short colMask = 1 << (6-row);
    for (char col = 0; col < 5; col++) {
      unsigned short rowBits = font_5x7[c][col];
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 15; row >= 0; row--) {
    unsigned short colMask = 1 << (15-row);
    for (char col = 0; col < 11; col++) {
      unsigned short rowBits = font_11x16[c][col];
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
