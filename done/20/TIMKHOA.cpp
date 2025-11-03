#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 2
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
	open("TIMKHOA");
	int k, res, c;
	cin>>k;
	cin>>c;
	res = c;
	k--;
	while(k--)
	{
		cin>>c;
		res = __gcd(res, c);
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}