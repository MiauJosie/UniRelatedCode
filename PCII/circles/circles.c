#include "../turtle.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    turtle_init(800, 800);

    int x0 = -150;
    int y0 = 0;
    int r0 = 170;

    int x1 = 70;
    int y1 = 0;
    int r1 = 250;

    for (int i = 0; i < 2000; i++)
    {
        int x = rand() % 800 - 400;
        int y = rand() % 800 - 400;

        int dist_sq_c1 = pow(x - x0, 2) + pow(y - y0, 2);
        int radius_sq_c1 = pow(r0, 2);

        // (x + 50)^2 + (x+100)^2 = r^2

        int dist_sq_c2 = pow(x - x1, 2) + pow(y - y1, 2);
        int radius_sq_c2 = pow(r1, 2);

        if (dist_sq_c1 <= radius_sq_c1 && dist_sq_c2 <= radius_sq_c2)
        {
            turtle_set_fill_color(255, 0, 0);
        }
        else if (dist_sq_c2 <= radius_sq_c2)
        {
            turtle_set_fill_color(255, 255, 0);
        }
        else if (dist_sq_c1 <= radius_sq_c1)
        {
            turtle_set_fill_color(0, 0, 255);
        }
        else
        {
            turtle_set_fill_color(0, 0, 0);
        }

        turtle_fill_circle(x, y, 5);
    }

    turtle_save_bmp("output.bmp");
    return 0;
}