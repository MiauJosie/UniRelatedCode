#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1, c2, c3;

    printf("Informe o valor de 3 cartas, onde 2 valores devem ser iguais\n");
    printf("Informe a carta 1: ");
    scanf("%d", &c1);
    printf("Informe a carta 2: ");
    scanf("%d", &c2);
    printf("Informe a carta 3: ");
    scanf("%d", &c3);

    if (c1 < 0 || c1 > 100)
    {
        printf("\n Digite um valor entre 0 e 100");
        return 0;
    }

    if (c2 < 0 || c2 > 100)
    {
        printf("\n Digite um valor entre 0 e 100");
        return 0;
    }

    if (c3 < 0 || c3 > 100)
    {
        printf("\n Digite um valor entre 0 e 100");
        return 0;
    }

    if (c1 == c2 && c1 == c3)
    {
        printf("\n Dois valores devem ser iguais");
        return 0;
    }

    if (c1 != c2 && c1 != c3 && c2 != c3)
    {
        printf("\n Dois valores devem ser iguais");
        return 0;
    }

    if (c1 == c2)
    {
        printf("A carta 4 vale: %d", c3);
        return 0;
    }

    if (c1 == c3)
    {
        printf("A carta 4 vale %d", c2);
        return 0;
    }

    printf("A carta 4 vale %d", c1);
    return 0;
}