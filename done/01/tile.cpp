#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second

using namespace std;

void open()
{
	if(fopen(".INP", "r"))
	{
		freopen(".INP", "r", stdin);
		freopen(".OUT", "w", stdout);
	}
	if(fopen("vatsua.inp", "r"))
	{
		freopen("vatsua.inp", "r", stdin);
		freopen("vatsua.out", "w", stdout);
	}
	if(fopen("tile.inp", "r"))
	{
		freopen("tile.inp", "r", stdin);
		freopen("tile.out", "w", stdout);
	}
	if(fopen("capso.inp", "r"))
	{
		freopen("capso.inp", "r", stdin);
		freopen("capso.out", "w", stdout);
	}
	if(fopen("camdien.inp", "r"))
	{
		freopen("camdien.inp", "r", stdin);
		freopen("camdien.out", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
void bai1()
{
	int n, res = 0, t = 0;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	for(int i = 0; i < n; i++)
	{
		res += a[i] - i;
	}
	cout<<res;
}
void bai2()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int h = 0, res = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= h)
		{
			res++;
			h++;
		}
	}
	cout<<res;
}
void bai3()
{
	int n, c, res = 0;
	cin>>n;
	map<int, int> a;
	for(int i = 0; i < n; i++)
	{
		cin>>c;
		a[c]++;
	}
	for(auto i : a)
	{
		res += i.se * (i.se - 1) / 2;
	}
	cout<<res;
}
void bai4()
{
	int n, m, res = 1, cnt = 0;
	cin>>n>>m;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	for(int i = 0; i < n; i++)
	{
		res += a[i] - 1;
		cnt++;
		if(res >= m)
		{
			cout<<cnt;
			return;
		}
	}
	cout<<-1;
}
int main()
{
	open();
	bai2();

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
