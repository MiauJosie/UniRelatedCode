#include <stdio.h>
#include <stdlib.h>
#include "questao3.h"

int main()
{
    int v[10] = {15, 17, 18, 21, 25, 26, 27, 30, 38};

    int *p1 = busca_binaria(21, v, 10);
    if (p1 != NULL)
    {
        printf("valor %d encontrado\n", *p1);
    }

    int *p2 = busca_binaria(23, v, 10);
    if (p2 != NULL)
    {
        printf("valor %d encontrado\n", *p2);
    }
}
