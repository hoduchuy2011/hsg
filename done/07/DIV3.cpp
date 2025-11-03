#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
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
	open("DIV3");
	ll n, c;
	cin>>n;
	ll d1, d2, d0;
	d1 = d2 = d0 = 0;
	while(n--)
	{
		cin>>c;
		if(c % 3 == 0)
		{
			d0++;
		}
		if(c % 3 == 1)
		{
			d1++;
		}
		if(c % 3 == 2)
		{
			d2++;
		}
	}
	ll res = d0 * (d0 - 1) / 2;
	res += d1 * d2;
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}