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
	open("TROCHOI");
	int n;
	cin>>n;
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	sort(all(a));
	sort(all(b));
	int i = 0, j = n - 1;
	int r = INT_MAX;
	while(i < n && j >= 0)
	{
		int s = a[i] + b[j];
		r = min(r, abs(s));
		if(s == 0)
		{
			break;
		}
		else if(s > 0)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	cout<<r;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}