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
int d[10000005];
int n = 10000000;
void sieve() 
{
    for (int i = 2; i <= n; i++) 
    {
        if (d[i] == 0) 
        {
            for (int j = i; j <= n; j += i) 
            {
                d[j]++;
            }
        }
    }
}

bool pal(int n) 
{
    int k = n;
    int r = 0;
    while (k > 0) 
    {
        r = r * 10 + k % 10;
        k /= 10;
    }
    return n == r;
}


signed main()
{
    open("CAU3");
    sieve();
    int a, b;
    cin >> a >> b;
    ll s = 0;
    for (int i = a; i <= b; i++) 
    {
        if (d[i] >= 3) 
        {
            if (pal(i)) 
            {
                s += i;
            }
        }
    }

    cout << s;

    return 0;
}