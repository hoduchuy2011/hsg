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
	ll n, d;
	cin>>n>>d;
	ll p, q, m;
	cin >> p >> q >> m;
	vector<ll> a(n + 1);
	for (ll i = 1; i <= n; i++)
	{
		a[i] = (p * i) % m + q;
	}
	multiset<ll> s;
	for (ll i = 1; i <= n; i++)
	{
		s.insert(i * d + a[i]);
	}
	ll r = *s.rbegin();
	for (ll i = 2; i <= n; i++)
	{
		ll x = (i - 1) * d + a[i - 1];
		auto it = s.find(x);
		s.erase(it);

		ll k = i + n - 1;
		ll v = k * d + a[(k - 1) % n + 1];
		s.insert(v);

		ll c = *s.rbegin() - (i - 1) * d;
		if (c < r) r = c;
	}
	cout << r;
}
signed main()
{
	open("DAYHOC");
	solve();
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}