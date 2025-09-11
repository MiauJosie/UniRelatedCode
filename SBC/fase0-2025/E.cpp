#include <bits/stdc++.h>
using namespace std;

int gcda(int a, int b)
{
    if (b == 0)
        return a;
    return gcda(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int x = 1, y = 0, k = 0;

    cin >> y >> k;

    for (long long int i = 0; i < k; i++)
    {
        long long int mdc = gcda(x, y);

        if (mdc == y)
        {
            x += (k - i) * y;
            break;
        }

        x += mdc;
    }

    cout << x;

    return 0;
}