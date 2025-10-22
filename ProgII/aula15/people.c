#include <stdio.h>
#include <string.h>

typedef struct
{
    int idade;
    float altura;
    char nome[100];
} Dados;

int insertion_sort(Dados v[], int N)
{
    for (int i = 1; i < N; i++)
    {
        // Guarda o valor na posição i
        Dados x = v[i];

        // Empurra os valores maiores para frente
        int k = i;
        while (k > 0 && v[k - 1].altura > x.altura)
        {
            v[k] = v[k - 1];
            k--;
        }

        // Coloca o valor original na posição correta
        v[k] = x;
    }
}

void ordena_idade(Dados people[], int size)
{
    for (int i = 0; i < size; i++)
    {
    }
}

int main()
{
    Dados D[] = {
        {12, 1.54, "Derpina"},
        {0, 1.24, "Clanker"},
        {1, 1.74, "HuggyWuggy"},
        {15, 1.64, "Jorge Frederico"},
    };

    // int i = pessoa_mais_jovem(D, 4);
    // printf("A pessoa mais jovem tem %d anos. E seu nome eh %s\n", D[i].idade, D[i].nome);

    ordena_idade(D, 4);

    puts("Em ordem de idade:");
    for (int i = 0; i < 4; i++)
    {
        printf("%d %g %s\n", D[i].idade, D[i].altura, D[i].nome);
        printf("CLANKER!!!");
    }

    return 0;
}