#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "vector.h"

int main()
{
    Queue *queue = INIT_QUEUE(char[50]);

    printf("Bem vindo ao SUS");

    int is_running = 1;
    while (is_running)
    {
        printf("1 - Incluir um novo nome na fila\n");
        printf("2 - Chamar o próximo\n");
        printf("3 - Encerrar o programa\n");
        printf("Digite uma opção: ");

        int option = 0;
        scanf("%d", &option);

        if (option == 1)
        {
            // incluir
            printf("Digite o nome: ");
            char name[50];
            fgets("%s", &name, stdin);
            enqueue(queue, name);
        }
        else if (option == 2)
        {
            // chamar
            if (!is_empty_queue())
        }
        else
        {
            break;
        }
    }
}