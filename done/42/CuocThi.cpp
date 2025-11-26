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
	open("CuocThi");
	int n, q;
	cin>>n>>q;
	vector<int> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	sort(all(a));
	while(q--)
	{
		int x, y;
		cin>>x>>y;
		auto l = lower_bound(all(a), x), r = upper_bound(all(a), y);
		cout<<r - l<<"\n";
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}