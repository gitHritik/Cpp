#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
int32_t main()
{
    string s;
    cin >> s;
    int cnt, x, y;
    cnt = x = y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'Q')
        {
            cnt += x;
            y++;
        }
        else if (s[i] == 'A')
        {
            x += y;
        }
    }
    cout << cnt << "\n";
}