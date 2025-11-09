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

int n;
ll m;
vector<ll> a;

bool c(ll h)
{
    ll t = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > h)
        {
            t += (a[i] - h);
        }
        
        if (t >= m)
        {
            return true;
        }
    }
    return t >= m;
}

signed main()
{
	open("PHILAO");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    a.resize(n);
    ll mn = 2e9;
    ll mx = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] < mn)
        {
            mn = a[i];
        }
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }

    ll s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > mn)
        {
            s += (a[i] - mn);
        }
    }
    cout << s << "\n";

    ll ans = -1;
    ll l = 0;
    ll r = mx;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (c(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    
    cout << ans << "\n";

    return 0;
}