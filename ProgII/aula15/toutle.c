#include "turtle.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void toutle_move(int x, int y)
{
    turtle_pen_up();
    turtle_goto(x, y);
    turtle_pen_down();
}

void toutle_draw(int x, int y, int L)
{
    toutle_move(x, y);
    turtle_save_bmp("output1.bmp");
    turtle_goto(x + L, y);
    turtle_save_bmp("output2.bmp");
    turtle_goto(x + L, y + L);
    turtle_save_bmp("output3.bmp");
    turtle_goto(x, x + L);
    turtle_save_bmp("output4.bmp");
    turtle_goto(x, y);
    turtle_save_bmp("output5.bmp");
    turtle_set_pen_color(255, 0, 0);
    turtle_draw_circle(x + L / 4.0, y + 3 * L / 4.0, L / 5.0);
    turtle_save_bmp("output6.bmp");
    turtle_set_pen_color(0, 0, 255);
    turtle_draw_circle(x + L * 3 / 4.0, y + L / 4.0, L / 7.0);
    turtle_save_bmp("output7.bmp");
}

int main()
{
    turtle_init(900, 900);

    toutle_draw(-300, -300, 600);

    turtle_save_bmp("output.bmp");

    return 0;
}