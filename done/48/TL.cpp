//Author: Lunaris
//Timestamp: 2025-12-01 15:04:12
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
	open("TL");
	int n;
	cin>>n;
	vector<pair<ll, int>> a(n);
	for(auto &i : a)
	{
		cin>>i.fi>>i.se;
	}
	sort(all(a));
	ll s = 0;
	ll m = 2000000000000000000;
	ll r = -2000000000000000000;

	for (int i = 0; i < n; i++)
	{
		ll x = s - a[i].fi;
		if (x < m)
		{
			m = x;
		}
		s += a[i].se;
		ll y = s - a[i].fi;
		if (y - m > r)
		{
			r = y - m;
		}
	}
	cout << r;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}