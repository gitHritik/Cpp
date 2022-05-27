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
        int a[n];
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        if (a[n - 1] >= a[0] + a[1])
        {
            cout << 1 << " " << 2 << " " << n << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}