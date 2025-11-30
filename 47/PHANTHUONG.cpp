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
void solve()
{
	ll n, s = 0;
	cin>>n;
	vector<ll> a(n);
	ll x = 0, y = 0, t, c;
	for(auto &i : a)
	{
		cin>>i;
		s += i;
	}
	for(ll i = 0; i < n; i++)
	{
		cin>>c;
		if(c == 1)
		{
			x += a[i];
		}
		else
		{
			y += a[i];
		}
	}
	cout<<abs(x - y)<<"\n";
	vector<bool> f(s + 1, 0);
	f[0] = 1;
	for(auto i : a)
	{
		for(int j = s; j >= i; j--)
		{
			if(f[j - i])
			{
				f[j] = 1;
			}
		}
	}
	for(int i = s / 2; i >= 0; i--)
	{
		if(f[i])
		{
			cout<<abs(s - 2 * i);
			return;
		}
	}
}
signed main()
{
	open("PHANTHUONG");
	solve();

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}