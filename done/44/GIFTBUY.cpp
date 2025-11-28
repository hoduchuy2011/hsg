#include<bits/stdc++.h>
using namespace std;
int n , k , a[100009] ;
bool kt[100009] ;
long long m = 0 ;
int main()
{
    freopen("GIFTBUY.inp","r",stdin) ; freopen("GIFTBUY.out","w",stdout) ;
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> k ;
    for ( int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
    sort(a+1,a+1+n) ;
    memset(kt,false,sizeof(kt)) ;
    for ( int i = n ; i >= 1 ; i-- )
    {
        if( kt[i] == false )
        {
            int d = a[i] ;
            kt[i] = true ;
            if ( d >= k )
            {
                int j = upper_bound(a+1,a+1+n,d-k)-a ;
                while ( j > 1 )
                {
                    if ( kt[j-1] == false )
                    {
                        kt[j-1] = true ;
                        d = a[j-1] ;
                        j = upper_bound(a+1,a+1+n,d-k)-a ;
                    }
                    else j-- ;
                }
            }
            m = m + a[i] ;
        }
    }
    cout << m ;
}
