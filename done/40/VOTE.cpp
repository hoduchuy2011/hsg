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
int v[5005]; 
signed main() 
{
	open("VOTE");
	int n;
	cin>>n;
	char c;
	for (int i = 1; i <= n; ++i) 
	{
		for (int j = 1; j <= n; ++j) 
		{
			cin >> c;
			if (c == 'X') 
			{
				v[j]++;
			}
		}
	}
	int mx = -1;
	for (int i = 1; i <= n; ++i) 
	{
		if (v[i] > mx) 
		{
			mx = v[i];
		}
	}
	vector<int> w;
	for (int i = 1; i <= n; ++i) 
	{
		if (v[i] == mx) 
		{
			w.push_back(i);
		}
	}
	cout << w.size() << " " << mx << "\n";
	for (size_t i = 0; i < w.size(); ++i) 
	{
		cout << w[i] << (i == w.size() - 1 ? "" : " ");
	}
	cout << "\n";

	return 0;
}