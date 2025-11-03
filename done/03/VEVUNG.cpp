#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("VEVUNG.INP", "r"))
	{
		freopen("VEVUNG.INP", "r", stdin);
		freopen("VEVUNG.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int main() 
{
	open();
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int t = a[0], res = 0;
	for(int i = 1; i < n; i++)
	{
		if(a[i] != t)
		{
			res++;
			t = a[i];
		}
	}
	cout<<res+1;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
