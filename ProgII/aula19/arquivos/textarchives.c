#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

void cria_numeros()
{
    FILE *fnumeros = fopen("numeros.txt", "w");
    assert(fnumeros != NULL);

    for (int i = 0; i < 30; i++)
    {
        int num = rand() % 1000;
        fprintf(fnumeros, "%d\n", num);
    }

    fclose(fnumeros);
}

void cria_numeros_pares_impares()
{
    cria_numeros();

    FILE *fler = fopen("numeros.txt", "r");
    assert(fler != NULL);

    FILE *fpares = fopen("pares.txt", "w");
    assert(fpares != NULL);

    FILE *fimpares = fopen("impares.txt", "w");
    assert(fimpares != NULL);

    int x;

    while (fscanf(fler, "%d\n", &x) == 1)
    {
        if (x % 2 == 0)
        {
            fprintf(fpares, "%d\n", x);
        }
        else
        {
            fprintf(fimpares, "%d\n", x);
        }
    }

    fclose(fler);
    fclose(fpares);
    fclose(fimpares);
}

void cria_numeros_bin()
{
    int v[1000];

    for (int i = 0; i < 1000; i++)
    {
        v[i] = rand() % 1000;
    }

    FILE *fnumerosbin = fopen("numeros.bin", "wb");
    assert(fnumerosbin != NULL);

    fwrite(v, sizeof(int), 1000, fnumerosbin);
    fclose(fnumerosbin);
}

cria_numeros_bin_pares_impares()
{
    cria_numeros_bin();

    int v[1000];

    FILE *fler = fopen("numeros.bin", "rb");
    assert(fler != NULL);
    fread(v, sizeof(int), 1000, fler);
    fclose(fler);

    FILE *fpares = fopen("pares.bin", "wb");
}

int main()
{
    srand(time(NULL));
}