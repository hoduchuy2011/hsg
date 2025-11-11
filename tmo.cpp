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

const int M = 100000 + 7;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> f(M, 0);
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        f[x]++;
        a = max(a, x);
    }

    vector<int> c(a + 1, 0);

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j += i)
        {
            if (f[j] > 0)
            {
                c[i]++;
            }
        }
    }

    int r = 1;

    for (int i = a; i >= 1; i--)
    {
        if (c[i] > 1)
        {
            r = i;
            break;
        }
    }

    cout << r << "\n";
}
signed main()
{
    open("");
    solve();
    return 0;
}