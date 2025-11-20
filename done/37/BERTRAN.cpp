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
const int nmax = 2e6+5;
vector<bool> f(nmax, 1);
void sang()
{
	f[0] = f[1] = 0;
	for(int i = 2; i * i <= nmax; i++)
	{
		if(f[i])
		{
			for(int j = i*i; j <= nmax; j += i)
			{
				f[j] = 0;
			}
		}
	}
}
signed main()
{
	open("BERTRAN");
	sang();
	int p, res = 0;
	cin>>p;
	for(int i = p + 1; i < 2 * p; i++)
	{
		if(f[i])
		{
			cout<<i<<" ";
			res++;
		}
	}
	cout<<"\n"<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}