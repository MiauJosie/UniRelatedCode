#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char lixo;
    int num_secretos[5];
    int jogador[5];
    int acerto = 0;

    num_secretos[0] = rand() % 51;

    do
    {
        num_secretos[1] = rand() % 51;
    } while (num_secretos[1] == num_secretos[0]);

    do
    {
        num_secretos[2] = rand() % 51;
    } while (num_secretos[2] == num_secretos[1] || num_secretos[2] == num_secretos[0]);

    do
    {
        num_secretos[3] = rand() % 51;
    } while (num_secretos[3] == num_secretos[2] || num_secretos[3] == num_secretos[1] || num_secretos[3] == num_secretos[0]);

    do
    {
        num_secretos[4] = rand() % 51;
    } while (num_secretos[4] == num_secretos[3] || num_secretos[4] == num_secretos[2] || num_secretos[4] == num_secretos[1] || num_secretos[4] == num_secretos[0]);

    printf("EU QUERO JOGAR UM JOGO, voce tem 10 tentativas para goonar 5 numeros aleatorios entre 1 e 50, se nao... Eduardo irah GOONAR voce!!!\n");
    printf("(Em toda tentativa voce deve digitar 5 numeros separados por espacos)\n");

    for (int t = 10; t > 0; t--)
    {
        acerto = 0;
        printf("Digite cinco numeros: ");
        scanf("%d%d%d%d%d", &jogador[0], &jogador[1], &jogador[2], &jogador[3], &jogador[4]);

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (jogador[i] == num_secretos[j])
                {
                    printf("Lembre-se, Eduardo eh gooner\n");
                    acerto++;
                }
            }
        }

        if (acerto == 5)
        {
            printf("Parabens, voce goonou o Eduardo!!!\n");
            printf("Digite algo pra sair: ");
            scanf("%c", &lixo);
            scanf("%c", &lixo);
            return 0;
        }
        else
        {
            printf("Voce acertou %d, mas Eduardo continua sendo gooner :)\n", acerto);
            printf("Voce ainda tem %d gonadas\n", t - 1);
        }
    }

    printf("VOCE FOI COMPLEMENTE GOONADO PELO EDUARDO MOLESTADOR DO PARQUE!!! BOA SORTE NA PROXIMA\n");
    printf("Digite algo pra sair: ");
    scanf("%c", &lixo);
    scanf("%c", &lixo);
    return 0;
}