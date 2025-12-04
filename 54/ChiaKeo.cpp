//Author: Lunaris
//Timestamp: 2025-12-04 14:53:14
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
	open("ChiaKeo");
	ll n;
	cin>>n;
	vector<ll> a(n + 1);
	a[0] = 0;
	ll c;
	for(ll i = 1; i <= n; i++)
	{
		cin>>c;
		a[i] = a[i - 1] + c;
	}
	ll res = -1;
	for(ll i = 1; i < n + 1; i++)
	{
		ll x = a[i];
		ll t = a[i] + a[n];
		auto it = lower_bound(a.begin() + 1 + i, a.begin() + n, t / 2);
		if(it != a.begin() + n)
		{
			ll y = *it - x;
			ll z = a[n] - *it;
			ll d = max({x, y, z}) - min({x, y, z});
			if(res == -1 || d < res)
			{
				res = d;
			}
		}
		if(it != a.begin() + i + 1)
		{
			it--;
			ll y = *it - x;
			ll z = a[n] - *it;
			ll d = max({x, y, z}) - min({x, y, z});
			if(res == -1 || d < res)
			{
				res = d;
			}
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}