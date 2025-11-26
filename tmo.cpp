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

int main() 
{
	open("");
    int N;
    ll K;
    cin>>N>>K;
    vector<ll> a(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll res = 0;
    multiset<ll> s;
    for (int i = N - 1; i >= 0; --i) 
    {
        ll tmp = a[i];
        ll x = tmp + K;
        auto it = s.lower_bound(x);

        if (it != s.end()) 
        {
            s.erase(it);
            s.insert(tmp);
        } 
        else 
        {
            res += tmp;
            s.insert(tmp);
        }
    }
    cout << res;

    return 0;
}