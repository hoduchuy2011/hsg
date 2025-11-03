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
	open("GAME");
	int n;
	ll s;
	int k;
	cin >> n >> s >> k;
	vector<ll> t(n);
	for (int i = 0; i < n; i++) 
	{
		cin >> t[i];
	}
	s -= t[k - 1];
	if (s < 0) 
	{
		cout << 0 << endl;
		return 0;
	}
	vector<ll> a;
	for (int i = 0; i < n; i++) 
	{
		if (i != k - 1) {
			a.push_back(t[i]);
		}
	}
	int m = a.size();
	int mid = m / 2;
	vector<ll> s1;
	for (int i = 0; i < (1 << mid); i++) 
	{
		ll cs = 0;
		for (int j = 0; j < mid; j++) 
		{
			if ((i >> j) & 1) {
				cs += a[j];
			}
		}
		s1.push_back(cs);
	}
	vector<ll> s2;
	int rem = m - mid;
	for (int i = 0; i < (1 << rem); i++) 
	{
		ll cs = 0;
		for (int j = 0; j < rem; j++) 
		{
			if ((i >> j) & 1) {
				cs += a[mid + j];
			}
		}
		s2.push_back(cs);
	}
	sort(s2.begin(), s2.end());
	ll ans = 0;
	for (ll cs1 : s1) 
	{
		ll target = s - cs1;
		if (target >= 0) {
			auto l = lower_bound(s2.begin(), s2.end(), target);
			auto u = upper_bound(s2.begin(), s2.end(), target);
			ans += distance(l, u);
		}
	}

	cout << ans;

	return 0;
}