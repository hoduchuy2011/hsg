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
signed main()
{
	open("SONN");
	int n, i;
	vector<int> res;
	cin>>n;
	i = min(n, 9);
	while(n > 0)
	{
		res.push_back(i);
		n -= i;
		i = min(n, i - 1);
	}
	sort(all(res));
	for(auto i :res)
	{
		cout<<i;
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}