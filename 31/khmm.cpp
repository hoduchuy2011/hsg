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
	open("khmm");
	int n, x, y, c, l = INT_MAX, r = INT_MIN;
	cin>>n>>x>>y;
	map<int, int> t, a;
	vector<int> d(1000006);
	for(int i = 0; i < n; i++)
	{
		cin>>c;
		l = min(l, c);
		r = max(r, c);
		t[c]++;
		d[i] = c;
	}
	a[l - 1] = 0;
	a[l] = t[l];
	int dif = INT_MAX;
	for(int i = l + 1; i <= r; i++)
	{
		a[i] = a[i - 1] + t[i];
	}
	pair<int, int> res;
	for(int i = 0; i <= r; i++)
	{
		for(int j = i + 1; j <= r; j++)
		{
			if(a[j] - a[i - 1] == x && a[-1 * i] - a[-1 * j - 1] == y)
			{
				if(abs(i - j) < dif)
				{
					res = make_pair(i, j);
					dif = abs(i - j);
				}
				else if(abs(i - j) == dif)
				{
					if(i < res.fi)
					{
						res = make_pair(i, j);
					}
				}
			}
		}
	}
	cout<<res.fi<<" "<<res.se;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
