#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char W[11];
    int len;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%s", W);
        len = strlen(W);
        W[len - 1] = '\0';
        W[len - 2] = 'i';
        printf("%s\n", W);
    }

    return 0;
}