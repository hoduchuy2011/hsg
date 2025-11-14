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
bool cmp(string a, string b)
{
	if(a.size() != b.size())
	{
		return a.size() > b.size();
	}
	else
	{
		for(int i = 0; i < a.size(); i++)
		{
			if(a[i] > b[i])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;//1 -> a >= b
}
void solve()
{
	string s;
	cin>>s;
	string t = "";
	string res = "0";
	for(auto i : s)
	{
		if(i >= '0' && i <= '9')
		{
			t += i;
		}
		else
		{
			if(cmp(t, res))
			{
				res = t;
			}
			t = "";
		}
	}
	if(t.size() != 0)
	{
		if(cmp(t, res))
		{
			res = t;
		}
	}
	if(res == "0")
	{
		cout<<0;
		return;
	}
	string c = "";
	for(auto i : res)
	{
		if(!(i == '0' && c.size() == 0))
		{
			c += i;
		}
	}
	cout<<c;
}
signed main()
{
	open("MATKHAU");
	solve();

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}