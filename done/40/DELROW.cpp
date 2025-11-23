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
int n, m;
ll h[5005][5005];
const ll MOD = 1e9 + 7;
const ll BASE = 311;
bool check(int k)
{
	vector<ll> v(m);
	for (int i = 0; i < m; i++)
	{
		v[i] = h[k][i];
	}
	sort(all(v));
	for (int i = 1; i < m; i++)
	{
		if (v[i] == v[i - 1]) return false;
	}
	return true;
}

void solve()
{
	cin>>n>>m;
	vector<string> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < m; j++)
	{
		h[n][j] = 0;
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)
		{
			h[i][j] = (h[i + 1][j] * BASE + a[i][j]) % MOD;
		}
	}

	int l = 0, r = n - 1;
	int ans = 0;

	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (check(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}

	cout << ans;
}
signed main()
{
	open("DELROW");
	solve();
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}