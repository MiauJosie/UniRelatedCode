#include <stdio.h>
#include <stdlib.h>

int *random(int n)
{
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 1000;
    }

    return v;
}

int *addVector(int *a, int *b, int n)
{
    int *c = malloc(n * sizeof(int));
    assert(c != NULL);
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    return c;
}

int main()
{
    printf("Ohanna, quer dizer, familia!");
    int *u = random(100);
    int *v = random(100);
    int *w = addVector(u, v, 100);
    for (int i = 0; i < 100; i++)
    {
        printf("%d + %d = %d\n", u[i], v[i], w[i]);
    }
    free(w);
    free(u);
    free(v);
    printf("Você sabia que...");
}