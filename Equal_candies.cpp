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
        vector<int> a(n);
        int mn = INT_MAX;
        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            ans += a[i] - mn;
        }
        cout << ans << "\n";
    }
}