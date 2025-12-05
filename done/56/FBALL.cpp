//Author: Lunaris
//Timestamp: 2025-12-05 10:10:51
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
	open("FBALL");
	int p, q, r, s, u, v;
	cin>>p>>q>>r>>s>>u>>v;
	int a, b, c;
	a = b = c = 0;
	if(p > q)
	{
		a += 3;
	}
	else if(p < q)
	{
		b += 3;
	}
	else
	{
		a++;
		b++;
	}
	if(r > s)
	{
		a += 3;
	}
	else if(r < s)
	{
		c += 3;
	}
	else
	{
		c++;
		a++;
	}
	if(u > v)
	{
		b += 3;
	}
	else if(u < v)
	{
		c += 3;
	}
	else
	{
		c++;
		b++;
	}
	cout<<a<<" "<<b<<" "<<c;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}