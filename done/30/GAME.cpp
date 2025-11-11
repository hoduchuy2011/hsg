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
	open("GAME");
	int n, k;
	cin>>n>>k;
	vector<ll> a(n + 1);
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	vector<ll> dp(n + 1, LLONG_MAX);
	dp[1] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = max(1, i - k); j <= i - 1; j++)
		{
			dp[i] = min(dp[i], dp[j] + abs(a[i] - a[j]));
		}
	}
	cout<<dp[n];
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
