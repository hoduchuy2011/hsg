#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
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
int main() 
{
	open("DANVU");
	int n, m;
	cin>>n>>m;
	vector<int> a(n), b(m);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(all(a));
	for(int i = 0; i < m; i++)
	{
		cin>>b[i];
	}
	sort(all(b));
	int p = 0, res = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > b[p])
		{
			res++;
			p++;
		}
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}