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

bool check(ll x, int n, int m, vector<ll>& a, vector<ll>& b) {
    int i = 1;
    while (i <= n && a[i] >= x) {
        i++;
    }

    for (int t = 1; t <= m; t++) {
        if (i > n) {
            return true;
        }
        ll thieu = x - a[i];
        if (b[t] >= thieu) {
            i++;
            while (i <= n && a[i] >= x) {
                i++;
            }
        }
    }
    return (i > n);
}

int main() {
	open("B3");

    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<ll> b(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }

    ll lo = 0;
    ll hi = 2000000001;
    ll ans = 0;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (check(mid, n, m, a, b)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";

    return 0;
}