//Author: Lunaris
//Timestamp: 2025-12-01 13:53:39
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
	open("TG");
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c = n / 60;
		n -= c * 60;
		int hh = 8 + c, mm = n;
		if(hh < 10)
		{
			cout<<0;
		}
		cout<<hh<<":";		
		if(mm < 10)
		{
			cout<<0;
		}
		cout<<mm<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}