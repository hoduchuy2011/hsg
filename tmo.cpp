#include <bits/stdc++.h>
#define ll long long
using namespace std;

void aris(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end());

    ll r = LLONG_MAX;

    for(int i = 0; i < n; i++){
        ll t = -a[i];
        int k = lower_bound(b.begin(), b.end(), t) - b.begin();

        if(k < n){
            ll x = a[i] + b[k];
            if(x < 0) x = -x;
            if(x < r) r = x;
        }
        if(k > 0){
            ll x = a[i] + b[k-1];
            if(x < 0) x = -x;
            if(x < r) r = x;
        }
    }

    cout << r;
}

int main(){
    aris();
}
