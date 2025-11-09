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
	open("XAULAP");
	int n;
	cin>>n;
	string s;
	cin >> s;
	ll t = (ll)n * (n + 1) / 2;
	ll u = 0;
	vector<int> f(26, 0);
	int i = 0;
	for (int j = 0; j < n; ++j)
	{
		f[s[j] - 'a']++;
		while (f[s[j] - 'a'] > 1)
		{
			f[s[i] - 'a']--;
			i++;
		}
		u += (j - i + 1);
	}
	ll r = t - u;
	cout<<r;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}