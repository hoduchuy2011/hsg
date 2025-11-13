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
bool cp(ll n)
{
	ll s = sqrt(n);
	return s * s == n;
}
signed main()
{
	open("socp");
	int n;
	cin>>n;
	vector<ll> a;
	ll c;
	while(n--)
	{
		cin>>c;
		if(cp(c))
		{
			a.push_back(sqrt(c));
		}
	}
	sort(all(a));
	ll i = 0;
	for(ll i = 0; i <= 1000006; i++)
	{
		if(!binary_search(all(a), i))
		{
			cout<<i * i;
			break;
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
