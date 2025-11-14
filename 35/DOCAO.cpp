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
int tcs(int n)
{
	int s = 0;
	while(n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}
signed main()
{
	open("DOCAO ");
	sang();
	int n, h, res = 0;
	cin>>n>>h;
	for(int i = 0; i <= n; i++)
	{
		if(f[i] && tcs(i) == h)
		{
			cout<<i<<"\n";
			res++;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}