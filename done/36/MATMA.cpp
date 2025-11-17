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
	open("matma");
	ll n, m, k, x;
	cin>>n>>m>>k>>x;
	string s;
	cin>>s;
	vector<string> v(m);
	for(auto &i : v)
	{
		cin>>i;
		sort(all(i));
	}
	x--;
	vector<char> r(m);
	for (int i = m - 1; i >= 0; --i)
	{
		r[i] = v[i][x % k];
		x /= k;
	}
	int j = 0;
	for(auto i : s)
	{
		if(i == '#')
		{
			cout<<r[j];
			j++;
		}
		else
		{
			cout<<i;
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}