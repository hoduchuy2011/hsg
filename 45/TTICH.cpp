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
	cin.tie(NULL); cout.tie(NULL);
}
void solve() 
{
	int n, m;
	cin >> n >> m;
	map<int, int> f;
	for(int i = 0; i < n; ++i) 
	{
		int x;
		cin >> x;
		for(int j = 2; j * j <= x; ++j) 
		{
			while(x % j == 0) 
			{
				f[j]++;
				x /= j;
			}
		}
		if(x > 1) 
		{
			f[x]++;
		}
	}
	for(int i = 0; i < m; ++i) 
	{
		int x;
		cin >> x;
		for(int j = 2; j * j <= x; ++j) 
		{
			while(x % j == 0) 
			{
				f[j]--;
				x /= j;
			}
		}
		if(x > 1) f[x]--;
	}
	for(auto p : f) 
	{
		if(p.second != 0) 
		{
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";
}
signed main()
{
	open("TTICH");
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}