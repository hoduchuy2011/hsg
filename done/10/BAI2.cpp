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
	int cnt = 1;
	string s;
	cin>>s;
	for(int i = 1; i <= s.size(); i++)
	{
		if(s[i] != s[i - 1])
		{
			if(cnt == 1)
			{
				cout<<s[i-1];
			}
			else
			{
				cout<<cnt<<s[i-1];
			}
			cnt = 1;
		}
		else
		{
			cnt++;
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}