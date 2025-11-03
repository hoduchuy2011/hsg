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
	open("BAI4");
	int n, m;
	bool f = 1;
	cin>>n>>m;
	for(int i = 0; i <= 250; i++)
	{
		if(n % m == 0)
		{
			cout<<n/m;
			break;
		}
		int r;
		if(n < m)
		{
			if(i == 0)
			{
				cout<<0<<".";
			}
			else
			{
				r = (n * 10) % m;
				cout<<n * 10 / m;
				n = r;
			}
		}
		else
		{
			cout<<n / m<<".";
			r = n % m;
			n = r;
		}
		if(n == 0)
		{
			break;
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}