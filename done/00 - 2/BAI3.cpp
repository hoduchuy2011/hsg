#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define all(a) a.begin(), a.end()

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
	open("BAI3");
	int n;
	cin>>n;
	string s;
	cin>>s;
	string t = "";
	bool f;
	vector<string> a;
	for(int i = 0; i < n; i++)
	{
		if(isdigit(s[i]))
		{
			if(t.size() > 0)
			{
				a.push_back(t);
				t = "";
			}
			t += s[i];
		}
		else
		{
			if(t.size() > 0) 
			{
				t += s[i];
			}
		}
	}
	if(t.size() > 0)
	{
		a.push_back(t);
	}
	for(auto i : a)
	{
		if(i[0] == '0') 
		{
			reverse(i.begin() + 1, i.end());
		}
		if(i.size() != 1)
		{
			i.erase(0, 1);
			cout<<i<<" ";
		}
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}