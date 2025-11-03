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
ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}
ll add(ll a, ll b)
{
    a += b;
    if (a >= mod) a -= mod;
    return a;
}
ll s1(ll n)
{
    ll t = n % mod;
    return mul(t, t);
}
ll s2(ll n)
{
    ll t = n % mod;
    return mul(t, (t + 1) % mod);
}
ll aris(ll x)
{
    if (x == 0) 
    {
    	return 0;
    }
    ll len = 1;
    ll a = 0, y = 0, s = 0;
    ll res = 0;
    bool f = true;
    while (s + len <= x)
    {
        if (f)
        {
            res = add(res, (s1(a + len) - s1(a) + mod) % mod);
            a += len;
        }
        else
        {
            res = add(res, (s2(y + len) - s2(y) + mod) % mod);
            y += len;
        }
        s += len;
        len <<= 1;
        f = !f;
    }
    ll tmp = x - s;
    if (tmp > 0)
    {
        if (f)
        {
            res = add(res, (s1(a + tmp) - s1(a) + mod) % mod);
        }
        else
        {
            res = add(res, (s2(y + tmp) - s2(y) + mod) % mod);
        }
    }
    return res;
}

int main()
{
	open("BAI4");
    ll l, r;
    cin >> l >> r;
    ll ans = (aris(r) - aris(l - 1) + mod) % mod;
    cout<<ans;

    return 0;
}
