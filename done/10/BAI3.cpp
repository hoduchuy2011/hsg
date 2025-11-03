#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define tr(i) (i == 0 ? "+" : "-")
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
	open("BAI3");
	ll a, b, c, d, res = 0, tmp = 0;
	cin>>a>>b>>c>>d;
	for(int i = 0; i <= 1; i++)
	{
		for(int j = 0; j <= 1; j++)
		{
			for(int k = 0; k <= 1; k++)
			{
				for(int l = 0; l <= 1; l++)
				{
					tmp = 0;
					if(i == 0)
					{
						tmp += a;
					}
					else
					{
						tmp -= a;
					}
					if(j == 0)
					{
						tmp += b;
					}
					else
					{
						tmp -= b;
					}
					if(k == 0)
					{
						tmp += c;
					}
					else
					{
						tmp -= c;
					}
					if(l == 0)
					{
						tmp += d;
					}
					else
					{
						tmp -= d;
					}
					if(tmp > 0 && tmp % 10 == 0)
					{
						cout<<tr(i)<<a<<tr(j)<<b<<tr(k)<<c<<tr(l)<<d<<"="<<tmp<<"\n";
					}
				}
			}
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}