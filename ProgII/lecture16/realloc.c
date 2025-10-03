#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int capacity = 1;
    int *v = malloc(capacity * sizeof(int));

    int x;
    while (scanf("%d", &x) == 1)
    {
        n++;
        if (n > capacity)
        {
            capacity *= 2;
            v = realloc(v, capacity * sizeof(int));
        }
        v[n - 1] = x;

        for (int i = 0; i < n; i++)
        {
            printf("%d, ", v[i]);
        }
    }
}