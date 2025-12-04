//Author: Lunaris
//Timestamp: 2025-12-03 15:19:56
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
const int nmax = 1e7 + 5;
bool f[nmax + 5];
void sang()
{
	fill(f, f + sizeof(f), 1);
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
bool aris(int n)
{
	if(!f[n])
	{
		return 0;
	}
	int s = 0;
	while(n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return f[s];
}
signed main() 
{	
	open("PASSWORD");
	sang();
	int l, r;
	cin>>l>>r;
	for(int i = l; i <= r; i++)
	{
		if(aris(i))
		{
			cout<<i<<" ";
		}
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}