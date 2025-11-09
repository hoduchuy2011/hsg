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
    cin >> n >> k;
    vector<int> a(2 * n + 1);
    for (int i = 1; i <= n; i++) 
    {
    	a[i] = 1;
    }
    for (int i = n + 1; i <= 2 * n; i++) 
    {
    	a[i] = 0;
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        swap(a[x], a[y]);
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1) 
            {
            	c++;
            }
        }
        cout << c << "\n";
    }
    
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
