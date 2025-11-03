#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI1.INP", "r"))
	{
		freopen("BAI1.INP", "r", stdin);
		freopen("BAI1.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main() 
{
	open();
	ll n, res = 2;
	cin>>n;
	for(ll i = 2; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			res++;
			if(n / i != i)
			{
				res++;
			}
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
