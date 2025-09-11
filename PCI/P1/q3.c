#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saque, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    if (saque == 1 || saque == 3)
    {
        printf("Não é possível sacar 1 ou 3. Tente novamente.");
        return 0;
    }

    while (saque > 0)
    {
        if (saque >= 100)
        {
            n100++;
            saque -= 100;
        }
        else if (saque >= 50)
        {
            n50++;
            saque -= 50;
        }
        else if (saque >= 20)
        {
            n20++;
            saque -= 20;
        }
        else if (saque >= 10)
        {
            n10++;
            saque -= 10;
        }
        else if (saque == 6)
        {
            n2 += 3;
            saque -= 6;
        }
        else if (saque >= 5)
        {
            n5++;
            saque -= 5;
        }
        else if (saque >= 2)
        {
            n2++;
            saque -= 2;
        }
        else
        {
            if (n5 > 0)
            {
                n5--;
                n2 += 3;
                saque = 0;
            }
            else if (n10 > 0)
            {
                n10--;
                n5++;
                n2 += 3;
                saque = 0;
            }
            else if (n20 > 0)
            {
                n20--;
                n10++;
                n5++;
                n2 += 3;
                saque = 0;
            }
            else if (n50 > 0)
            {
                n20 += 2;
                n5++;
                n2 += 3;
                saque = 0;
            }
            else if (n100 > 0)
            {
                n20 += 2;
                n50++;
                n5++;
                n2 += 3;
                saque = 0;
            }
        }
    }
    printf("Notas de 2: %d, Notas de 5: %d, Notas de 10: %d, Notas de 20: %d, Notas de 50: %d, Notas de 100: %d", n2, n5, n10, n20, n50, n100);
    return 0;
}