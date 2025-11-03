#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI4.INP", "r"))
	{
		freopen("BAI4.INP", "r", stdin);
		freopen("BAI4.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int bns(vector<int>& a, int s)
{
	int l = 0, r = 1000000000, m;
	while(l <= r)
	{
		int k = (r + l) / 2;
		int res = 0;
		for(auto i : a)
		{
			res += max(0, i - k);
		}
		if(res == s)
		{
			return k;
		}
		if(res < s)
		{
			r = k - 1;
		}
		else
		{
			l = k + 1;
		}
	}
}
signed main() 
{
	open();
	int n, s;
	cin>>n>>s;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<bns(a, s);

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
