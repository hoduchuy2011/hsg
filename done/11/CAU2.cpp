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
ll aris(ll n)
{
	ll s = 0;
	for(ll i = 1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			s++;
			if(n / i != i)
			{
				s++;
			}
		}
	}
	return s;
}
void solve()
{
	ll n, c, s;
	cin>>n>>c;
	s = c;
	n--;
	while(n--)
	{
		cin>>c;
		s = __gcd(s, c);
	}
	cout<<aris(s)<<"\n";
}
signed main() 
{
	open("CAU2");
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}