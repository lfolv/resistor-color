#include "resistor_color.h"

int color_code(resistor_band_t color)
{
  return color;
}

resistor_band_t *colors()
{
  static resistor_band_t c[10];

  c[0] = BLACK;
  c[1] = BROWN;
  c[2] = RED;
  c[3] = ORANGE;
  c[4] = YELLOW;
  c[5] = GREEN;
  c[6] = BLUE;
  c[7] = VIOLET;
  c[8] = GREY;
  c[9] = WHITE;

  return c;
}
