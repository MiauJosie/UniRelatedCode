#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long int x = 0, y = 0, z = 0, v = 0, r = 0;
    string bin = "", rev = "";

    cin >> x;
    z = x;
    y = x;

    while (x > 0)
    {
        long long int bit = x % 2;
        bin.push_back('0' + bit);
        x /= 2;
    }

    while (y > 0)
    {
        long long int bit = y % 2;
        rev.push_back('0' + bit);
        y /= 2;
    }

    reverse(bin.begin(), bin.end());

    for (long long int i = 0; i < bin.length(); i++)
    {
        if (bin[i] != rev[i])
        {
            v = 1;
        }
    }

    if (v == 0)
    {
        cout << z;
        return 0;
    }
    else
    {
        if (bin.length() % 2 == 0)
        {
            for (long long int i = 0; i < bin.length() / 2; i++)
            {
                bin[bin.length() - 1 - i] = bin[i];
            }
        }
        else
        {
            for (long long int i = 0; i < floor(bin.length() / 2); i++)
            {
                bin[bin.length() - 1 - i] = bin[i];
            }
        }
    }

    for (long long int i = 0; i < bin.length(); i++)
    {

        if (bin[bin.length() - 1 - i] == '1')
        {
            r += pow(2, i);
        }
    }
    cout << r;
}