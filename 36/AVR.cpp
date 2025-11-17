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
	open("avr");
	ll n;
	cin>>n;
	vector<ll> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	vector<ll> b;
	ll t = a[0], x;
	b.push_back(a[0]);
	for(int i = 1; i < n; i++)
	{
		x = a[i] * (i + 1);
		x -= t;
		b.push_back(x);
		t += x;
	}
	for(auto i : b)
	{
		cout<<i<<" ";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}