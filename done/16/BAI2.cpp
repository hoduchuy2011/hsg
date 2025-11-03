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
	open("BAI2");
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	vector<string> a, b;
	string s = "";
	for(int i = 0; i < s1.size(); i++)
	{
		if(i == 0)
		{
			s += s1[i];
		}
		else if(s1[i] != ' ')
		{
			if(s1[i] != s1[i - 1])
			{
				s += s1[i];
			}
		}
		else
		{
			a.push_back(s);
			s = "";
		}
	}
	if(s != "")
	{
		a.push_back(s);
	}
	s = "";
	for(int i = 0; i < s2.size(); i++)
	{
		if(i == 0)
		{
			s += s2[i];
		}
		else if(s2[i] != ' ')
		{
			if(s2[i] != s2[i - 1])
			{
				s += s2[i];
			}
		}
		else
		{
			b.push_back(s);
			s = "";
		}
	}
	if(s != "")
	{
		b.push_back(s);
	}
	int res = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] == b[i])
		{
			res++;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}