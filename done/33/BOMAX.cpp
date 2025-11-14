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
	open("BOMAX");
	int n;
	cin>>n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	ll t = a[0] + a[1] + a[2], pos = 0, res;
	res = t;
	for(int i = 3; i < n; i++)
	{
		t -= a[i - 3];
		t += a[i];
		if(res < t)
		{
			res = t;
			pos = i - 2;
		}
	}
	cout<<res<<"\n"<<pos + 1<<" "<<pos + 3;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}