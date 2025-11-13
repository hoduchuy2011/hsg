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
    if (!(cin >> n >> x >> y))
    {
        return 0;
    }
    vector<int> b(n);
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        int v;
        cin >> v;
        b[i] = abs(v);
        s[i] = (v > 0) ? 1 : -1;
    }

    int l = 0;
    int p = 0, g = 0;
    int k = -1, m = -1;
    int w = INT_MAX;

    for (int r = 0; r < n; ++r)
    {
        if (s[r] == 1)
        {
            ++p;
        }
        else
        {
            ++g;
        }
        while (l <= r && p >= x && g >= y)
        {
            int t = b[r] - b[l];
            if (t < w || (t == w && (k == -1 || b[l] < b[k])))
            {
                w = t;
                k = l;
                m = r;
            }
            if (s[l] == 1)
            {
                --p;
            }
            else
            {
                --g;
            }
            ++l;
        }
    }

    if (k == -1)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << b[k] << ' ' << b[m] << '\n';
    }
    return 0;
}