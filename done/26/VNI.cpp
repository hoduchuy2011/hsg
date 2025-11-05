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
    open("VNI");
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }
    vector<long long> suf(n + 2, 0);
    long long mx = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] < mx)
            suf[i] = suf[i + 1] + (mx - a[i]);
        else
        {
            mx = a[i];
            suf[i] = suf[i + 1];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        cout << suf[t] << "\n";
    }

    return 0;
}