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
	if (fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
const int nmax = 1e4 + 5;
vector<ll> a(nmax + 5, 0);
void sang()
{
	for(int i = 1; i < nmax; i++)
	{
		for(int j = i; j < nmax; j += i)
		{
			a[j] += i;
		}
	}
}
ll aris(ll n)
{
	ll s = 0;
	for(ll i = 1; i * i <= n; i++)
	{
		if(n % i == 0)
		{
			s += i;
			if(n/i != i)
			{
				s += n/i;
			}
		}
	}
	return s;
}
signed main()
{
	open("SMTHU");
	sang();
	int q;
	cin>>q;
	while(q--)
	{
		ll n;
		cin>>n;
		if(n <= nmax)
		{
			cout<<a[n];
		}
		else
		{
			cout<<aris(n);
		}
		cout<<" ";
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}