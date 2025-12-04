//Author: Lunaris
//Timestamp: 2025-12-04 08:54:50
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
ll k, n;
vector<int> a;
void aris(ll i, ll s, string sr)
{
	if (s > k)
    {
        return;
    }
    if (i == n)
    {
        if (s == k)
        {
            cout << sr;
            exit(0);
        }
        return;
    }
	aris(i + 1, s + a[i], sr + "1");
	aris(i + 1, s, sr + "0");
}
signed main() 
{	
	open("CHONSO");
	cin>>n;
	a.resize(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	cin>>k;
	aris(0, 0, "");

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}