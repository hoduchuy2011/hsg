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
	if (fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main()
{
	open("GIFTBUY");
	int n, k, res = 0;
	cin>>n>>k;
	vector<int> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	multiset<int> s;
	sort(all(a), greater<int>());
	for(int i : a)
	{
		auto it = s.lower_bound(i + k);
		if(it != s.end())
		{
			s.erase(it);
			s.insert(i);
		}
		else
		{
			res += i;
			s.insert(i);
		}
	}
	cout<<res;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}