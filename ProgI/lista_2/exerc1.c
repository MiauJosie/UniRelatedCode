#include <stdio.h>

int main()
{
    int ini = 0, fim = 0;

    printf("Digite um intervalo\n");
    scanf("%d", &ini);
    scanf("%d", &fim);

    for (int i = ini; i < fim; i++)
    {
        printf("%d\n", i);
    }
}