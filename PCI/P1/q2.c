#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ini, fim, x, i, resto, soma;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &ini);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
    printf("Os numeros perfeitos pares no intervalo sao:");
    for (x = ini; x <= fim; x++)
    {
        soma = 0;

        if (x % 2 == 0)
        {
            for (i = 1; i < x; i++)
            {
                resto = x % i;

                if (resto == 0)
                {
                    soma += i;
                }
            }
            if (soma == x)
            {
                printf("\n%d", x);
            }
        }
    }
    return 0;
}