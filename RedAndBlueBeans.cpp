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
        int r, b, d;
        cin >> r >> b >> d;
        int differ = abs(r - b);
        int mn = min(r, b);
        int each = (differ + mn - 1) / mn;
        if (each <= d)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
    }
}