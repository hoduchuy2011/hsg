//Author: Lunaris
//Timestamp: 2025-12-04 14:22:31
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
	open("KhaoSatGia");
	int t;
	cin>>t;
	vector<pair<char, int>> a;
	string s;
	int sum = 0;
	while(t--)
	{
		cin>>s;
		int res = mod;
		char m = s[0];
		for(int i = 1; i < s.size(); i++)
		{
			res = min(res, s[i] - '0');
		}
		a.push_back({m, res});
		sum += res;
	}
	for(auto i : a)
	{
		cout<<i.fi<<i.se<<"\n";
	}
	cout<<sum;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}