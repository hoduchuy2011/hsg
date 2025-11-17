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
ll n, k;
ll m = 1e9 + 7;
vector<ll> a;
vector<vector<ll>> d;
ll c(ll x, ll y)
{
	if (y < 0 || y > x)
	{
		return 0;
	}
	if (y == 0 || y == x)
	{
		return 1;
	}
	if (d[x][y] != -1)
	{
		return d[x][y];
	}
	d[x][y] = (c(x - 1, y - 1) + c(x - 1, y)) % m;
	return d[x][y];
}

int main()
{
	open("xoso");
	cin >> n >> k;
	a.resize(n);
	d.resize(n + 1, vector<ll>(k + 1, -1));
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(all(a));
	ll s = 0;
	for (ll i = 0; i < n; i++)
	{
		ll b = c(i, k - 1);
		s = (s + (a[i] * b) % m) % m;
	}
	cout<<s;

	return 0;
}