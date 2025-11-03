#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
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
int main() 
{
	open("COTMOC");
	ll l, r;
	cin>>l>>r;
	vector<ll> a(10, 0);
	for(ll i = l; i <= r; i++)
	{
		ll c = i;
		while(c > 0)
		{
			a[c % 10]++;
			c /= 10;
		}
	}
	for(auto i : a)
	{
		cout<<i<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}