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
	open("CountF");
	ll n;
	cin>>n;
	ll res = 0LL;
	for(ll i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			res++;
			while(n % i == 0)
			{
				n /= i;
			}
		}
	}
	if(n != 1)
	{
		res++;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}