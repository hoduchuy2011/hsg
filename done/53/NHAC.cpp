//Author: Lunaris
//Timestamp: 2025-12-04 07:55:53
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
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.se < b.se;
}
signed main() 
{	
	open("NHAC");
	int n;
	cin>>n;
	vector<pair<int, int>> a;
	for(int i = 1; i <= n; i++)
	{
		int c;
		cin>>c;
		a.push_back({i, c});
	}
	sort(all(a), cmp);
	int res = 0, s = 0;
	for(auto i : a)
	{
		s += i.se;
		cout<<i.fi<<" "<<s<<"\n";
		res += s;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}