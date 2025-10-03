#include <stdio.h>

int main()
{
    int decimal = 0, n = 0, binario = 0, multiplicador = 1, resto = 0;
    scanf("%d", &decimal);

    n = decimal;

    if (decimal == 0)
    {
        printf("Binario: 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        resto = decimal % 2;
        binario = binario + resto * multiplicador;
        multiplicador = multiplicador * 10;
        decimal = decimal / 2;
    }
}