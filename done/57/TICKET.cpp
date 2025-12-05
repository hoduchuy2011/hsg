//Author: Lunaris
//Timestamp: 2025-12-05 14:46:32
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
bool check(int x, int n)
{
	int a, b, c, d;
	d = x % 10;
	c = (x / 10) % 10;
	b = (x / 100) % 10;
	a = x / 1000;
	int s1 = a + b, s2 = c + d;
	ll mx = max(s1, s2);
	ll mn = min(s1, s2);
	ll res;
	if (mn < 10)
	{
		res = mx * 10 + mn;
	}
	else
	{
		res = mx * 100 + mn;
	}
	return res == n;
}
void solve()
{
	int n;
	cin>>n;
	for(int i = 1000; i <= 9999; i++)
	{
		if(check(i, n))
		{
			cout<<i;
			return;
		}
	}
	cout<<0;
}
signed main() 
{	
	open("TICKET");
	solve();

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}