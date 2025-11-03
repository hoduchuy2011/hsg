#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("TN.INP", "r"))
	{
		freopen("TN.INP", "r", stdin);
		freopen("TN.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int main() 
{
	open();
	ll a, b;
	cin>>a>>b;
	ll l = a * b / __gcd(a, b);
	cout<<l<<"\n"<<l / a << " " << l / b;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
