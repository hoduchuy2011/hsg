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
int main()
{
	open("CAU1");
	string s;
	cin>>s;
	string c;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] <= 'Z' && s[i] >= 'A')
		{
			if(i == 0)
			{
				c += tolower(s[i]);
			}
			else
			{
				c += '_';
				c += tolower(s[i]);
			}
		}
		else
		{
			c += s[i];
		}
	}
	cout<<c;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
