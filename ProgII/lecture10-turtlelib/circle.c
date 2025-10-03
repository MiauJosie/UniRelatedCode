#include "turtle.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    turtle_init(620, 620);

    float x0 = -120, y0 = -20, r0 = 150;
    float x1 = 100, y1 = 50, r1 = 200;

    turtle_draw_circle(x0, y0, r0);
    turtle_draw_circle(x1, y1, r1);

    for (int i = 0; i <= 2000; i++)
    {
        int x = rand() % 620 - 310;
        int y = rand() % 620 - 310;

        int dist0 = pow(x - x0, 2) + pow(y - y0, 2);
        int radius0 = pow(r0, 2);

        int dist1 = pow(x - x1, 2) + pow(y - y1, 2);
        int radius1 = pow(r1, 2);

        if (dist0 < radius0 && dist1 < radius1)
        {
            turtle_set_fill_color(255, 0, 0);
        }
        else if (dist0 < radius0)
        {
            turtle_set_fill_color(0, 255, 0);
        }
        else if (dist1 < radius1)
        {
            turtle_set_fill_color(0, 0, 255);
        }
        else
        {
            turtle_set_fill_color(0, 0, 0);
        }

        turtle_fill_circle(x, y, 10);
    }

    turtle_save_bmp("circle.bmp");

    return 0;
}