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
        int n;
        cin >> n;
        vector<int> cnt(n + 1), idx(n + 1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++cnt[x];

            idx[x] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {

            cout << cnt[i] << "\n";
            cout << idx[i] << " ";
        }

        int ans = -1;
        for (int i = 0; i <= n; ++i)
        {
            if (cnt[i] == 1)
            {
                ans = idx[i];
                break;
            }
        }
        cout << ans << "\n";
    }
}