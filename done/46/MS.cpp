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
void solve() 
{
	string s;
	cin >> s;
	set<string> v;
	for (int i = 0; i < s.length(); i++) 
	{
		if (isdigit(s[i])) 
		{
			string num = "";
			while (i < s.length() && isdigit(s[i])) 
			{
				num += s[i];
				i++;
			}
			i--;
			while (num.size() > 1 && num[0] == '0') 
			{
				num.erase(0, 1);
			}
			v.insert(num);
		}
	}
	cout << v.size();
}

signed main()
{
	open("MS");
	solve();
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}