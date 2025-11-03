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

int main()
{
	open("BAI3");
	int m = 10000001;
	vector<bool> v(m, true);
	v[0] = v[1] = false;
	for (int i = 2; i * i < m; i++)
	{
		if (v[i])
		{
			for (int j = i * i; j < m; j += i)
			{
				v[j] = false;
			}
		}
	}
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ll c = 0;
	for (int i = 0; i < n; i++)
	{
		ll s = 0;
		for (int j = i; j < n; j++)
		{
			s += a[j];
			if (v[s])
			{
				c++;
			}
		}
	}
	cout << c;
	
	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}