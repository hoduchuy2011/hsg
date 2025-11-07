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
	open("CAU2");
	int n;
	cin >> n;
	vector<int> a(n);
	unordered_set<int> s;
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		s.insert(a[i]);
	}
	int res = 0;
	for (int x : a) 
	{
		if (s.find(-x) != s.end()) 
		{
			res++;
		}
	}
	cout << res / 2;
	return 0;
}
