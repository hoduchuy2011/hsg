#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("LCM.INP", "r"))
	{
		freopen("LCM.INP", "r", stdin);
		freopen("LCM.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
void solve() {
    ll l, r;
    cin >> l >> r;
    if (2 * l <= r) 
    {
        cout << l << " " << 2 * l << endl;
    } 
    else 
    {
        cout << -1 << " " << -1 << endl;
    }
}

signed main() 
{
    open();
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    
    return 0;
}
