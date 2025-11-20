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
	open("CAU4");
	int n, m, k;
	cin>>m>>n>>k;
	vector<vector<int>> a(m, vector<int>(n));
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	vector<vector<bool>> f(m, vector<bool>(n, false));
	for (int i = 0; i < m; ++i) 
	{
		for (int j = 0; j < n; ) 
		{
			if (a[i][j] == 0) 
			{
				j++;
				continue;
			}
			int ptr = j;
			while (ptr < n && a[i][ptr] == a[i][j]) 
			{
				ptr++;
			}
			if (ptr - j >= k) 
			{
				for (int p = j; p < ptr; ++p) 
				{
					f[i][p] = true;
				}
			}
			j = ptr;
		}
	}
	for (int j = 0; j < n; ++j) 
	{
		for (int i = 0; i < m; ) 
		{
			if (a[i][j] == 0) 
			{
				i++;
				continue;
			}
			int ptr = i;
			while (ptr < m && a[ptr][j] == a[i][j]) 
			{
				ptr++;
			}
			if (ptr - i >= k) 
			{
				for (int p = i; p < ptr; ++p) 
				{
					f[p][j] = true;
				}
			}
			i = ptr;
		}
	}
	int res = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] != 0 && f[i][j] == 0)
			{
				res++;
			}
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}