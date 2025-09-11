#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int G, C;

    cin >> C >> G;

    if (C == 1)
    {
        cout << "vivo e morto";
    }
    else
    {
        if (G == 1)
        {
            cout << "vivo";
        }
        else
        {
            cout << "morto";
        }
    }

    return 0;
}