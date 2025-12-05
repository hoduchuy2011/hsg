//Author: Lunaris
//Timestamp: 2025-12-05 07:20:44
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
	vector<ll> a(n);
	ll s = 0;
	for(auto &i : a)
	{
		cin>>i;
		s += i;
	}
	s -= a[0];
	ll t = a[0], res = mod;
	for(ll i = 1; i < n; i++)
	{
		res = min(res, abs(t - s));
		t += a[i];
		s -= a[i];
	}
	res = min(res, abs(t - s));
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}