#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    unsigned long long int M;
    cin >> M;
    M *= 8000000;
    cout << ceil(log2(M));

    return 0;
}