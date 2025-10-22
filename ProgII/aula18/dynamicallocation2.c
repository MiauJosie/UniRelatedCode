#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *v[4];
    for (int i = 0; i < 4; i++)
    {
        v[i] = malloc(50 * sizeof(char));
    }

    strcpy(v[0], "Bombardiro");
    strcpy(v[1], "Ballerina");
    strcpy(v[2], "Tung");
    strcpy(v[3], "Brr");

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", *(v + i));
    }

    return 0;
}