#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else if (b < 0)
    {
        return -mult(a, -b);
    }
    else
    {
        return (a + mult(a, b - 1));
    }
}

int main()
{
    printf("%d\n", mult(3, 5));
    printf("%d\n", mult(-3, 5));
    printf("%d\n", mult(3, -5));
    printf("%d\n", mult(-3, -5));
    printf("%d\n", mult(7, 0));
    return 0;
}