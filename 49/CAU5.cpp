//Author: Lunaris
//Timestamp: 2025-12-02 12:09:35
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
	open("CAU5");
	ll n;
	cin>>n;
	ll c, m, s, b;
	c = m = s = b = 0;
	if (n > 90)
	{
		b = n - 90;
	}
	for (ll i = b; i <= n; i++)
	{
		m = i;
		s = 0;
		while (m > 0)
		{
			s += m % 10;
			m /= 10;
		}

		if (i + s == n)
		{
			c++;
		}
	}
	cout << c;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}