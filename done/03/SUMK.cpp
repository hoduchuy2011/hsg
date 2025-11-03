#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("SUMK.INP", "r"))
	{
		freopen("SUMK.INP", "r", stdin);
		freopen("SUMK.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int main() 
{
	open();
	ll n, k;
	cin>>n>>k;
	vector<ll> d(n+1);
	d[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		ll c;
		cin>>c;
		d[i] = d[i - 1] + c;
	}
	ll res = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			if(d[j] - d[i - 1] == k)
			{
				res++;
			}
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
