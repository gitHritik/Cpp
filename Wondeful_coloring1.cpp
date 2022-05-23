#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
void solve()
{
	string s;
	cin >> s;
	int m = 0;
	int n = 0;

	unordered_map<char, int> ump;
	for (int i = 0; i < s.length(); i++)
	{
		ump[s[i]]++;
	}

	for (auto &a : ump)
	{
		if (a.second > 1)
		{
			m++;
		}
		else if (a.second == 1)
			n++;
	}
	cout << m + n / 2 << "\n";
}
int32_t main()
{
	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}
}