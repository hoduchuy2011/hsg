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
signed main()
{
	open("SOTK");
	ll m, n, k;
	cin>>n>>m>>k;
	vector<ll> a(n), b(m);
	for(auto &i : a)
	{
		cin>>i;
	}
	for(auto &i : b)
	{
		cin>>i;
	}
	sort(all(a));
	sort(all(b));
	ll l = a[0] + b[0], r = a[n - 1] + b[m - 1];
	ll ans = r;
	while (l <= r)
	{
		ll mid = l + (r - l) / 2;
		ll cnt = 0;
		int j = m - 1;
		for (int i = 0; i < n; i++)
		{
			while (j >= 0 && a[i] + b[j] > mid)
			{
				j--;
			}
			cnt += (j + 1);
		}
		if (cnt >= k)
		{
			ans = mid;
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout<<ans;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}