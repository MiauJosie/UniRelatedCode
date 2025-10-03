#include <stdio.h>
#include <stdlib.h>

void FlipString(char str[], int i)
{
    if (str[i] == '\0')
    {
        return;
    }
    FlipString(str, i + 1);
    printf("%c", str[i]);
}

int main()
{

    return 0;
}