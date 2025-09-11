#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string S, T;
    float SS = 0, TT = 0;

    cin >> N;
    cin >> S;
    cin >> T;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == '*')
        {
            SS++;
            if (T[i] == '*')
            {
                TT++;
            }
        }
    }

    printf("%.2f", 1 - (TT / SS));

    return 0;
}