// cho n số nguyên  a1, a2,..., an. Người ta muốn chia n số nguyên này thành 
// các nhóm sao cho hiệu của số lớn nhất và số nhỏ nhất ko vượt quá h. Xác 
// định số lượng nhóm ít nhất.
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
	cin.tie(NULL); cout.tie(NULL);
}
signed main()
{
	open("CAU2");
	ll n, h, t = 0;
	cin>>n>>h;
	vector<int> a(n);
	for(int i = 0; i < n;  i++)
	{
		cin>>a[i];
	}
	sort(all(a));
	int res = 0;
    int i = 0;
    while (i < n) 
    {
        res++;
        ll mn = a[i];
        while (i < n && a[i] - mn <= h) 
        {
            i++;
        }
    }
    cout<<res;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
