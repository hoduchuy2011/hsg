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
    if (fopen((s + ".INP").c_str(), "r"))
    {
        freopen((s + ".INP").c_str(), "r", stdin);
        freopen((s + ".OUT").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<string> b(m);
    for (int j = 0; j < m; j++)
    {
        b[j].resize(n);
        for (int i = 0; i < n; i++)
        {
            b[j][n - 1 - i] = a[i][j];
        }
    }

    sort(b.begin(), b.end());

    int x = 0;
    for (int i = 0; i < m - 1; i++)
    {
        int c = 0;
        int l = b[i].length();
        for (int j = 0; j < l; j++)
        {
            if (b[i][j] == b[i + 1][j])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if (c > x) x = c;
    }

    cout << n - 1 - x;
}

signed main()
{
    open("DELROW");
    solve();
    
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
    return 0;
}