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
	open("CAU2");
	string s;
	int k;
	cin >> s >> k;
	string d;
	for (char c : s) 
	{
		if (isdigit(c)) 
		{
			d.push_back(c);
		}
	}
	string r;
	int m = d.length() - k;
	for (char c : d) 
	{
		while (!r.empty() && c > r.back() && m > 0) 
		{
			r.pop_back();
			m--;
		}
		r.push_back(c);
	}
	r.resize(k);
	cout << r;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}