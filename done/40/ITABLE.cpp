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
	if (fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void solve() 
{
	int k[100005], rc[100005], x[100005], y[100005];
	int n, t;
	cin >> n >> t;
	for (int i = 1; i <= t; i++) 
	{
		cin >> k[i] >> rc[i] >> x[i] >> y[i];
	}
	int q;
	cin >> q;
	while (q--) 
	{
		int u, v;
		cin >> u >> v;
		ll s = 0;
		for (int i = 1; i <= t; i++) 
		{
			if (k[i] == 1) 
			{
				if (rc[i] == u && v >= x[i] && v <= y[i]) 
				{
					s += min(v - x[i] + 1, y[i] - v + 1);
				}
			} 
			else 
			{
				if (rc[i] == v && u >= x[i] && u <= y[i]) 
				{
					s += min(u - x[i] + 1, y[i] - u + 1);
				}
			}
		}
		cout << s << "\n";
	}
}
signed main()
{
	open("ITABLE");
	solve();
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}