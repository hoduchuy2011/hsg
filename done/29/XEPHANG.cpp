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
    open("XEPHANG");
    int n, k;
    cin>>n>>k;
    vector<bool> f(2 * n + 1, 0);//1 = nam, 0 = nu
    for(int i = 1; i <= n; i++)
    {
        f[i] = 1;
    }
    int cnt = n;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        bool a = f[x], b = f[y];
        if (a != b)
        {
            if (x <= n && y > n)
            {
                cnt -= a;
            }
            else if (y <= n && x > n)
            {
                cnt -= b;
            }
            if (x <= n && y > n)
            {
                cnt += b;
            }
            else if (y <= n && x > n)
            {
                cnt += a;
            }
        }
        swap(f[x], f[y]);
        cout << cnt << "\n";
    }
    
    cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
    return 0;
}
