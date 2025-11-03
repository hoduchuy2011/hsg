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
	open("BAI1");
    ll n, a, b;
    cin >> n >> a >> b;
    ll x = a - min(a, b);
    ll y = a - max(0LL, b - (n - a));

    cout << x << " " << y;

    return 0;
}