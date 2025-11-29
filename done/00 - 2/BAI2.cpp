#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define all(a) a.begin(), a.end()

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
	open("BAI2");
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(all(a), greater<int>());
	bool f = false;
	for(int k = 1; k <= n; k++)
	{
		if(a[k-1] >= k)
		{
			if(k == n || a[k] < k)
			{
				cout << k;
				f = true;
				break;
			}
		}
	}
	if(!f)
	{
		cout<<-1; 
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}