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
	open("DOIHINH");
	int n, c;
	cin>>n;
	map<int, int> a;
	while(n--)
	{
		cin>>c;
		a[c]++;
	}
	int cnt = 0, res = -1;
	for(auto i : a)
	{
		if(i.se > cnt)
		{
			cnt = i.se;
			res = i.fi;
		}
		else if(i.se == cnt)
		{
			if(i.fi > res)
			{
				res = i.fi;
			}
		}
	}
	cout<<res<<" "<<cnt;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}