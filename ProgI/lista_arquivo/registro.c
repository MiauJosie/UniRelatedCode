#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[11];
    char rg[10];
    char cpf[12];
    char nascimento[11];
    char admissao[11];
} Registro;

int main()
{
    FILE *arquivo;
    Registro reg;

    arquivo = fopen("registros.txt", "r");
    if (arquivo == NULL)
    {
        printf("Não foi possível ler o arquivo.");
        return 1;
    }

    while (fscanf(arquivo, "%10s %9s %11s %10s %10s", reg.nome, reg.rg, reg.cpf, reg.nascimento, reg.admissao) == 5)
    {
        printf("%-10s %-9s %-11s %-10s %-10s\n", reg.nome, reg.rg, reg.cpf, reg.nascimento, reg.admissao);
    }

    fclose(arquivo);
    return 0;
}