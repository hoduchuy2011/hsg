//Author: Lunaris
//Timestamp: 2025-12-04 07:26:29
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
	open("bosoi");
	ll n, m, k;
	cin>>n>>k>>m;
	vector<ll> a(n + 1, 0);
	for (ll i = 0; i < k; i++)
	{
		ll s = 0;
		for (ll j = 1; j <= n; j++)
		{
			ll x;
			if (j <= 2)
			{
				x = 1;
			}
			else
			{
				x = s;
			}
			a[j] += x;
			s += a[j];
		}
	}
	cout << a[m];

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}