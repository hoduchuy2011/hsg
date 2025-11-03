#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    if (!(cin >> n)) return; 

    ll a = (n - 1) / 2;
    
    ll b = a * (a + 1) / 2;
    ll c = a * n;
    
    ll d = c - 2 * b;
    
    cout << d << "\n";
}

int main() {
    solve();
    return 0;
}