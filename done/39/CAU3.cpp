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
	vector<string> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	string s;
	cin>>s;
	vector<bool> f(s.size(), 0);
	for(auto k : a)
	{
		for(int i = 0; i < k.size(); i++)
		{
			if(k[i] == s[i])
			{
				f[i] = 1;
			}
		}
	}
	bool t = 1;
	for(auto i : f)
	{
		if(i == 0)
		{
			t = 0;
			break;
		}
	}
	if(!t)
	{
		cout<<-1;
	}
	else
	{
		int x = -1;
		for(auto k : a)
		{
			int r = 0;
			for(int i = 0; i < k.size(); i++)
			{
				if(k[i] == s[i])
				{
					r++;
				}
			}
			x = max(x, r);
		}
		cout<<s.size() - x;
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}