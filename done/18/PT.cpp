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
	open("PT");
	int n;
	cin>>n;
	vector<int> a(n + 1);
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	vector<int> d(n + 1);
	d[0] = 0;
	if(n >= 1)
	{
		d[1] = a[1];
	}
	for(int i = 2; i <= n; i++)
	{
		d[i] = max(d[i - 1], d[i - 2] + a[i]);
	}
	cout<<d[n];

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}