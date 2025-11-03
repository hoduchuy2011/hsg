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

char solve(ll a, ll b) 
{
	if (b == 3) 
	{
		if (a == 1) 
		{
			return '1';
		}
		if (a == 2) 
		{
			return '2';
		}
		return '3';
	}
	ll c = b / 2;
	if (a <= c) 
	{
		return solve(a, c);
	} 
	else 
	{
		char d = solve(a - c, c);
		if (d == '1') 
		{
			return '3';
		}
		if (d == '3') 
		{
			return '1';
		}
		return '2';
	}
}

int main() 
{
	open("NUMBER");
	ll a;
	cin >> a;
	ll b = 3;
	while (b < a) 
	{
		b *= 2;
	}
	cout << solve(a, b);
	
	return 0;
}