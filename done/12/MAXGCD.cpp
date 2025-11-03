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
struct Pair 
{
    int g, i, j;
};
signed main() 
{
	open("MAXGCD");
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a) 
	{
		cin >> x;
	}
	vector<Pair> v;
	v.reserve(n * (n - 1) / 2);
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			v.push_back({__gcd(a[i], a[j]), i, j});
		}
	}

	sort(v.begin(), v.end(), [](const Pair &x, const Pair &y) 
	{
		return x.g > y.g;
	});

	int ans = 0;
	for (int x = 0; x < min((int)v.size(), 5000); ++x) 
	{
		for (int y = x + 1; y < min((int)v.size(), 5000); ++y)
		 {
			if (v[x].i != v[y].i && v[x].i != v[y].j && v[x].j != v[y].i && v[x].j != v[y].j)
			{
				ans = max(ans, v[x].g + v[y].g);
			}
		}
	}
	cout << ans << '\n';

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";

	return 0;
}