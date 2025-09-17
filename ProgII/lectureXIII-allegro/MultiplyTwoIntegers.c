#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b)
{
    if (a < b)
    {
        return mult(b, a);
    }
    else if (b != 0)
    {
        return (a + mult(a, b - 1));
    }
    else
    {
        return 0;
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