//Author: Lunaris
//Timestamp: 2025-12-03 14:37:56
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
	open("QUANXE");
	int n;
	cin>>n;
	vector<pair<int, int>> b;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		int new_row = y;
		int new_col = n - x + 1;
		
		b.push_back({new_row, new_col});
	}
	sort(all(b));
	for(auto i : b)
	{
		cout<<i.fi<<" "<<i.se<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}