//Author: Lunaris
//Timestamp: 2025-12-04 07:21:53
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
	open("soanhca");
	string s;
	cin>>s;
	sort(all(s), greater<char>());
	bool f = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i] != '0')
		{
			f = 1;
			break;
		}
	}
	if(f)
	{
		cout<<s;
	}
	else
	{
		cout<<0;
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}