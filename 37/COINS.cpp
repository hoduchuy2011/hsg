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
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.se - a.fi < b.se - b.fi;
}
signed main()
{
	open("COINS");
	int n, m;
	cin>>n>>m;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i].fi;
	}
	for(int i = 0; i < n; i++)
	{
		cin>>a[i].se;
	}
	sort(all(a), cmp);
	for(auto i : a)
	{
		if(m >= i.se - i.fi)
		{
			m += i.fi;
		}
		else
		{
			break;
		}
	}
	cout<<m;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}