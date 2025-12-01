//Author: Lunaris
//Timestamp: 2025-12-01 14:00:56
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
void solve()
{
	int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    sort(a.begin(), a.end());

    vector<int> b(2 * n);
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        b[i + n] = a[i] + 1000000;
    }

    int l = 0;
    int r = 500000;
    int s = 500000;

    while (l <= r)
    {
        int m = (l + r) / 2;
        int d = 2 * m;
        bool f = 0;
        vector<int> p(2 * n);
        int j = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            while (j < 2 * n && b[j] <= b[i] + d)
            {
                j++;
            }
            p[i] = j;
        }
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            int x = i;
            while (x < i + n)
            {
                x = p[x];
                c++;
            }
            if (c <= k)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            s = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << s;
}
signed main() 
{	
	open("TPS");
	solve();

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}