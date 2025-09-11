#include <bits/stdc++.h>
using namespace std;

int main()
{
    // CAUSA BUG!
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    vector<string> vec = {"jorge", "eh"};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << " ";
        cout << vec[i];
    }
    cout << "?\n";
    string chara;
    cin >> chara;
    vec.push_back(chara);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << " ";
        cout << vec[i];
    }
    cout << "!";
}