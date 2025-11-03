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
signed main() 
{
	open("CHONS");
	int n;
	cin >> n;
	bitset<100001> b;
	b[0] = 1;
	for (int i = 0; i < n; i++) 
	{
		int a;
		cin >> a;
		b = b | (b << a);
	}
	cout << b.count() - 1;

	return 0;
}