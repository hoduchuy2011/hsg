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
	open("TONG");
	ll n, c;
	cin>>n;
	vector<ll> a(n + 1);
	for(ll i = 1; i <= n; i++)
	{
		cin>>c;
		a[i] = a[i - 1] + c;
	}
	map<ll, ll> m;
	for(auto i : a)
	{
		m[i]++;
	}
	ll res = 0;
	for(auto i : m)
	{
		res += i.se * (i.se - 1) / 2;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}