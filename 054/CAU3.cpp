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
const int nmax = 3e6+5;
vector<int> a(nmax, 0);
void sang() 
{
    for (int i = 1; i < nmax; i++)
    {
        for (int j = i; j < nmax; j += i)
        {
            a[j] += i;
        }
    }
}
bool aris(int n)
{
	return a[n] > 2 * n;
}
signed main()
{
	open("CAU3");
	sang();
	int l, r, res = 0;
	cin>>l>>r;
	for(int i = l; i <= r; i++)
	{
		res += aris(i);
	}
	cout<<res;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
