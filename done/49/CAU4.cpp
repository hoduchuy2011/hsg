//Author: Lunaris
//Timestamp: 2025-12-02 14:05:46
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
	open("CAU4");
	ll m, n;
	cin>>m>>n;
	ll res = 0;
	for(ll i = 1; i <= n; i++)
	{
		if(i % m == 0 || (i + 1) % m == 0)
		{
			res++;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}