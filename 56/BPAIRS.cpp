//Author: Lunaris
//Timestamp: 2025-12-05 10:16:32
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
int tcs(ll n)
{
	int s = 0;
	while(n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
signed main() 
{	
	open("BPAIRS");
	int n;
	cin>>n;
	ll c;
	map<ll, int> a;
	while(n--)
	{
		cin>>c;
		a[tcs(c)]++;
	}
	ll res = 0;
	for(auto i : a)
	{
		res += i.se * (i.se - 1) / 2;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}