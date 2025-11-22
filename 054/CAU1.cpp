#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define all(a) a.begin(), a.end()

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
	open("");
	ll a, b, c, d;// a/b - c/d
	cin>>a>>b>>c>>d;
	ll g = __gcd(b, d);
	g = (b * d) / g;
	a *= g / b;
	c *= g / d;
	//res: x / y
	ll x = a - c;
	ll y = g;
	ll t = __gcd(x, y);
	cout<<x/t<<" "<<y/t;

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
