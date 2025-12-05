//Author: Lunaris
//Timestamp: 2025-12-05 14:58:48
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
	open("SHOES");
	ll n, d;
	cin>>n>>d;
	vector<ll> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	sort(all(a));
	ll res = 0;
    ll i = 0;
    while (i < n - 1)
    {
        if (a[i + 1] - a[i] <= d)
        {
            res++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}