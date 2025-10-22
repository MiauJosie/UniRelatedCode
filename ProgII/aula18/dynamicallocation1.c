#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p = malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        *(p + i) = 1 + i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", *(p + i));
    }
    return 0;
}