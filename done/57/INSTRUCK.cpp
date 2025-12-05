//Author: Lunaris
//Timestamp: 2025-12-05 15:09:00
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
ll f(ll n)
{
	ll l = 0, r = 1000000000;
	ll k;
	while(l <= r)
	{
		ll m = l + (r - l) / 2;
		if(m * (m + 1) / 2 <= n)
		{
			k = m;
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	ll s = k * (k + 1) * (2 * k + 1) / 6;
	ll res = n - k * (k + 1) / 2;
	return s + res * (k + 1);
}
signed main() 
{	
	open("INSTRUCK");
	ll a, b;
	cin>>a>>b;
	ll res = ((f(b) % mod) - (f(a - 1) % mod)) % mod;
	if(res < 0)
	{
		res += mod;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}