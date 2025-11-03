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
	int n;
	cin >> n;
	vector<ll> a(n + 1), p(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		p[i] = p[i - 1] + a[i];
	}
	ll t = p[n];
	int m = 1;
	vector<int> r = {1};
	for (int i = 1; i <= n; ++i)
	{
		if (t % i != 0)
		{
			continue;
		}
		ll g = t / i;
		vector<int> x = {1};
		int k = 0;
		for (int j = 1; j <= n; ++j)
		{
			if (p[j] - p[x.back() - 1] == g)
			{
				++k;
				if (j + 1 <= n)
				{
					x.push_back(j + 1);
				}
			}
			else if (p[j] - p[x.back() - 1] > g)
			{
				k = 0;
				break;
			}
		}
		if (k == i && k > m)
		{
			m = k;
			r = x;
		}
	}
	cout << m << "\n";
	for (int i = 0; i < (int)r.size(); ++i)
	{
		cout << r[i];
		if (i + 1 < (int)r.size())
		{
			cout << " ";
		}
	}

	return 0;
}
