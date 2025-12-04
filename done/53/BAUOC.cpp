//Author: Lunaris
//Timestamp: 2025-12-04 07:39:07
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
int a[nmax + 5];
void sang()
{
	memset(f, 1, sizeof(f));
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
	for(int i = 1; i <= nmax; i++)
	{
		a[i] = a[i - 1] + f[i];
	}
}
signed main() 
{	
	open("BAUOC");
	sang();
	ll n;
	cin>>n;
	n = sqrt(n);
	cout<<a[n];

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}