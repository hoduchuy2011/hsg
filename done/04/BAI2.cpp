#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI2.INP", "r"))
	{
		freopen("BAI2.INP", "r", stdin);
		freopen("BAI2.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main() 
{
	open();
	ll n, k;
	cin>>n>>k;
	vector<ll> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
		a[i] += k;
	}
	while(k--)
	{
		cin>>n;
		a[n - 1]--;
	}
	for(auto i : a)
	{
		cout<<i<<" ";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
