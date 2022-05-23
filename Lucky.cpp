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
        int n = s.size();
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < n / 2; i++)
        {
            sum1 += s[i];
        }
        for (int i = n / 2; i < n; i++)
        {
            sum2 += s[i];
        }
        if (sum1 == sum2)
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