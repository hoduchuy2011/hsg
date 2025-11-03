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
	open("BAI5");
	int n, k, b, s = 0, res = 0;
	cin>>n>>k>>b;
	vector<int> c(n);
	for(int i = 0; i < n; i++)
	{
		cin>>c[i];
		s += c[i];
	}
	b %= n;
	b--;
	vector<int> a;
	for(int i = b; i < n; i++)
	{
		a.push_back(c[i]);
	}
	for(int i = 0; i < b; i++)
	{
		a.push_back(c[i]);
	}
	int x = k / n;
	int y = k % n;
	for(int i = 0; i < y; i++)
	{
		res += a[i];
	}
	cout<<x * s + res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}