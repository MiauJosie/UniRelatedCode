#include <stdio.h>

struct Aluno
{
    char nome[50];
    int matricula;
    float nota[3];
    float media;
};

int main()
{
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        struct Aluno *ptr_aluno = &alunos[i];

        printf("Escreva o nome do aluno %d\n", i + 1);
        scanf("%s", ptr_aluno->nome);

        printf("Escreva a matricula do aluno %d\n", i + 1);
        scanf("%d", &ptr_aluno->matricula);

        for (int j = 0; j < 3; j++)
        {
            printf("Escreva a nota da p%d do aluno %d\n", j + 1, i + 1);
            scanf("%f", &ptr_aluno->nota[j]);
        }

        ptr_aluno->media = (ptr_aluno->nota[0] + ptr_aluno->nota[1] + ptr_aluno->nota[2]) / 3;
    }

    for (int i = 0; i < 5; i++)
    {
        struct Aluno *ptr_aluno = &alunos[i];

        printf("------------------------------------------------------\n");
        printf("Aluno: %s\n", ptr_aluno->nome);
        printf("Matricula: %d\n", ptr_aluno->matricula);

        for (int j = 0; j < 3; j++)
        {
            printf("P%d: %.2f\n", j + 1, ptr_aluno->nota[j]);
        }

        printf("Media: %.2f\n", ptr_aluno->media);
    }
}