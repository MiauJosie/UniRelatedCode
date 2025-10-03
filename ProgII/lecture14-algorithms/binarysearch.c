#include <stdlib.h>
#include <stdio.h>

int busca(int target, int v[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (v[middle] < target)
        {
            start = middle + 1;
        }
        else if (v[middle] > target)
        {
            end = middle - 1;
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

int main()
{
    int v[10] = {1, 58, 65, 87, 103, 104, 112, 138, 148, 174};
    int i = busca(58, v, 10);
    if (i < 0)
    {
        puts("valor nao encontrado");
    }
    else
    {
        printf("valor %d econtrado na posicao %d\n", v[i], i);
    }
    return 0;
}