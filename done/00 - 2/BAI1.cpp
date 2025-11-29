#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define all(a) a.begin(), a.end()

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
int nmax = 1e5 + 5;
vector<int> a(nmax, 0);
void sang()
{
	for(int i = 1; i < nmax; i++)
	{
		if(i % 10 == 2 || i % 10 == 3 || i % 10 == 5)
		{
			a[i] = a[i - 1] + 1;
		}
		else
		{
			a[i] = a[i - 1];
		}
	}
}
signed main()
{
	open("BAI1");
	sang();
	int t;
	cin>>t;
	while(t--)
	{
		int l, r;
		cin>>l>>r;
		cout<<a[r] - a[l - 1]<<"\n";
	}

	cerr<<"Time elapsed: "<<1.000 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}