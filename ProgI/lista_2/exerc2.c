#include <stdio.h>
#include <math.h>

int main()
{
    int ini = 0, fim = 0;

    printf("Digite um intervalo\n");
    scanf("%d", &ini);
    scanf("%d", &fim);

    for (int i = ini; i < fim; i++)
    {
        if (pow(i, 0.5) == (int)(pow(i, 0.5)))
        {
            printf("%d\n", i);
        }
    }
}