#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

void open(string s)
{
	if(fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main()
{
	open("SIMILAR");
	cin >> l >> r;
	const int m = 63; 
	vector<int> a(m + 1, -1);
	vector<int> b(m + 1, -1);
	int d = 0;
	for (int i = l; i <= r; ++i)
	{
		int s = f(i);

		if (a[s] == -1)
		{
			a[s] = i;
		}
		b[s] = i; 
	}
	for (int s = 1; s <= m; ++s)
	{
		if (a[s] != -1)
		{
			int c = b[s] - a[s];
			if (c > d)
			{
				d = c;
			}
		}
	}
	cout << d << '\n';
	return 0;
}