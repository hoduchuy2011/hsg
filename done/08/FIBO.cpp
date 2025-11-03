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
int main() 
{
	open("FIBO");
	const int nmax = 100005;
	vector<int> a(nmax, 1);
	for(int i = 2; i <= nmax; i++)
	{
		a[i] = (a[i - 1] + a[i - 2]) % mod;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<a[n - 1]<<"\n";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}