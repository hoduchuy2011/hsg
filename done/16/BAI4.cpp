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
int pre[105];
bool aris(int c) 
{
	if (c < 2) return 0;
	for (int b = 2; b * b <= c; b++) 
	{
		if (c % b == 0) return false;
	}
	return true;
}
void solve() 
{
	ll l, r;
	for (int b = 3; b <= 100; b++) 
	{
		pre[b] = aris(b);
		pre[b] += pre[b - 1];
	}
	cin >> l >> r;
	ll a = 0;
	for (ll b = 2; b * b <= r; b++) 
	{
		if (aris(b) == 0) 
		{
			continue;
		}
		int d = 1, e = 1;
		ll f = b, g = b;
		while (f < l) 
		{
			f *= b;
			d++;
		}
		while (g <= r) 
		{
			g = g * b;
			e++;
		}
		a += pre[e] - pre[d];
	}
	cout << a;
}

int main() 
{
	open("BAI4");
	solve();
	
	return 0;
}