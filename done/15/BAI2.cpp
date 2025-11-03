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
	string s;
	map<char, int> a;
	cin>>s;
	for(auto i : s)
	{
		a[i]++;
	}
	cout<<a.size()<<"\n";
	for(auto i : a)
	{
		if(i.fi >= 'A' && i.fi <= 'Z')
		{
			cout<<i.fi<<" "<<i.se<<"\n";
		}
	}
	for(auto i : a)
	{
		if(i.fi >= 'a' && i.fi <= 'z')
		{
			cout<<i.fi<<" "<<i.se<<"\n";
		}
	}
	for(auto i : a)
	{
		if(i.fi >= '0' && i.fi <= '9')
		{
			cout<<i.fi<<" "<<i.se<<"\n";
		}
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}