#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    int v[505];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    sort(v, v + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }

    printf("%d", v[n - k]);

    return 0;
}