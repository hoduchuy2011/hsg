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
	open("CAU2");
	int n, k, res = 0;
	cin>>n>>k;
	vector<int> a(n);
	for(auto &i : a)
	{
		cin>>i;
		res += i;
	}
	sort(all(a), greater<int>());
	for(int i = 0; i < n; i++)
	{
		if(i % k == k - 1)
		{
			res -= a[i];
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}