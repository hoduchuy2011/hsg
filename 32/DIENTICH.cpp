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
	open("DIENTICH");
	//A(int(R*cos(45));int(R*sin(45)))
	ll r;
    cin >> r;
    ll a = 0;
    ll rr = r * r;
    for (ll x = 1; x < r; ++x) 
    {
        ll yy = rr - x * x;
        ll y = sqrt(yy);
        if (y >= 1) 
        {
            a = max(a, 4 * x * y);
        }
    }
    cout << a;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}