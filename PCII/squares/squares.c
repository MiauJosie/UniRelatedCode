#include "../turtle.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

void draw_rect(int x0, int y0, int x1, int y1)
{
    turtle_pen_up();
    turtle_goto(x0, y0);
    turtle_pen_down();
    turtle_goto(x1, y0);
    turtle_goto(x1, y1);
    turtle_goto(x0, y1);
    turtle_goto(x0, y0);
}

int main()
{
    srand(time(NULL));
    turtle_init(800, 800);

    int x0 = 100;

    turtle_save_bmp("output.bmp");
    return 0;
}