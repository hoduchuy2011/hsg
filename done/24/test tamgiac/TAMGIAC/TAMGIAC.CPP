#include <bits/stdc++.h>
using namespace std;
double a, b, c;
int t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TAMGIAC.INP", "r", stdin);
    freopen("TAMGIAC.OUT", "w", stdout);
    cin >> t;
    for(int i = 1; i<= t; i++){
        cin >> a >> b>> c;
        if (a<=0 || b <= 0 || c<= 0) {
            cout << 0;
        }else if (abs(a+b+c-180)<= 1e-5)
                if (abs(a-90)<= 1e-5||abs(b-90)<= 1e-5||abs(c-90)<= 1e-5)
                    cout << "VUONG";
                else if (a>90||b>90||c>90) cout <<"TU";
                     else cout << "NHON";
              else cout << 0;
        cout << '\n';
    }
}
