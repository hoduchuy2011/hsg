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
	open("CAU4");
	vector<ll> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	ll t;
	cin >> t;
	while (t--) 
	{
		ll a, b;
		cin >> a >> b;
		map<ll, ll> m;
		for (ll i = a; i <= b; i++) 
		{
			ll temp = i;
			for (ll k : p) {
				while (temp > 0 && temp % k == 0) 
				{
					m[k]++;
					temp /= k;
				}
			}
		}
		
		ll ans = 1;
		for (auto const& e : m) 
		{
			ans = (ans * (2 * e.second + 1)) % mod;
		}
		cout << ans << "\n";
	}
	return 0;
}