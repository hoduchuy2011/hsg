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
bool snt(ll n)
{
	if(n <= 1)
	{
		return 0;
	}
	if(n <= 3)
	{
		return 1;
	}
	if(n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	for(ll i = 5; i*i <= n; i += 6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	return 1;
}
ll tcs(ll n)
{
	if(n == 0)
	{
		return 0;
	}
	return tcs(n / 10) + (n % 10) * (n % 10);
}
signed main()
{
	open("");
	ll n;
	cin>>n;
	n++;
	while(!snt(tcs(n)))
	{
		n++;
	}
	cout<<n;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}