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
int main()
{
	open("THUASONT");
	ll n;
	cin>>n;
	map<ll, int> a;
	for(ll i = 2; i * i <= n; i++)
	{
		while(n % i == 0)
		{
			a[i]++;
			n /= i;
		}
	}
	if(n != 1)
	{
		a[n]++;
	}
	cout<<a.size()<<"\n";
	for(auto i : a)
	{
		cout<<i.fi<<" "<<i.se<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}