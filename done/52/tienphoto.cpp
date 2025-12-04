//Author: Lunaris
//Timestamp: 2025-12-04 07:35:33
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
	open("tienphoto");
	ll l, m, n;
	cin>>l>>m>>n;
	if(l == 4)
	{
		if(n < 100)
		{
			if(m == 1)
			{
				cout<<n * 300;
			}
			else
			{
				cout<<n * 400;
			}
		}
		else
		{
			if(m == 1)
			{
				cout<<n * 250;
			}
			else
			{
				cout<<n * 350;
			}
		}
	}
	else
	{
		if(n < 100)
		{
			if(m == 1)
			{
				cout<<n * 600;
			}
			else
			{
				cout<<n * 800;
			}
		}
		else
		{
			if(m == 1)
			{
				cout<<n * 500;
			}
			else
			{
				cout<<n * 700;
			}
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}