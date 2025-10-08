#pragma once
#include <stdio.h>

int *busca_binaria(int valor, int v[], int n)
{
    int icomeco = 0;
    int ifinal = n - 1;

    while (icomeco <= ifinal)
    {
        int imedio = (icomeco + ifinal) / 2;
        if (v[imedio] < valor)
        {
            icomeco = imedio + 1;
        }
        else if (v[imedio] > valor)
        {
            ifinal = imedio - 1;
        }
        else
        {
            return &v[imedio];
        }
    }

    return NULL;
}