#include <stdio.h>
#include <stdlib.h>

struct banda
{
    char nome[50];
    char genero[50];
    int integrantes;
    int rank;
};

struct banda *criarBandas(int quantidade);
int carregarBandas(int loader);
void mostrarBandas(struct banda bandas[], int quantidade);

int main()
{
    int bandas = 1;
    printf("Quantas bandas quer criar? ");
    scanf("%d", &bandas);

    struct banda *bandasCriadas = criarBandas(bandas);
    mostrarBandas(bandasCriadas, bandas);

    free(bandasCriadas);
    return 0;
}

struct banda *criarBandas(int quantidade)
{
    struct banda *bandas = malloc(quantidade * sizeof(struct banda));

    if (bandas == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    int i = 0;
    while (i < quantidade)
    {
        printf("Qual o nome da banda %d? ", i + 1);
        scanf("%s", bandas[i].nome);

        printf("Qual o genero dessa banda? ");
        scanf("%s", bandas[i].genero);

        printf("Quantos integrantes tem nessa banda? ");
        scanf("%d", &bandas[i].integrantes);

        printf("Qual o ranking dessa banda pra voce? ");
        scanf("%d", &bandas[i].rank);

        i++;
    }

    return bandas;
}

void mostrarBandas(struct banda bandas[], int quantidade)
{
    printf("\nCarregando suas bandas...\n");
    int loaderPower = 40;
    carregarBandas(loaderPower);

    int i = 0;
    while (i < quantidade)
    {
        printf("--------------------------------------------------\n");
        printf("%s\n", bandas[i].nome);
        printf("Genero: %s\n", bandas[i].genero);
        printf("Integrantes: %d\n", bandas[i].integrantes);
        printf("Rank: %d\n", bandas[i].rank);
        i++;
    }
}

int carregarBandas(int loader)
{
    if (loader <= 1)
    {
        return 1;
    }
    else
    {
        return carregarBandas(loader - 1) + carregarBandas(loader - 2);
    }
}