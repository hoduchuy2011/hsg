#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
#define all(x) x.begin(), x.end()

using namespace std;

void open()
{
	if(fopen("BAI2.INP", "r"))
	{
		freopen("BAI2.INP", "r", stdin);
		freopen("BAI2.OUT", "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
int main() {
	open();
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ll l = 0;
	ll sum = 0;
	double res = -1e18;
	bool f = false;
	for (ll r = 0; r < n; ++r) 
	{
		sum += a[r];
		while (sum >= k && l <= r) 
		{
			ll len = r - l + 1;
			double avg = (double)sum / len;
			res = max(res, avg);
			f = true;
			sum -= a[l];
			l++;
		}
	}
	if(f)
	{
		cout<<int(res) << "\n";
	}
	else
	{
		cout << "NO";
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}
