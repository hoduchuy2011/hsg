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

struct j
{
	ll d, c, p;
};

int f(const vector<j> &a, int i)
{
	int l = 0, r = i - 1, x = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m].c <= a[i].d)
		{
			x = m;
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return x;
}
bool cmp(const j &x, const j &y)
{
	return x.c < y.c;
}
int main()
{
	open("BAI4");
	int n;
	cin >> n;
	vector<j> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].d >> a[i].c >> a[i].p;
	}
	sort(a.begin(), a.end(), cmp);
	vector<ll> d(n);
	vector<int> c(n);
	d[0] = a[0].p;
	c[0] = 1;
	for (int i = 1; i < n; ++i)
	{
		ll p = a[i].p;
		int q = 1;
		int k = f(a, i);
		if (k != -1)
		{
			p += d[k];
			q += c[k];
		}
		if (p > d[i - 1])
		{
			d[i] = p;
			c[i] = q;
		}
		else
		{
			d[i] = d[i - 1];
			c[i] = c[i - 1];
		}
	}
	cout << c[n - 1] << " " << d[n - 1] << "\n";

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
