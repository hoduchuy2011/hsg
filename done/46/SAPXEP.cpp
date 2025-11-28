//Author: Lunaris
//Timestamp: 2025-11-28 18:36:38
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
int main()
{
	open("SAPXEP");
	ll n;
	cin >> n;
	vector<pair<ll, ll>> a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());
	ll c = 0;
	ll e = 0;
	for (ll i = 0; i < n; i++)
	{
		if (a[i].second >= e)
		{
			c++;
			e = a[i].first;
		}
	}
	cout << c;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}