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
bool snt(int n)
{
	if(n <= 1 || n == 4 || n == 6 || n == 8 || n == 9)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
signed main()
{
	open("SONTTQ");
	string n;
	int k;
	cin>>n>>k;
	set<int> a;
	for(auto i : n)
	{
		a.insert(i - '0');
	}
	vector<int> v;
	for(auto i : a)
	{
		v.push_back(i);
	}
	if(v.size() < k)
	{
		cout<<-1;
	}
	else
	{
		cout<<v[k - 1]<<" "<<(snt(v[k - 1]) ? "Yes" : "No");
	}
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}