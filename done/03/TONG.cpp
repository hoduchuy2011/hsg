#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("TONG.INP", "r"))
	{
		freopen("TONG.INP", "r", stdin);
		freopen("TONG.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int main() 
{
	open();
	int n, m;
	cin>>n>>m;
	map<int, int> a;
	int c;
	while(m--)
	{
		cin>>c;
		a[c]++;
	}
	int res = 0;
	for(auto i : a)
	{
		res += i.se + 1;
	}
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
