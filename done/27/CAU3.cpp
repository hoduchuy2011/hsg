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

bool f(const string &s)
{
	for (char c : s)
	{
		if (!isdigit(c))
		{
			return false;
		}
	}
	return true;
}

bool g(const string &a, const string &b)
{
	if (a.size() != b.size())
	{
		return a.size() > b.size();
	}
	return a > b;
}

int main()
{
	open("CAU3");
	string x, y;
	getline(cin, x);
	getline(cin, y);
	int n = x.size(), m = y.size();
	vector<vector<int>> d(n + 1, vector<int>(m + 1, 0));
	string r = "";
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (x[i - 1] == y[j - 1])
			{
				d[i][j] = d[i - 1][j - 1] + 1;
				string s = x.substr(i - d[i][j], d[i][j]);
				if (f(s))
				{
					if (g(s, r))
					{
						r = s;
					}
				}
			}
			else
			{
				d[i][j] = 0;
			}
		}
	}

	cout << r;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
