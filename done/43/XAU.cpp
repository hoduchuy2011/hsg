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
	open("XAU");
	string a, b;
	cin>>a>>b;
	vector<int> t(123, 0), r(123, 0);
	for(auto i : a)
	{
		t[i]++;
	}
	int c = a.size(), d = b.size(), res = 0;
	string s = b.substr(0, c - 1);
	s = "#" + s;
	for(auto i : s)
	{
		r[(int)i]++;
	}
	for(int i = 0; i <= d - c; i++)
	{
		bool f = 1;
		r[(int)s[0]]--;
		s = s.substr(1, c - 1);
		s += b[i + c - 1];
		r[(int)s[c - 1]]++;
		for(int i = 'a'; i <= 'z'; i++)
		{
			if(r[i] != t[i])
			{
				f = 0;
				break;
			}
		}
		res += f;
	}
	cout<<res;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}