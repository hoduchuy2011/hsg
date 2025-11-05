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
signed main()
{
	open("DRB");
	ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll e = a - c;
    ll f = d - b;
    if (f == 0) 
    {
        cout << -1 << "\n";
    } 
    else 
    {
        if (e * f < 0) 
        {
            cout << -1 << "\n";
        } 
        else 
        {
            cout << e / f << "\n";
        }
    }
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}