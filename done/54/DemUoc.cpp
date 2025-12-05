//Author: Lunaris
//Timestamp: 2025-12-04 14:12:38
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
	open("DemUoc");
	ll n;
	cin>>n;
	ll cnt = 0;
	for(ll i = 1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			cnt++;
			if(n/i != i)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}