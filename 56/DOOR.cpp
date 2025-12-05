//Author: Lunaris
//Timestamp: 2025-12-05 10:18:57
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
void solve()
{
	ll a, b;
    cin >> a >> b;
    if (__gcd(a, b) > 1)
    {
        cout << 0;
        return;
    }
    ll m = a;
    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            m = min(m, i - (b % i));
            while (a % i == 0)
            {
                a /= i;
            }
        }
    }
    if (a > 1)
    {
        m = min(m, a - (b % a));
    }
    cout << m;
}
signed main() 
{	
	open("DOOR");
	int t;
	cin>>t;
	while(t--)
	{
		solve();
		cout<<(t != 0 ? "\n" : "");
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}