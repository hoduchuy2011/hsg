#include <bits/stdc++.h>
#define ll long long
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
struct P 
{
    int a, b;
};

bool cmp(P x, P y) 
{
    return (max(x.a, x.b) - min(x.a, x.b)) > (max(y.a, y.b) - min(y.a, y.b));
}

int main() 
{
	open("THUONG");
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<P> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].a >> v[i].b;
    sort(v.begin(), v.end(), cmp);
    int c1 = 0, c2 = 0;
    ll s = 0;
    vector<int> t;
    for (int i = 0; i < n; i++) 
    {
        if (c1 < n/2 && v[i].a >= v[i].b) 
        {
            s += v[i].a;
            c1++;
        } 
        else if (c2 < n/2 && v[i].b >= v[i].a) 
        {
            s += v[i].b;
            c2++;
        } 
        else 
        {
            if (c1 < n/2) 
            {
                s += v[i].a;
                c1++;
            } 
            else 
            {
                s += v[i].b;
                c2++;
            }
        }
    }
    cout << s;
}
