#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define int long long
int32_t main()
{
    int n, x;
    cin >> n >> x;
    int count = x;
    int child = 0;
    char c;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> d;

        if (c == '+')
        {
            count += d;
        }
        else if (c == '-' && count - d >= 0)
        {
            count -= d;
        }
        else
        {
            child++;
        }
    }
    cout << count << " " << child << "\n";
}
// 6 1000000000 + 1000000000 + 1000000000 + 1000000000 + 1000000000 + 1000000000 + 1000000000