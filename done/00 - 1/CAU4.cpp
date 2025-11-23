#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define all(a) a.begin(), a.end()

using namespace std;

void open(string s)
{
	if (fopen((s + ".inp").c_str(), "r"))
	{
		freopen((s + ".inp").c_str(), "r", stdin);
		freopen((s + ".out").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int p[1000005];
int m[1000005];

signed main()
{
	open("");
	int n, x, y;
	cin>>n>>x>>y;
	int cp = 0, cm = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a > 0)
		{
			p[a]++;
			cp++;
		}
		else
		{
			m[abs(a)]++;
			cm++;
		}
	}
	if (cp < x || cm < y)
	{
		cout << -1;
		return 0;
	}
	int l = 1;
	int cx = 0, cy = 0;
	int u = -1, v = -1;
	int mn = 2e9;
	for (int r = 1; r <= 1000000; r++)
	{
		if (p[r]) 
		{
			cx++;
		}
		if (m[r]) 
		{
			cy++;
		}
		while (cx >= x && cy >= y)
		{
			if (r - l < mn)
			{
				mn = r - l;
				u = l;
				v = r;
			}
			if (p[l]) 
			{
				cx--;
			}
			if (m[l]) 
			{
				cy--;
			}
			l++;
		}
	}

	if (u == -1) 
	{
		cout << -1;
	}
	else 
	{
		cout << u << " " << v;
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}