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
ll lcm(ll a, ll b)
{
	return a / (__gcd(a, b)) * b;
}
signed main()
{
	open("COMMONMULT");
	ll n, a, b, c;
	cin>>n>>a>>b>>c;
	ll lc = lcm(a, lcm(b, c));
	if (lc > n) 
	{
		cout << -1;
	} 
	else 
	{
		for (ll i = lc; i <= n; i += lc) 
		{
			cout << i << " ";
		}
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}