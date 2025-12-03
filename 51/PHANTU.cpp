//Author: Lunaris
//Timestamp: 2025-12-03 15:23:32
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
	open("PHANTU");
	string s;
	cin>>s;
	vector<pair<char, int>> a;
	char t;
	string c = "";
	for(auto i : s)
	{
		if(!isdigit(i))
		{
			if(c != "")
			{
				a.push_back({t, stoi(c)});
			}
			t = i;
			c = "";
		}
		else
		{
			c += i;
		}
	}
	a.push_back({t, stoi(c)});
	int res = 0;
	for(auto i : a)
	{
		if(i.fi == 'H')
		{
			res += i.se;
		}
		else if(i.fi == 'O')
		{
			res += i.se * 16;
		}
		else if(i.fi == 'N')
		{
			res += i.se * 14;
		}
		else
		{
			res += i.se * 12;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}