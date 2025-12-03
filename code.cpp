//Author: Lunaris
//Timestamp: 2025-12-03 09:09
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
void solve()
{
	int n;
	cin >> n;
	vector<int> freq(1005, 0); 
	for (int i = 0; i < n; ++i) 
	{
		int c;
		cin >> c;
		freq[c]++;
	}
	for (int len = 1000; len >= 1; --len) 
	{
		if (freq[len] >= 4) 
		{
			long long res = (long long)len * len;
			int cnt = freq[len] / 4;
			cout << res << " " << cnt << "\n";
			return;
		}
	}
	cout << -1 << "\n";
}
signed main() 
{	
	open("");
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}