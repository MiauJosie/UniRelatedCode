#include "vector.h"
#include <stdio.h>

void insert(Vector *vec, int x)
{
    push_back(vec, &x);
    int N = vec->size;
    int *v = vec->data;
    int k = N - 1;
    while (k > 0 && v[k - 1] > x)
    {
        v[k] = v[k - 1];
        k--;
    }
    v[k] = x;
}

void imprimeAsteriscos(int n, int atual)
{
    if (n == 0)
    {
        return;
    }

    if (atual == 0)
    {
        printf("\n");
        imprimeAsteriscos(n - 1, n - 1);
    }
    else
    {
        printf("*");
        imprimeAsteriscos(n, atual - 1);
    }
}

int main()
{
    Vector *vec = VECTOR(int);

    insert(vec, 94);
    insert(vec, 14);
    insert(vec, 45);
    insert(vec, 25);
    insert(vec, 56);

    int N = vec->size;
    int *v = vec->data;
    for (int i = 0; i < N; i++)
    {
        printf("%d", v[i]);
    }
    printf("\n");

    free_vector(vec);

    imprimeAsteriscos(5, 5);
}