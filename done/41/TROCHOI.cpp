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
signed main()
{
	open("TROCHOI");
	ll n;
	cin>>n;
	vector<ll> b(n);
	vector<ll> c(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (ll i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	sort(c.begin(), c.end());
	ll r = -1;
	for (ll i = 0; i < n; i++)
	{
		ll x = -b[i];
		auto k = lower_bound(c.begin(), c.end(), x);

		if (k != c.end())
		{
			ll v = abs(b[i] + *k);
			if (r == -1 || v < r) r = v;
		}

		if (k != c.begin())
		{
			k--;
			ll v = abs(b[i] + *k);
			if (r == -1 || v < r) r = v;
		}
	}

	cout << r;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}