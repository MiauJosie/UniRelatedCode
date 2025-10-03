#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char nome[20];
    int vida;
    int ataque;
    int defesa;
} Heroi;

Heroi cadastrarHerois();
int realizarAtaque(int ataque, Heroi h);
int verificarDerrota(char nome1[20], char nome2[20], int vida1, int vida2);

int main()
{
    srand(time(NULL));
    Heroi h1;
    Heroi h2;
    int acabou = 0;
    char lixo;

    printf("primeiro heroi");
    h1 = cadastrarHerois();

    printf("\nsegundo heroi");
    h2 = cadastrarHerois();

    if (h1.defesa >= h2.ataque && h2.defesa >= h1.ataque)
    {
        printf("eles vao lutar para sempre");
        return 0;
    }

    scanf("%c", &lixo);

    do
    {
        h2.vida = realizarAtaque(h1.ataque, h2);

        acabou = verificarDerrota(h1.nome, h2.nome, h1.vida, h2.vida);

        printf("aperte enter para continuar");
        scanf("%c", &lixo);

        if (acabou == 0)
        {
            h1.vida = realizarAtaque(h2.ataque, h1);

            acabou = verificarDerrota(h2.nome, h1.nome, h2.vida, h1.vida);
            printf("aperte enter para continuar");
            scanf("%c", &lixo);
        }

    } while (acabou == 0);

    return 0;
}

Heroi cadastrarHerois()
{
    Heroi h;
    printf("\ndigite o nome do heroi: ");
    scanf("%20s", &h.nome);
    h.vida = 50 + rand() % 50;
    h.ataque = 10 + rand() % 20;
    h.defesa = 5 + rand() % 15;
    return h;
}

int realizarAtaque(int ataque, Heroi h)
{
    int dano;

    dano = ataque - h.defesa;

    if (dano > 0)
    {
        h.vida -= dano;
    }

    printf("\no heroi %s tem %d de vida\n", h.nome, h.vida);
    return h.vida;
}

int verificarDerrota(char nome1[20], char nome2[20], int vida1, int vida2)
{
    if (vida2 <= 0)
    {
        printf("\no heroi %s ganhou do heroi %s com %d de vida sobrando\n", nome1, nome2, vida1);
        return 1;
    }
    else
    {
        return 0;
    }
}