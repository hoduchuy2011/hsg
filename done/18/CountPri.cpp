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
const int nmax = 1e6+5;
vector<bool> f(nmax, 1);
vector<int> a(nmax);
void sang()
{
	f[0] = f[1] = 0;
	for(int i = 2; i*i <= nmax; i++)
	{
		if(f[i])
		{
			for(int j = i*i; j <= nmax; j += i)
			{
				f[j] = 0;
			}
		}
	}
	a[0] = 0;
	for(int i = 1; i < nmax; i++)
	{
		a[i] = a[i - 1] + f[i];
	}
}
signed main() 
{
	open("CountPri");
	sang();
	int t;
	cin>>t;
	while(t--)
	{
		int l, r;
		cin>>l>>r;	
		cout<<a[r] - a[l - 1]<<"\n";
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}