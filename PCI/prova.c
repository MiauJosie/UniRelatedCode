#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char titulo[40];
    char autor[30];
    int ano;
    int paginas;
} Livro;

void imprimeLivro(Livro livro)
{
    printf("%s\n", livro.titulo);
    printf("%s\n", livro.autor);
    printf("%d\n", livro.ano);
    printf("%d\n", livro.paginas);
}

int main()
{
    int n = 2;
    Livro livros[n];
    Livro nlivro;

    printf("titulo livro 1: ");
    scanf("%s", livros[0].titulo);
    printf("autor livro 1: ");
    scanf("%s", livros[0].autor);
    livros[0].ano = 1;
    livros[0].paginas = 1;

    printf("titulo livro 2: ");
    scanf("%s", livros[1].titulo);
    printf("autor livro 2: ");
    scanf("%s", livros[1].autor);
    livros[1].ano = 2;
    livros[1].paginas = 2;

    printf("digite o titulo que quer buscar: ");
    char buscapor[40];
    scanf("%s", buscapor);

    int achou = 0;
    while (achou == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            if (strcmp(buscapor, livros[i].titulo))
            {
                imprimeLivro(livros[i]);
                achou = 1;
                i = 3;
            }
        }
    }
    printf("denada");
}