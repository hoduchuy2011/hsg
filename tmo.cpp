// De bai: Dem xem co bao nhieu hoc sinh nam dung o nua dau sau moi lan doi cho
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void open(string s)
{
    if (fopen((s + ".INP").c_str(), "r"))
    {
        freopen((s + ".INP").c_str(), "r", stdin);
        freopen((s + ".OUT").c_str(), "w", stdout);
    }
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

signed main()
{
    open("XEPHANG");

    int n, k;
    cin >> n >> k;

    vector<bool> f(2 * n + 1);
    for (int i = 1; i <= n; i++) f[i] = 1; // boys first

    int cnt = n; // currently all n boys in the first half

    while (k--)
    {
        int x, y;
        cin >> x >> y;

        bool a = f[x], b = f[y];

        // Only if they differ and one is in first half, one in second
        if (a != b)
        {
            if (x <= n && y > n)
                cnt -= a; // if boy moved out, -1; if girl moved out, 0
            else if (y <= n && x > n)
                cnt -= b;
            if (x <= n && y > n)
                cnt += b; // if girl moved in -> +0, if boy moved in -> +1
            else if (y <= n && x > n)
                cnt += a;
        }

        swap(f[x], f[y]);
        cout << cnt << "\n";
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}
