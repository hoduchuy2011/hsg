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
	ll k;
	cin >> n >> k;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i) 
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	set<int> s;
	for (int i = 0; i < n; ++i) 
	{
		s.insert(i);
	}
	ll z = 0;
	for (int i = n - 1; i >= 0; --i) 
	{
		auto it = s.find(i);
		if (it != s.end()) 
		{
			z += a[i];
			s.erase(it);
			ll p = a[i];
			int c = i;

			while (true) 
			{
				ll t = p - k;
				int b = upper_bound(a.begin(), a.end(), t) - a.begin();
				int m = min(c - 1, b - 1);

				if (m < 0) {
					break;
				}
				auto f = s.upper_bound(m);
				if (f == s.begin())
				{
					break;
				}
				f--;
				int j = *f;
				s.erase(f);
				p = a[j];
				c = j;
			}
		}
	}

	cout << z << "\n";

	return 0;
}