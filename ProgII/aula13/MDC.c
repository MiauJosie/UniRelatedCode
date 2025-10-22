#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return mdc(b, a % b);
    }
}

int main()
{
    printf("%d", mdc(48, 18));
    return 0;
}