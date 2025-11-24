//De bai: Cho xau s, ktra xem co the tao ra tu vung tu xau do. Tu vung duoc dinh ngia nhu sau:
//- Bat dau bawng 1 nguyen am(u, e, o, a, i) va ket thuc bang 1 phu am(cac hu cai con lai)
//- bawt dau bang 1 phu am va ket thuc bang 1 nguyen am
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
bool k(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
signed main()
{
	open("TUVUNG");
	string s;
	cin>>s;
	ll r = 0;
	ll a = 0;
	ll b = 0;
	for (char c : s)
	{
		if (k(c))
		{
			r += b;
			a++;
		}
		else
		{
			r += a;
			b++;
		}
	}

	cout << r;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}