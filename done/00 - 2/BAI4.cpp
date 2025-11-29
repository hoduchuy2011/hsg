#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()

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
	open("BAI4"); 
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> dp;
	for(int x : a)
	{
		if(dp.empty() || x > dp.back())
		{
			dp.push_back(x);
		}
		else
		{
			auto it = lower_bound(all(dp), x);
			*it = x;
		}
	}
	cout<<n - dp.size();

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}