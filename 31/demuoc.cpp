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
int nmax = 1e6 + 5;
vector<int> a(nmax, 0);
void sang()
{
	for(int i = 1; i <= nmax; i++)
	{
		for(int j = i; j <= nmax; j += i)
		{
			a[j]++;
		}
	}
}
signed main()
{
	open("demuoc");
	sang();
	int n;
	cin>>n;
	int res = INT_MIN;
	for(int i = 1; i <= n; i++)
	{
		res = max(res, a[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == res)
		{
			cout<<i;
			break;
		}
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
