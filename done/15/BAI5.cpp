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
	open("BAI5");
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> f(n + 1, 0);
    ll a = 0;
    ll c = 0;
    f[0] = 1;
    for (char x : s) 
    {
        if (x == '1') 
        {
            c++;
        }
        if (c >= k) 
        {
            a += f[c - k];
        }
        f[c]++;
    }

    cout<<a;

    return 0;
}