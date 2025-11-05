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
	open("CAU4");
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; ++i)
    {
        ll a, b;
        cin >> a >> b;
        m[a]++;
    }
    ll r = 0;
    for (auto const& p : m)
    {
        ll k = p.second;
        if (k > 1)
        {
            r += k * (k - 1) / 2;
        }
    }
    cout << r << "\n";

    return 0;
}