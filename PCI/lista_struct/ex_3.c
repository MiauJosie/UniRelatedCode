#include <stdio.h>
#include <string.h>

struct Produto
{
    char nome[16]; // 15 + 1 para determinar o nulo '\0'.
    int codigo;
    int quantidade;
    float valor;
};

int main()
{
    struct Produto estoque[2];

    // Ponteiro que aponta para struct Produto.
    struct Produto *ptr_produto;

    printf("---Cadastro de produtos---\n");
    for (int i = 0; i < 2; i++)
    {
        // Atribui o endereço do produto atual do array ao ponteiro.
        ptr_produto = &estoque[i];

        printf("\nProduto %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &ptr_produto->codigo);
        while (ptr_produto->codigo == 0)
        {
            printf("\nCodigo do produto não pode ser zero!\n\nDigite novamente: ");
            scanf("%d", &ptr_produto->codigo);
            continue;
        }
        // Limpa o buffer do teclado após ler a stream.
        while (getchar() != '\n')
        {
        };

        printf("Nome (maximo de 15 letras): ");
        // Usando fgets garantindo que nome não excede o tamanho.
        fgets(ptr_produto->nome, sizeof(ptr_produto->nome), stdin);
        // Remove o '\n' que fgets adicona no final.
        ptr_produto->nome[strcspn(ptr_produto->nome, "\n")] = '\0';

        printf("Valor: ");
        scanf("%f", &ptr_produto->valor);

        printf("Quantidade: ");
        scanf("%d", &ptr_produto->quantidade);
    }

    printf("\n---Processamento de Pedidos---\n");
    int codigo_pedido, quantidade_pedido;

    while (1)
    {
        struct Produto *produto_pedido = NULL;

        printf("\nDigite o codigo do produto que desejas (digite zero para cancelar): ");
        scanf("%d", &codigo_pedido);

        if (codigo_pedido == 0)
        {
            break;
        }

        for (int i = 0; i < 2; i++)
        {
            ptr_produto = &estoque[i];
            if (ptr_produto->codigo == codigo_pedido)
            {
                produto_pedido = ptr_produto;
                break;
            }
        }

        if (produto_pedido == NULL)
        {
            printf("Produto não encontrado.\n");
            continue;
        };

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade_pedido);

        if (produto_pedido->quantidade < quantidade_pedido)
        {
            printf("Não existem %s o suficiente no estoque para satisfazer pedido.\n", produto_pedido->nome);
            continue;
        }

        ptr_produto->quantidade -= quantidade_pedido;

        printf("Pedido efetuado, restam %d %ss no estoque.\n", ptr_produto->quantidade, produto_pedido->nome);
    }

    return 0;
}