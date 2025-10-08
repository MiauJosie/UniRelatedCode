#include <stdio.h>
#include "questao4.h"

int main()
{
    Pessoa P[10] = {
        {"David", 14},
        {"Josie", 13},
        {"Miguel", 12},
        {"Eric", 12},
        {"Bruna", 12},
        {"Jorge", 14},
        {"Daniel", 11},
        {"Raquel", 11},
        {"Bruno", 13},
        {"Iasmin", 14},
    };

    ordena_nome(P, 10); // ordena por nome pelo SELECTION SORT
    puts("\nPOR NOME: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%s, %d\n", P[i].nome, P[i].idade);
    }

    ordena_idade(P, 10); // ordena por idade com um algoritmo ESTÁVEL
    puts("\nPOR IDADE: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%s, %d\n", P[i].nome, P[i].idade);
    }
}