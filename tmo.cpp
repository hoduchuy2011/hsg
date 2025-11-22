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
    open("");

    int n, x, y;
    cin >> n >> x >> y;
    vector<int> d(n);
    map<int, int> t, p;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        d[i] = a;
        t[a]++;
        p[-a]++;
        if (a >= 1 && a <= 1000000) c.push_back(a);
        if (-a >= 1 && -a <= 1000000) c.push_back(-a);
    }

    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());
    int m = c.size();
    vector<int> s(m + 1, 0), q(m + 1, 0);
    for (int i = 0; i < m; i++)
    {
        s[i + 1] = s[i] + t[c[i]];
        q[i + 1] = q[i] + p[c[i]];
    }

    bool f = 0;
    pair<int, int> r;
    int e = INT_MAX;

    for (int i = 0; i < m; i++)
    {
        if (c[i] < 1 || c[i] > 1000000) continue;
        for (int j = i; j < m; j++)
        {
            if (c[j] > 1000000) break;

            int u = s[j + 1] - s[i];
            int l = -c[j];
            int h = -c[i];
            int li = lower_bound(c.begin(), c.end(), max(l,1)) - c.begin();
            int ri = upper_bound(c.begin(), c.end(), min(h,1000000)) - c.begin() - 1;
            int v = 0;
            if (li <= ri)
                v = q[ri + 1] - q[li];

            if (u >= x && v >= y)
            {
                if (c[j] - c[i] < e)
                {
                    r = {c[i], c[j]};
                    e = c[j] - c[i];
                    f = 1;
                }
                else if (c[j] - c[i] == e)
                {
                    if (c[i] < r.first)
                        r = {c[i], c[j]};
                }
            }
        }
    }

    if (!f)
        cout << -1;
    else
        cout << r.first << " " << r.second;
}
