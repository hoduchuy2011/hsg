//Code tle 
#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI3.INP", "r"))
	{
		freopen("BAI3.INP", "r", stdin);
		freopen("BAI3.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main() 
{
	open();
	int n, res = 0;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++)
	{
		if(abs(a[i + 1] - a[i]) <= 5)
		{
			i++;
			res++;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
