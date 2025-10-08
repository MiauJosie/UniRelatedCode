#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[50];
    int idade;
} Pessoa;

static void ordena_nome(Pessoa p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int imenor = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(p[j].nome, p[imenor].nome) < 0)
            {
                imenor = j;
            }
        }

        Pessoa temp = p[i];
        p[i] = p[imenor];
        p[imenor] = temp;
    }
}

static void ordena_idade(Pessoa p[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Pessoa temp = p[i];
        int j = i;

        while (j > 0 && p[j - 1].idade > temp.idade)
        {
            p[j] = p[j - 1];
            j--;
        }

        p[j] = temp;
    }
}