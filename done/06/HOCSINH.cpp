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
	open("HOCSINH");
	int n, q;
	cin>>n>>q;
	map<int, int> a;
	while(n--)
	{
		int c;
		cin>>c;
		a[c]++;
	}
	while(q--)
	{
		int c;
		cin>>c;
		if(a[c] > 0)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
		cout<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}