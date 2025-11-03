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

int m, k;
vector<ll> a;
bool check(ll d) 
{
	int j = 0;
	int p = 0;
	while (p < m - 1) 
	{
		j++;
		int q = p;
		while (p + 1 < m && a[p + 1] - a[q] <= d) 
		{
			p++;
		}
		if (p == q) 
		{
			return false;
		}
	}
	return j <= k;
}

int main() 
{
	open("Jumfrog");
	cin >> m >> k;
	a.resize(m);
	for (int i = 0; i < m; i++) 
	{
		cin >> a[i];
	}
	ll l = 1;
	ll h = a[m - 1] - a[0];
	ll r = h;
	while (l <= h) 
	{
		ll d = l + (h - l) / 2;
		if (check(d)) 
		{
			r = d;
			h = d - 1;
		} 
		else 
		{
			l = d + 1;
		}
	}

	cout<<r;

	return 0;
}