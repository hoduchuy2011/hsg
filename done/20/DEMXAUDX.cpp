#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 2
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
void solve()
{
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	vector<vector<int>> prefix(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++)
	{
		dp[i][i] = 1;
	}
	for (int len = 2; len <= n; len++)
	{
		for (int i = 0; i + len - 1 < n; i++)
		{
			int j = i + len - 1;
			if (s[i] == s[j])
			{
				if (len == 2 || dp[i + 1][j - 1])
					dp[i][j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + dp[i - 1][j - 1];
		}
	}
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << prefix[b][b] - prefix[a - 1][b] - prefix[b][a - 1] + prefix[a - 1][a - 1] << "\n";
	}
}
int main()
{
	open("DEMXAUDX");
	solve();

	return 0;
}
