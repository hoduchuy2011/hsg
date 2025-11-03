#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
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
	open("UOC");
	ll n;
	cin>>n;
	vector<ll> a;
	for(ll i = 1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			a.push_back(i);
			if(n / i != i)
			{
				a.push_back(n / i);
			}
		}
	}
	sort(all(a));
	for(auto i : a)
	{
		cout<<i<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}