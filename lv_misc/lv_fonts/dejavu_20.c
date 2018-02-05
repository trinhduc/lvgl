#include <stdint.h>
#include "../lv_font.h"

/*Store the image of the letters (glyph) */
static const uint8_t arial_20_glyph_bitmap[] =
{
  /*Unicode: U+ 0020 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0021 , Width: 1*/
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xd0,  //@
  0x00,  //.
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 0022 , Width: 3*/
  0xf0, 0xf0,  //@.@
  0xf0, 0xf0,  //@.@
  0xf0, 0xf0,  //@.@
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 0023 , Width: 7*/
  0x00, 0x92, 0x0c, 0x00,  //..%..@.
  0x00, 0x92, 0x39, 0x00,  //..%..%.
  0x6f, 0xff, 0xff, 0xf0,  //+@@@@@@
  0x01, 0xb0, 0xb1, 0x00,  //..%.%..
  0xff, 0xff, 0xff, 0x60,  //@@@@@@+
  0x08, 0x33, 0x90, 0x00,  //.%..%..
  0x0c, 0x04, 0x80, 0x00,  //.@.+%..
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 0024 , Width: 5*/
  0x00, 0xf0, 0x00,  //..@..
  0x6e, 0xff, 0xf0,  //+@@@@
  0xf3, 0xf0, 0x00,  //@.@..
  0xbc, 0xf6, 0x00,  //%@@+.
  0x04, 0xfa, 0xc0,  //.+@%@
  0x00, 0xf2, 0xf0,  //..@.@
  0xff, 0xfe, 0x60,  //@@@@+
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0025 , Width: 8*/
  0x7f, 0x70, 0x0d, 0x40,  //+@+..@+.
  0xe3, 0xe0, 0x6b, 0x00,  //@.@.+%..
  0xe3, 0xe0, 0xe2, 0x00,  //@.@.@...
  0x7f, 0x78, 0x97, 0xf7,  //+@+%%+@+
  0x00, 0x2e, 0x1e, 0x3e,  //...@.@.@
  0x00, 0xb7, 0x0e, 0x3e,  //..%+.@.@
  0x04, 0xd0, 0x07, 0xf7,  //.+@..+@+
  0x00, 0x00, 0x00, 0x00,  //........
  0x00, 0x00, 0x00, 0x00,  //........
  0x00, 0x00, 0x00, 0x00,  //........


  /*Unicode: U+ 0026 , Width: 7*/
  0x06, 0xee, 0x60, 0x00,  //.+@@+..
  0x0f, 0x31, 0x90, 0x00,  //.@..%..
  0x0c, 0x70, 0x00, 0x00,  //.@+....
  0x85, 0x4b, 0x11, 0xe0,  //%++%..@
  0xe0, 0x05, 0xe9, 0x90,  //@..+@%%
  0xc9, 0x14, 0xef, 0x10,  //@%.+@@.
  0x2b, 0xfd, 0x54, 0xa0,  //.%@@++%
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 0027 , Width: 1*/
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 0028 , Width: 2*/
  0x57,  //++
  0xb3,  //%.
  0xe0,  //@.
  0xf0,  //@.
  0xe0,  //@.
  0xb3,  //%.
  0x57,  //++
  0x0a,  //.%
  0x00,  //..
  0x00,  //..


  /*Unicode: U+ 0029 , Width: 2*/
  0x75,  //++
  0x3b,  //.%
  0x0e,  //.@
  0x0f,  //.@
  0x0e,  //.@
  0x3b,  //.%
  0x75,  //++
  0xa0,  //%.
  0x00,  //..
  0x00,  //..


  /*Unicode: U+ 002a , Width: 5*/
  0x91, 0xf1, 0x90,  //%.@.%
  0x1a, 0xfa, 0x10,  //.%@%.
  0x1a, 0xfa, 0x10,  //.%@%.
  0x91, 0xf1, 0x90,  //%.@.%
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 002b , Width: 7*/
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0xff, 0xff, 0xff, 0xf0,  //@@@@@@@
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 002c , Width: 1*/
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 002d , Width: 3*/
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0xff, 0xf0,  //@@@
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 002e , Width: 1*/
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 002f , Width: 3*/
  0x02, 0xd0,  //..@
  0x06, 0xa0,  //.+%
  0x0a, 0x60,  //.%+
  0x0e, 0x20,  //.@.
  0x2e, 0x00,  //.@.
  0x6a, 0x00,  //+%.
  0xa6, 0x00,  //%+.
  0xd2, 0x00,  //@..
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 0030 , Width: 5*/
  0x1b, 0xfb, 0x10,  //.%@%.
  0x98, 0x08, 0x90,  //%%.%%
  0xe1, 0x01, 0xe0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xe1, 0x01, 0xe0,  //@...@
  0x98, 0x08, 0x90,  //%%.%%
  0x1b, 0xfb, 0x10,  //.%@%.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0031 , Width: 5*/
  0xff, 0xf0, 0x00,  //@@@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0032 , Width: 6*/
  0x5d, 0xfc, 0x30,  //+@@@..
  0xa2, 0x06, 0xe0,  //%..+@.
  0x00, 0x02, 0xd0,  //....@.
  0x00, 0x1c, 0x40,  //...@+.
  0x03, 0xd5, 0x00,  //..@+..
  0x6e, 0x40, 0x00,  //+@+...
  0xff, 0xff, 0xf0,  //@@@@@.
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0033 , Width: 5*/
  0x5d, 0xfc, 0x30,  //+@@@.
  0xa1, 0x05, 0xe0,  //%..+@
  0x00, 0x05, 0xd0,  //...+@
  0x0f, 0xfe, 0x30,  //.@@@.
  0x00, 0x05, 0xd0,  //...+@
  0x81, 0x05, 0xe0,  //%..+@
  0x6e, 0xfc, 0x30,  //+@@@.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0034 , Width: 5*/
  0x00, 0x7f, 0x00,  //..+@.
  0x03, 0xef, 0x00,  //..@@.
  0x0d, 0x4f, 0x00,  //.@.@.
  0x87, 0x0f, 0x00,  //%+.@.
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x0f, 0x00,  //...@.
  0x00, 0x0f, 0x00,  //...@.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0035 , Width: 5*/
  0xff, 0xff, 0x00,  //@@@@.
  0xf0, 0x00, 0x00,  //@....
  0xfe, 0xea, 0x10,  //@@@%.
  0x00, 0x18, 0xb0,  //...%%
  0x00, 0x00, 0xf0,  //....@
  0x00, 0x08, 0xc0,  //...%%
  0xff, 0xeb, 0x20,  //@@@%.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0036 , Width: 5*/
  0x07, 0xdf, 0xf0,  //.+@@@
  0x6d, 0x30, 0x00,  //+@...
  0xd5, 0x00, 0x00,  //@+...
  0xf9, 0xfd, 0x40,  //@%@@+
  0xe4, 0x04, 0xe0,  //@+.+@
  0x94, 0x04, 0xe0,  //%+.+@
  0x1b, 0xfd, 0x40,  //.%@@+
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0037 , Width: 5*/
  0xff, 0xff, 0xe0,  //@@@@@
  0x00, 0x03, 0x80,  //....%
  0x00, 0x0b, 0x10,  //...%.
  0x00, 0x3a, 0x00,  //...%.
  0x00, 0xb3, 0x00,  //..%..
  0x03, 0xb0, 0x00,  //..%..
  0x0b, 0x40, 0x00,  //.%+..
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0038 , Width: 5*/
  0x4d, 0xfd, 0x40,  //+@@@+
  0xe4, 0x04, 0xe0,  //@+.+@
  0xd4, 0x04, 0xc0,  //@+.+@
  0x3e, 0xfe, 0x30,  //.@@@.
  0xd4, 0x04, 0xd0,  //@+.+@
  0xe4, 0x04, 0xe0,  //@+.+@
  0x4d, 0xfd, 0x40,  //+@@@+
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0039 , Width: 5*/
  0x4d, 0xfb, 0x10,  //+@@%.
  0xe4, 0x04, 0x90,  //@+.+%
  0xe4, 0x04, 0xe0,  //@+.+@
  0x4d, 0xf8, 0xf0,  //+@@%@
  0x00, 0x04, 0xd0,  //...+@
  0x00, 0x3d, 0x60,  //...@+
  0xff, 0xd7, 0x00,  //@@@+.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 003a , Width: 1*/
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 003b , Width: 1*/
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 003c , Width: 6*/
  0x00, 0x00, 0x00,  //......
  0x00, 0x01, 0x7d,  //....+@
  0x16, 0xce, 0x93,  //.+%@%.
  0xff, 0x90, 0x00,  //@@%...
  0x16, 0xce, 0x93,  //.+@@%.
  0x00, 0x01, 0x7d,  //....+@
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 003d , Width: 6*/
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0xff, 0xff, 0xff,  //@@@@@@
  0x00, 0x00, 0x00,  //......
  0xff, 0xff, 0xff,  //@@@@@@
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 003e , Width: 6*/
  0x00, 0x00, 0x00,  //......
  0xd7, 0x10, 0x00,  //@+....
  0x39, 0xec, 0x61,  //.%@%+.
  0x00, 0x09, 0xff,  //...%@@
  0x39, 0xec, 0x61,  //.%@@+.
  0xd7, 0x10, 0x00,  //@+....
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 003f , Width: 4*/
  0xff, 0xe7,  //@@@+
  0x00, 0x3e,  //...@
  0x02, 0xd6,  //..@+
  0x0d, 0x50,  //.@+.
  0x0f, 0x00,  //.@..
  0x00, 0x00,  //....
  0x0f, 0x00,  //.@..
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 0040 , Width: 9*/
  0x00, 0x7d, 0xfe, 0xa2, 0x00,  //..+@@@%..
  0x0c, 0xa3, 0x01, 0x6e, 0x30,  //.@%...+@.
  0x8a, 0x00, 0x00, 0x04, 0xc0,  //+%.....+@
  0xd2, 0x0a, 0xbf, 0x00, 0xf0,  //@..%%@..@
  0xf0, 0x0f, 0x4f, 0x19, 0xa0,  //@..@+@.%%
  0xe2, 0x0a, 0xbf, 0xc7, 0x00,  //@..%%@@+.
  0x8a, 0x00, 0x00, 0x00, 0x00,  //%%.......
  0x1d, 0x91, 0x05, 0xa0, 0x00,  //.@%..+%..
  0x01, 0x9e, 0xfc, 0x40, 0x00,  //..%@@@+..
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........


  /*Unicode: U+ 0041 , Width: 7*/
  0x00, 0x4f, 0x40, 0x00,  //..+@+..
  0x00, 0xba, 0xb0, 0x00,  //..%%%..
  0x02, 0xd0, 0xd2, 0x00,  //..@.@..
  0x08, 0x50, 0x58, 0x00,  //.%+.+%.
  0x0e, 0xff, 0xfe, 0x00,  //.@@@@@.
  0x5b, 0x00, 0x0b, 0x50,  //+%...%+
  0xc4, 0x00, 0x04, 0xc0,  //@+...+@
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 0042 , Width: 5*/
  0xff, 0xfd, 0x50,  //@@@@+
  0xf0, 0x04, 0xe0,  //@..+@
  0xf0, 0x04, 0xd0,  //@..+@
  0xff, 0xff, 0x40,  //@@@@+
  0xf0, 0x03, 0xd0,  //@...@
  0xf0, 0x03, 0xe0,  //@...@
  0xff, 0xfe, 0x50,  //@@@@+
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0043 , Width: 6*/
  0x06, 0xdf, 0xd5,  //.+@@@+
  0x6d, 0x30, 0x29,  //+@...%
  0xd3, 0x00, 0x00,  //@.....
  0xf0, 0x00, 0x00,  //@.....
  0xd3, 0x00, 0x00,  //@.....
  0x6d, 0x30, 0x29,  //+@...%
  0x06, 0xdf, 0xd5,  //.+@@@+
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0044 , Width: 6*/
  0xff, 0xfd, 0x70,  //@@@@+.
  0xf0, 0x03, 0xc7,  //@...@+
  0xf0, 0x00, 0x2d,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x2d,  //@....@
  0xf0, 0x03, 0xc7,  //@...@+
  0xff, 0xfd, 0x70,  //@@@@+.
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0045 , Width: 5*/
  0xff, 0xff, 0xf0,  //@@@@@
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xff, 0xff, 0xf0,  //@@@@@
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0046 , Width: 4*/
  0xff, 0xff,  //@@@@
  0xf0, 0x00,  //@...
  0xf0, 0x00,  //@...
  0xff, 0xff,  //@@@@
  0xf0, 0x00,  //@...
  0xf0, 0x00,  //@...
  0xf0, 0x00,  //@...
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 0047 , Width: 6*/
  0x06, 0xdf, 0xd5,  //.+@@@+
  0x6c, 0x30, 0x2a,  //+@...%
  0xd2, 0x00, 0x00,  //@.....
  0xf0, 0x0f, 0xff,  //@..@@@
  0xd2, 0x00, 0x0f,  //@....@
  0x7c, 0x20, 0x2f,  //+@...@
  0x07, 0xdf, 0xd4,  //.+@@@+
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0048 , Width: 6*/
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xff, 0xff, 0xff,  //@@@@@@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0049 , Width: 1*/
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 004a , Width: 2*/
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x5d,  //+@
  0xd3,  //@.
  0x00,  //..


  /*Unicode: U+ 004b , Width: 6*/
  0xf0, 0x02, 0xd6,  //@...@+
  0xf0, 0x4d, 0x30,  //@..@..
  0xf5, 0xc1, 0x00,  //@+@...
  0xff, 0x50, 0x00,  //@@+...
  0xf3, 0xe5, 0x00,  //@.@+..
  0xf0, 0x2e, 0x60,  //@..@+.
  0xf0, 0x02, 0xd7,  //@...@+
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 004c , Width: 5*/
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 004d , Width: 7*/
  0xf5, 0x00, 0x07, 0xf0,  //@+...+@
  0xfc, 0x00, 0x0c, 0xf0,  //@@...@@
  0xf9, 0x40, 0x58, 0xf0,  //@%+.+%@
  0xf2, 0xc0, 0xc1, 0xf0,  //@.@.@.@
  0xf0, 0xa9, 0xa0, 0xf0,  //@.%%%.@
  0xf0, 0x3f, 0x30, 0xf0,  //@..@..@
  0xf0, 0x00, 0x00, 0xf0,  //@.....@
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 004e , Width: 6*/
  0xf5, 0x00, 0x0f,  //@+...@
  0xfb, 0x10, 0x0f,  //@%...@
  0xf2, 0xb0, 0x0f,  //@.%..@
  0xf0, 0x77, 0x0f,  //@.++.@
  0xf0, 0x0b, 0x2f,  //@..%.@
  0xf0, 0x01, 0xcf,  //@...%@
  0xf0, 0x00, 0x5f,  //@...+@
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 004f , Width: 6*/
  0x08, 0xee, 0x80,  //.%@@%.
  0x7b, 0x11, 0xb7,  //+%..%+
  0xd2, 0x00, 0x2d,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xd2, 0x00, 0x2d,  //@....@
  0x7b, 0x11, 0xb7,  //+%..%+
  0x08, 0xee, 0x80,  //.%@@%.
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0050 , Width: 5*/
  0xff, 0xfd, 0x40,  //@@@@+
  0xf0, 0x04, 0xe0,  //@..+@
  0xf0, 0x04, 0xe0,  //@..+@
  0xff, 0xfd, 0x40,  //@@@@+
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0051 , Width: 6*/
  0x08, 0xee, 0x80,  //.%@@%.
  0x7b, 0x11, 0xb7,  //+%..%+
  0xd2, 0x00, 0x2d,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xd2, 0x00, 0x2d,  //@....@
  0x7b, 0x11, 0xb7,  //+%..%+
  0x08, 0xef, 0x80,  //.%@@%.
  0x00, 0x06, 0xd1,  //...+@.
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0052 , Width: 6*/
  0xff, 0xfd, 0x40,  //@@@@+.
  0xf0, 0x04, 0xe0,  //@..+@.
  0xf0, 0x04, 0xe0,  //@..+@.
  0xff, 0xfc, 0x20,  //@@@@..
  0xf0, 0x09, 0x40,  //@..%+.
  0xf0, 0x00, 0xc0,  //@...@.
  0xf0, 0x00, 0x69,  //@...+%
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0053 , Width: 5*/
  0x4c, 0xfd, 0x50,  //.@@@+
  0xe5, 0x02, 0xa0,  //@+..%
  0xd7, 0x30, 0x00,  //@+...
  0x29, 0xce, 0x50,  //.%@@+
  0x00, 0x02, 0xe0,  //....@
  0xa2, 0x05, 0xe0,  //%..+@
  0x5d, 0xfd, 0x40,  //+@@@+
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0054 , Width: 5*/
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0xf0, 0x00,  //..@..
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0055 , Width: 6*/
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0f,  //@....@
  0xf0, 0x00, 0x0e,  //@....@
  0xb8, 0x00, 0x8b,  //%%..%%
  0x1a, 0xee, 0xa1,  //.%@@%.
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0056 , Width: 8*/
  0xc0, 0x00, 0x00, 0xe2,  //@.....@.
  0xa5, 0x00, 0x06, 0xa0,  //%+...+%.
  0x3d, 0x00, 0x0e, 0x30,  //.@...@..
  0x0b, 0x50, 0x6b, 0x00,  //.%+.+%..
  0x04, 0xd0, 0xd4, 0x00,  //..@.@+..
  0x00, 0xcb, 0xc0, 0x00,  //..@%@...
  0x00, 0x4f, 0x50, 0x00,  //..+@+...
  0x00, 0x00, 0x00, 0x00,  //........
  0x00, 0x00, 0x00, 0x00,  //........
  0x00, 0x00, 0x00, 0x00,  //........


  /*Unicode: U+ 0057 , Width: 9*/
  0xd2, 0x01, 0xf1, 0x02, 0xd0,  //@...@...@
  0x96, 0x06, 0xf6, 0x06, 0x80,  //%+.+@+.+%
  0x4a, 0x0b, 0x8b, 0x0a, 0x30,  //+%.%%%.%.
  0x0d, 0x1e, 0x0e, 0x0d, 0x00,  //.@.@.@.@.
  0x0b, 0x8b, 0x0b, 0x89, 0x00,  //.%%%.%%%.
  0x06, 0xf6, 0x06, 0xf4, 0x00,  //.+@+.+@+.
  0x01, 0xf1, 0x02, 0xf0, 0x00,  //..@...@..
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........


  /*Unicode: U+ 0058 , Width: 6*/
  0xa8, 0x00, 0x8a,  //%%..%%
  0x1e, 0x33, 0xe1,  //.@..@.
  0x04, 0xdd, 0x40,  //.+@@+.
  0x00, 0xcc, 0x00,  //..@@..
  0x04, 0xdd, 0x40,  //.+@@+.
  0x1e, 0x33, 0xe1,  //.@..@.
  0xa8, 0x00, 0x8a,  //%%..%%
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 0059 , Width: 7*/
  0x96, 0x00, 0x05, 0x90,  //%+...+%
  0x0b, 0x30, 0x2b, 0x00,  //.%...%.
  0x01, 0xc2, 0xb1, 0x00,  //..%.%..
  0x00, 0x2f, 0x20, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x0f, 0x00, 0x00,  //...@...
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 005a , Width: 6*/
  0xff, 0xff, 0xff,  //@@@@@@
  0x00, 0x00, 0xa4,  //....%+
  0x00, 0x09, 0x60,  //...%+.
  0x00, 0x88, 0x00,  //..%+..
  0x07, 0x90, 0x00,  //.+%...
  0x6b, 0x00, 0x00,  //+%....
  0xff, 0xff, 0xff,  //@@@@@@
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 005b , Width: 2*/
  0xf0,  //@.
  0xf0,  //@.
  0xf0,  //@.
  0xf0,  //@.
  0xf0,  //@.
  0xf0,  //@.
  0xf0,  //@.
  0xff,  //@@
  0x00,  //..
  0x00,  //..


  /*Unicode: U+ 005c , Width: 3*/
  0xd2, 0x00,  //@..
  0xa6, 0x00,  //%+.
  0x6a, 0x00,  //+%.
  0x2e, 0x00,  //.@.
  0x0e, 0x20,  //.@.
  0x0a, 0x60,  //.%+
  0x06, 0xa0,  //.+%
  0x02, 0xd0,  //..@
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 005d , Width: 2*/
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0xff,  //@@
  0x00,  //..
  0x00,  //..


  /*Unicode: U+ 005e , Width: 6*/
  0x00, 0xcc, 0x00,  //..@@..
  0x0b, 0x66, 0xb0,  //.%++%.
  0x96, 0x00, 0x69,  //%+..+%
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 005f , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0060 , Width: 2*/
  0x19,  //.%
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..
  0x00,  //..


  /*Unicode: U+ 0061 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x0f, 0xfd, 0x40,  //.@@@+
  0x00, 0x03, 0xd0,  //....@
  0x6d, 0xff, 0xf0,  //+@@@@
  0xf4, 0x04, 0xf0,  //@+.+@
  0x7e, 0xe7, 0xf0,  //+@@+@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0062 , Width: 5*/
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf8, 0xfd, 0x30,  //@%@@.
  0xf6, 0x06, 0xc0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xf6, 0x06, 0xc0,  //@+.+@
  0xf8, 0xfd, 0x30,  //@%@@.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0063 , Width: 4*/
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x2c, 0xff,  //.@@@
  0xc6, 0x00,  //@+..
  0xf0, 0x00,  //@...
  0xc6, 0x00,  //@+..
  0x2c, 0xff,  //.@@@
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 0064 , Width: 5*/
  0x00, 0x00, 0xf0,  //....@
  0x00, 0x00, 0xf0,  //....@
  0x3d, 0xf8, 0xf0,  //.@@%@
  0xc6, 0x06, 0xf0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xc6, 0x06, 0xf0,  //@+.+@
  0x3d, 0xf8, 0xf0,  //.@@%@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0065 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x2b, 0xfd, 0x30,  //.%@@.
  0xc5, 0x04, 0xd0,  //%+.+@
  0xff, 0xff, 0xf0,  //@@@@@
  0xc5, 0x00, 0x00,  //@+...
  0x2b, 0xff, 0xf0,  //.%@@@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0066 , Width: 3*/
  0x0e, 0x10,  //.@.
  0x0f, 0x00,  //.@.
  0xff, 0xf0,  //@@@
  0x0f, 0x00,  //.@.
  0x0f, 0x00,  //.@.
  0x0f, 0x00,  //.@.
  0x0f, 0x00,  //.@.
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 0067 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x3d, 0xf8, 0xf0,  //.@@%@
  0xc6, 0x06, 0xf0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xc6, 0x06, 0xf0,  //@+.+@
  0x3d, 0xf9, 0xf0,  //.@@%@
  0x00, 0x07, 0xc0,  //...+@
  0x0f, 0xfd, 0x30,  //.@@@.
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0068 , Width: 5*/
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf7, 0xee, 0x50,  //@+@@+
  0xf6, 0x04, 0xe0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0069 , Width: 1*/
  0x00,  //.
  0x00,  //.
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 006a , Width: 2*/
  0x00,  //..
  0x00,  //..
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x0f,  //.@
  0x2e,  //.@
  0xf7,  //@+
  0x00,  //..


  /*Unicode: U+ 006b , Width: 5*/
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x4e, 0x60,  //@.+@+
  0xf5, 0xd3, 0x00,  //@+@..
  0xff, 0x40, 0x00,  //@@+..
  0xf4, 0xe5, 0x00,  //@+@+.
  0xf0, 0x2e, 0x60,  //@..@+
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 006c , Width: 1*/
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0x00,  //.
  0x00,  //.
  0x00,  //.


  /*Unicode: U+ 006d , Width: 9*/
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0xf7, 0xee, 0x58, 0xee, 0x50,  //@+@@++@@+
  0xf6, 0x04, 0xf6, 0x04, 0xe0,  //@+.+@+.+@
  0xf0, 0x00, 0xf0, 0x00, 0xf0,  //@...@...@
  0xf0, 0x00, 0xf0, 0x00, 0xf0,  //@...@...@
  0xf0, 0x00, 0xf0, 0x00, 0xf0,  //@...@...@
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........
  0x00, 0x00, 0x00, 0x00, 0x00,  //.........


  /*Unicode: U+ 006e , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0xf7, 0xee, 0x50,  //@+@@+
  0xf6, 0x04, 0xe0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 006f , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x2c, 0xfc, 0x20,  //.@@@.
  0xc6, 0x06, 0xc0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xc6, 0x06, 0xc0,  //@+.+@
  0x3c, 0xfc, 0x20,  //.@@@.
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0070 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0xf8, 0xfd, 0x30,  //@%@@.
  0xf6, 0x06, 0xc0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xf6, 0x06, 0xc0,  //@+.+@
  0xf8, 0xfd, 0x30,  //@%@@.
  0xf0, 0x00, 0x00,  //@....
  0xf0, 0x00, 0x00,  //@....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0071 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x3d, 0xf8, 0xf0,  //.@@%@
  0xc6, 0x06, 0xf0,  //@+.+@
  0xf0, 0x00, 0xf0,  //@...@
  0xc6, 0x06, 0xf0,  //@+.+@
  0x3d, 0xf8, 0xf0,  //.@@%@
  0x00, 0x00, 0xf0,  //....@
  0x00, 0x00, 0xf0,  //....@
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0072 , Width: 3*/
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0xf9, 0xf0,  //@%@
  0xf5, 0x00,  //@+.
  0xf0, 0x00,  //@..
  0xf0, 0x00,  //@..
  0xf0, 0x00,  //@..
  0x00, 0x00,  //...
  0x00, 0x00,  //...
  0x00, 0x00,  //...


  /*Unicode: U+ 0073 , Width: 4*/
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x7e, 0xff,  //+@@@
  0xf6, 0x00,  //@+..
  0x5c, 0xe7,  //+@@+
  0x00, 0x3f,  //...@
  0xff, 0xe7,  //@@@+
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 0074 , Width: 4*/
  0x0f, 0x00,  //.@..
  0x0f, 0x00,  //.@..
  0xff, 0xff,  //@@@@
  0x0f, 0x00,  //.@..
  0x0f, 0x00,  //.@..
  0x0f, 0x10,  //.@..
  0x08, 0xff,  //.%@@
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 0075 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xe4, 0x06, 0xf0,  //@+.+@
  0x5e, 0xe7, 0xf0,  //+@@+@
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0076 , Width: 7*/
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x2e, 0x00, 0x0e, 0x20,  //.@...@.
  0x0a, 0x60, 0x6a, 0x00,  //.%+.+%.
  0x03, 0xe0, 0xe3, 0x00,  //..@.@..
  0x00, 0xcb, 0xc0, 0x00,  //..@%@..
  0x00, 0x4f, 0x40, 0x00,  //..+@+..
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 0077 , Width: 7*/
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0xe1, 0x4f, 0x41, 0xe0,  //@.+@+.@
  0xb3, 0xb8, 0xb3, 0xb0,  //%.%%%.%
  0x88, 0xd0, 0xd8, 0x90,  //+%@.@%%
  0x4f, 0x70, 0x7f, 0x60,  //+@+.+@+
  0x1f, 0x10, 0x1f, 0x30,  //.@...@.
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 0078 , Width: 5*/
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x95, 0x05, 0x90,  //%+.+%
  0x0b, 0x6b, 0x00,  //.%+%.
  0x04, 0xf3, 0x00,  //.+@..
  0x0c, 0x4b, 0x00,  //.@+%.
  0x94, 0x04, 0x90,  //%+.+%
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....
  0x00, 0x00, 0x00,  //.....


  /*Unicode: U+ 0079 , Width: 7*/
  0x00, 0x00, 0x00, 0x00,  //.......
  0x00, 0x00, 0x00, 0x00,  //.......
  0x3d, 0x00, 0x0d, 0x20,  //.@...@.
  0x0a, 0x50, 0x3b, 0x00,  //.%+..%.
  0x02, 0xc0, 0x94, 0x00,  //..@.%..
  0x00, 0x95, 0xb0, 0x00,  //..%+%..
  0x00, 0x1e, 0x50, 0x00,  //...@+..
  0x00, 0x0a, 0x00, 0x00,  //...%...
  0x0f, 0xf4, 0x00, 0x00,  //.@@+...
  0x00, 0x00, 0x00, 0x00,  //.......


  /*Unicode: U+ 007a , Width: 4*/
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0xff, 0xff,  //@@@@
  0x00, 0x69,  //..+%
  0x05, 0xd0,  //.+@.
  0x4f, 0x20,  //+@..
  0xff, 0xff,  //@@@@
  0x00, 0x00,  //....
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 007b , Width: 4*/
  0x00, 0xf1,  //..@.
  0x00, 0xf0,  //..@.
  0x04, 0xe0,  //..@.
  0xff, 0x70,  //@@+.
  0x05, 0xe0,  //.+@.
  0x00, 0xf0,  //..@.
  0x00, 0xf1,  //..@.
  0x00, 0x9f,  //..%@
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 007c , Width: 1*/
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0xf0,  //@
  0x00,  //.


  /*Unicode: U+ 007d , Width: 4*/
  0x1f, 0x00,  //.@..
  0x0f, 0x00,  //.@..
  0x0e, 0x30,  //.@..
  0x07, 0xff,  //.+@@
  0x0e, 0x50,  //.@+.
  0x0f, 0x00,  //.@..
  0x1f, 0x00,  //.@..
  0xf9, 0x00,  //@%..
  0x00, 0x00,  //....
  0x00, 0x00,  //....


  /*Unicode: U+ 007e , Width: 6*/
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x7e, 0xc4, 0x09,  //+@@+.%
  0x60, 0x4c, 0xe7,  //+.+@@+
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......
  0x00, 0x00, 0x00,  //......


  /*Unicode: U+ 007f , Width: 5*/
  0xff, 0xff, 0xf0,  //@@@@@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xf0, 0x00, 0xf0,  //@...@
  0xff, 0xff, 0xf0,  //@@@@@
  0x00, 0x00, 0x00,  //.....



};


/*Store the glyph descriptions */
static const lv_font_glyph_dsc_t arial_20_glyph_dsc[] =
{
  {.w_px = 5 ,  .glyph_index = 0},  //Unicode: U+0020
  {.w_px = 1 ,  .glyph_index = 30}, //Unicode: U+0021
  {.w_px = 3 ,  .glyph_index = 40}, //Unicode: U+0022
  {.w_px = 7 ,  .glyph_index = 60}, //Unicode: U+0023
  {.w_px = 5 ,  .glyph_index = 100},    //Unicode: U+0024
  {.w_px = 8 ,  .glyph_index = 130},    //Unicode: U+0025
  {.w_px = 7 ,  .glyph_index = 170},    //Unicode: U+0026
  {.w_px = 1 ,  .glyph_index = 210},    //Unicode: U+0027
  {.w_px = 2 ,  .glyph_index = 220},    //Unicode: U+0028
  {.w_px = 2 ,  .glyph_index = 230},    //Unicode: U+0029
  {.w_px = 5 ,  .glyph_index = 240},    //Unicode: U+002a
  {.w_px = 7 ,  .glyph_index = 270},    //Unicode: U+002b
  {.w_px = 1 ,  .glyph_index = 310},    //Unicode: U+002c
  {.w_px = 3 ,  .glyph_index = 320},    //Unicode: U+002d
  {.w_px = 1 ,  .glyph_index = 340},    //Unicode: U+002e
  {.w_px = 3 ,  .glyph_index = 350},    //Unicode: U+002f
  {.w_px = 5 ,  .glyph_index = 370},    //Unicode: U+0030
  {.w_px = 5 ,  .glyph_index = 400},    //Unicode: U+0031
  {.w_px = 6 ,  .glyph_index = 430},    //Unicode: U+0032
  {.w_px = 5 ,  .glyph_index = 460},    //Unicode: U+0033
  {.w_px = 5 ,  .glyph_index = 490},    //Unicode: U+0034
  {.w_px = 5 ,  .glyph_index = 520},    //Unicode: U+0035
  {.w_px = 5 ,  .glyph_index = 550},    //Unicode: U+0036
  {.w_px = 5 ,  .glyph_index = 580},    //Unicode: U+0037
  {.w_px = 5 ,  .glyph_index = 610},    //Unicode: U+0038
  {.w_px = 5 ,  .glyph_index = 640},    //Unicode: U+0039
  {.w_px = 1 ,  .glyph_index = 670},    //Unicode: U+003a
  {.w_px = 1 ,  .glyph_index = 680},    //Unicode: U+003b
  {.w_px = 6 ,  .glyph_index = 690},    //Unicode: U+003c
  {.w_px = 6 ,  .glyph_index = 720},    //Unicode: U+003d
  {.w_px = 6 ,  .glyph_index = 750},    //Unicode: U+003e
  {.w_px = 4 ,  .glyph_index = 780},    //Unicode: U+003f
  {.w_px = 9 ,  .glyph_index = 800},    //Unicode: U+0040
  {.w_px = 7 ,  .glyph_index = 850},    //Unicode: U+0041
  {.w_px = 5 ,  .glyph_index = 890},    //Unicode: U+0042
  {.w_px = 6 ,  .glyph_index = 920},    //Unicode: U+0043
  {.w_px = 6 ,  .glyph_index = 950},    //Unicode: U+0044
  {.w_px = 5 ,  .glyph_index = 980},    //Unicode: U+0045
  {.w_px = 4 ,  .glyph_index = 1010},   //Unicode: U+0046
  {.w_px = 6 ,  .glyph_index = 1030},   //Unicode: U+0047
  {.w_px = 6 ,  .glyph_index = 1060},   //Unicode: U+0048
  {.w_px = 1 ,  .glyph_index = 1090},   //Unicode: U+0049
  {.w_px = 2 ,  .glyph_index = 1100},   //Unicode: U+004a
  {.w_px = 6 ,  .glyph_index = 1110},   //Unicode: U+004b
  {.w_px = 5 ,  .glyph_index = 1140},   //Unicode: U+004c
  {.w_px = 7 ,  .glyph_index = 1170},   //Unicode: U+004d
  {.w_px = 6 ,  .glyph_index = 1210},   //Unicode: U+004e
  {.w_px = 6 ,  .glyph_index = 1240},   //Unicode: U+004f
  {.w_px = 5 ,  .glyph_index = 1270},   //Unicode: U+0050
  {.w_px = 6 ,  .glyph_index = 1300},   //Unicode: U+0051
  {.w_px = 6 ,  .glyph_index = 1330},   //Unicode: U+0052
  {.w_px = 5 ,  .glyph_index = 1360},   //Unicode: U+0053
  {.w_px = 5 ,  .glyph_index = 1390},   //Unicode: U+0054
  {.w_px = 6 ,  .glyph_index = 1420},   //Unicode: U+0055
  {.w_px = 8 ,  .glyph_index = 1450},   //Unicode: U+0056
  {.w_px = 9 ,  .glyph_index = 1490},   //Unicode: U+0057
  {.w_px = 6 ,  .glyph_index = 1540},   //Unicode: U+0058
  {.w_px = 7 ,  .glyph_index = 1570},   //Unicode: U+0059
  {.w_px = 6 ,  .glyph_index = 1610},   //Unicode: U+005a
  {.w_px = 2 ,  .glyph_index = 1640},   //Unicode: U+005b
  {.w_px = 3 ,  .glyph_index = 1650},   //Unicode: U+005c
  {.w_px = 2 ,  .glyph_index = 1670},   //Unicode: U+005d
  {.w_px = 6 ,  .glyph_index = 1680},   //Unicode: U+005e
  {.w_px = 5 ,  .glyph_index = 1710},   //Unicode: U+005f
  {.w_px = 2 ,  .glyph_index = 1740},   //Unicode: U+0060
  {.w_px = 5 ,  .glyph_index = 1750},   //Unicode: U+0061
  {.w_px = 5 ,  .glyph_index = 1780},   //Unicode: U+0062
  {.w_px = 4 ,  .glyph_index = 1810},   //Unicode: U+0063
  {.w_px = 5 ,  .glyph_index = 1830},   //Unicode: U+0064
  {.w_px = 5 ,  .glyph_index = 1860},   //Unicode: U+0065
  {.w_px = 3 ,  .glyph_index = 1890},   //Unicode: U+0066
  {.w_px = 5 ,  .glyph_index = 1910},   //Unicode: U+0067
  {.w_px = 5 ,  .glyph_index = 1940},   //Unicode: U+0068
  {.w_px = 1 ,  .glyph_index = 1970},   //Unicode: U+0069
  {.w_px = 2 ,  .glyph_index = 1980},   //Unicode: U+006a
  {.w_px = 5 ,  .glyph_index = 1990},   //Unicode: U+006b
  {.w_px = 1 ,  .glyph_index = 2020},   //Unicode: U+006c
  {.w_px = 9 ,  .glyph_index = 2030},   //Unicode: U+006d
  {.w_px = 5 ,  .glyph_index = 2080},   //Unicode: U+006e
  {.w_px = 5 ,  .glyph_index = 2110},   //Unicode: U+006f
  {.w_px = 5 ,  .glyph_index = 2140},   //Unicode: U+0070
  {.w_px = 5 ,  .glyph_index = 2170},   //Unicode: U+0071
  {.w_px = 3 ,  .glyph_index = 2200},   //Unicode: U+0072
  {.w_px = 4 ,  .glyph_index = 2220},   //Unicode: U+0073
  {.w_px = 4 ,  .glyph_index = 2240},   //Unicode: U+0074
  {.w_px = 5 ,  .glyph_index = 2260},   //Unicode: U+0075
  {.w_px = 7 ,  .glyph_index = 2290},   //Unicode: U+0076
  {.w_px = 7 ,  .glyph_index = 2330},   //Unicode: U+0077
  {.w_px = 5 ,  .glyph_index = 2370},   //Unicode: U+0078
  {.w_px = 7 ,  .glyph_index = 2400},   //Unicode: U+0079
  {.w_px = 4 ,  .glyph_index = 2440},   //Unicode: U+007a
  {.w_px = 4 ,  .glyph_index = 2460},   //Unicode: U+007b
  {.w_px = 1 ,  .glyph_index = 2480},   //Unicode: U+007c
  {.w_px = 4 ,  .glyph_index = 2490},   //Unicode: U+007d
  {.w_px = 6 ,  .glyph_index = 2510},   //Unicode: U+007e
  {.w_px = 5 ,  .glyph_index = 2540},   //Unicode: U+007f

};

lv_font_t arial_20 =
{
    .unicode_first = 32,            /*First Unicode letter in this font*/
    .unicode_last = 127,            /*Last Unicode letter in this font*/
    .h_px = 10,                 /*Font height in pixels*/
    .glyph_bitmap = arial_20_glyph_bitmap,  /*Bitmap of glyphs*/
    .glyph_dsc = arial_20_glyph_dsc,        /*Description of glyphs*/
    .bpp = 4,               /*Bit per pixel*/
    .next_page = NULL,              /*Pointer to a font extension*/
};
