#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  // straight
  draw_line(200, 250, 300, 250, s, c);

  // 1/2
  draw_line(200, 225, 300, 275, s, c);

  // 1
  draw_line(200, 200, 300, 300, s, c);

  // 3/2
  draw_line(200, 175, 300, 325, s, c);

  // u/d
  draw_line(250, 175, 250, 325, s, c);

  // -3/2
  draw_line(200, 325, 300, 175, s, c);

  // -1
  draw_line(200, 300, 300, 200, s, c);

  // -1/2
  draw_line(200, 275, 300, 225, s, c);

  display(s);
  save_extension(s, "lines.png");
}
