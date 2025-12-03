//Author: Lunaris
//Timestamp: 2025-12-03 15:38:50
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
int fib(int n)
{
	if(n == 0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
signed main() 
{	
	open("FLASHBACK");
	int n, k;
	cin>>n>>k;
	cout<<n * fib(2 * k + 1);

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}