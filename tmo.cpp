#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

void open(st s)
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
    open(""); 
    ll n, k; 
    cin>>n>>k;
    vector<ll> a(n), f(n); 
    for(ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll s = 0;
    for(ll i = 0; i < n; i++)
    {
        f[i] = 1;
        for(ll j = 0; j < i; j++)
        {
            if(a[i] - a[j] >= k)
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        s = max(s, f[i]); 
    }
    cout<<s; 
    
    cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
    return 0;
}