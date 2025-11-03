#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI1.INP", "r"))
	{
		freopen("BAI1.INP", "r", stdin);
		freopen("BAI1.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int nmax = 1e6+5;
vector<bool> f(nmax, 1);
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
}
signed main()
{
	open();
	sang();
	int l, r, res = 0;
	cin>>l>>r;
	int x = sqrt(l);
	if(x * x < l)
	{
		x++;
	}
	for(int i = x; i * i <= r; i++)
	{
		res += f[i];
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
