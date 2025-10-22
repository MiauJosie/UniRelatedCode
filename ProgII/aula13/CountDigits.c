#include <stdio.h>
#include <stdlib.h>

int countDigits(int n)
{
    if (n < 10 && n > -10)
    {
        return 1;
    }
    return 1 + (countDigits(n / 10));
}

int main()
{
    printf("%d", countDigits(2050));
    return 0;
}