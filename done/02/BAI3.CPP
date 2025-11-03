#include <bits/stdc++.h>
#define ll long long
using namespace std;
void open()
{
	if(fopen("BAI3.INP", "r"))
	{
		freopen("BAI3.INP", "r", stdin);
		freopen("BAI3.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
void aris()
{
    int m,n;
    if(!(cin>>m>>n)) 
    {
    	return;
    }
    int t = m + n;
    ll s = 0;
    int p = 0;
    vector<ll> v;
    for(int i=0;i<t;i++)
    {
        ll a,b; 
        int c;
        cin>>a>>b>>c;
        s += b;
        if(c==1)
        { 
        	p++; 
        	s += (a - b); 
        }
        else if(c==0) 
        {
        	v.push_back(a - b);
        }
    }
    int need = m - p;
    if(need < 0) need = 0;
    sort(v.begin(), v.end());
    ll add = 0;
    for(int i=0; i < need && i < (int)v.size(); i++) 
    {
    	add += v[i];
    }
    cout << s + add << '\n';
}
int main()
{
	open();
    aris();
    return 0;
}
