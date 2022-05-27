#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        if ((s.back() - '0') % 2 == 0)
        {
            cout << 0 << "\n";
        }
        else if ((s[0] - '0') % 2 == 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            int ans = -1;
            for (int i = 0; i < s.length(); i++)
            {
                if ((s[i] - '0') % 2 == 0)
                {
                    ans = 2;
                }
            }
            cout << ans << "\n";
        }
    }
}