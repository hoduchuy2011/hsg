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
	open("CAU3");
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i = 0, sz = 0, tmp = 0, res = 0;
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '1')
		{
			sz = max(sz, tmp);
			tmp = 0;
			res++;
		}
		if(s[i] == '0')
		{
			tmp++;
		}
	}
	if(tmp != 0)
	{
		sz = max(sz, tmp);
	}
	cout<<res + sz;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}