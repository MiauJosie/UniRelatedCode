#include <stdio.h>

int ChecarPalindromo();
int ChecarNotas();

int main()
{
    ChecarNotas();
}

int ChecarNotas()
{
    int nota;
    int cont = 0;
    int verif;
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%d", &v[i]);
    }

    do
    {
        printf("\nVoce quer verificar alguma nota? 1 = SIM, outro numero = NAO: ");
        scanf("%d", &verif);
        if (verif == 1)
        {
            printf("Qual nota voce quer verificar?: ");
            scanf("%d", &nota);
            for (int i = 0; i < 10; i++)
            {
                if (v[i] == nota)
                {
                    printf("A nota %d existe em %d\n", nota, i + 1);
                    cont = 1;
                }
            }
            if (!cont == 1)
            {
                printf("Essa nota nao existe\n");
            }
            cont = 0;
        }
        else
        {
            return 0;
        }
    } while (verif == 1);
}

int ChecarPalindromo()
{
    int size;
    printf("Informe o tamanho do palindromo");
    scanf("%d", &size);
    int v[size];
    for (int i = 0; i < size; i++)
    {
    }
    return 0;
}