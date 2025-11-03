#include<bits/stdc++.h>
using namespace std;


#define ii pair<int,int>
#define ll long long
#define taskname "bai5"
const int N=1e5+7;
const ll base=1e9+7;
struct hs
{
    ll hieu;
    ll a,b;
};
hs x[N];
bool cmp(hs x, hs y)
{
    return x.hieu>y.hieu;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen(taskname".inp", "r", stdin);
    freopen(taskname".out", "w", stdout);
    int n;
    cin>>n;
    ll aa,bb;
    for (int i=1;i<=n;i++)
    {
        cin>>aa>>bb;
        x[i].hieu=aa-bb;
        x[i].a=aa;
        x[i].b=bb;
    }
    sort(x+1,x+n+1,cmp);
    ll res=0;
    for (int i=1;i<=n;i++)
    {
        res=res+x[i].a*(i-1)+x[i].b*(n-i);
    }
    cout<<res;
    return 0;
}
