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
	open("GAME");
	int n, k;
	cin>>n>>k;
	vector<int> a(n + 1);
	for(int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	vector<int> b(n + 1, INT_MAX);
	b[0] = 0;
	b[1] = a[1];
	for(int i = 2; i <= k + 1; i++)
	{
		b[i] = max(b[i - 1], abs(a[i] - a[1]));
	}
	for(int i = k + 2; i <= n + 1; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			b[i] = min(b[i], abs(a[i] - a[j]) + b[j]);
		}
	}
	cout<<b[n];
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
