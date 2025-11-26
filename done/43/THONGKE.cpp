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
	open("THONGKE");
	int n, c;
	cin>>n;
	vector<int> a(11, 0);
	while(n--)
	{
		cin>>c;
		a[c]++;
	}
	for(int i = 0; i <= 10; i++)
	{
		if(a[i] != 0)
		{
			cout<<i<<" "<<a[i]<<"\n";
		}
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}