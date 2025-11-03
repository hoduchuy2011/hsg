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

bool hina(string a, string b)
{
	ll n = a.length();
	ll m = b.length();
	if (n < m)
	{
		return true;
	}
	if (n > m)
	{
		return false;
	}
	return a < b;
}

string sub(string a, string b)
{
	if (a == b)
	{
		return "0";
	}
	string c = "";
	bool f = false;
	if (hina(a, b))
	{
		swap(a, b);
		f = true;
	}
	ll n = a.length();
	ll m = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	ll p = 0;
	for (ll i = 0; i < m; i++)
	{
		ll x = a[i] - '0';
		ll y = b[i] - '0';
		ll z = x - y - p;
		if (z < 0)
		{
			z += 10;
			p = 1;
		}
		else
		{
			p = 0;
		}

		c += to_string(z);
	}
	for (ll i = m; i < n; i++)
	{
		ll x = a[i] - '0';
		ll z = x - p;
		if (z < 0)
		{
			z += 10;
			p = 1;
		}
		else
		{
			p = 0;
		}

		c += to_string(z);
	}
	while (c.length() > 1 && c.back() == '0')
	{
		c.pop_back();
	}
	reverse(c.begin(), c.end());
	if (f)
	{
		return "-" + c;
	}
	return c;
}

string solve(string n)
{
	vector<string> a;
	for(int i = 0; i <= 900; i++)
	{
		string k = to_string(i);
		string s = sub(n, k);
		
		if (s.length() > 0 && s[0] != '-')
		{
            int res = 0;
            for(auto i : s)
            {
                res += (i - '0');
            }
            if(res == i)
            {
                a.push_back(s);
            }
		}
	}
	if(a.size() != 0)
	{
		sort(all(a));
		return a[0];
	}
	else
	{
		return "0";
	}
}

signed main()
{
	open("CAU4");
	string n;
	cin>>n;
	cout<<solve(n);

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
