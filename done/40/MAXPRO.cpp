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
	open("MAXPRO");
	ll a, b, c, M;
	cin >> a >> b >> c >> M;
	ll p1 = a * b;
	ll p2 = b * c;
	ll p3 = a * c;
	ll mx = p1;
	if (p2 > mx) mx = p2;
	if (p3 > mx) mx = p3;
	ll ans = mx % M;
	cout<<ans;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}