#include "turtle.h"
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

    int x0_1 = -300;
    int x1_1 = 100;
    int y0_1 = 200;
    int y1_1 = -300;

    int x0_2 = -100;
    int x1_2 = 300;
    int y0_2 = 300;
    int y1_2 = -200;

    draw_rect(x0_1, y0_1, x1_1, y1_1);
    draw_rect(x0_2, y0_2, x1_2, y1_2);

    for (int i = 0; i < 3000; i++)
    {
        int x = rand() % 800 - 400;
        int y = rand() % 800 - 400;

        if (x > x0_2 && x < x1_1 && y > y1_2 && y < y0_1)
        {
            turtle_set_fill_color(255, 0, 0);
        }
        else if (x > x0_1 && x < x1_1 && y > y1_1 && y < y0_1)
        {
            turtle_set_fill_color(0, 255, 0);
        }
        else if (x > x0_2 && x < x1_2 && y > y1_2 && y < y0_2)
        {
            turtle_set_fill_color(0, 0, 255);
        }
        else
        {
            turtle_set_fill_color(0, 0, 0);
        }

        turtle_fill_circle(x, y, 10);
    }

    turtle_save_bmp("rectangle.bmp");
    return 0;
}