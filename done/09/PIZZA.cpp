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
	if(fopen((s + ".INP").c_str(), "r"))
	{
		freopen((s + ".INP").c_str(), "r", stdin);
		freopen((s + ".OUT").c_str(), "w", stdout);
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}
signed main() 
{
	open("PIZZA");
	map<char, ll> m;
	m['B'] = 0;
	m['S'] = 0;
	m['C'] = 0;
	string s;
	cin>>s;
	for(auto i : s)
	{
		m[i]++;
	}
	ll a, b, c, x, y, z, t;
	cin >> a >> b >> c >> x >> y >> z >> t;
	ll g, h, i;
	g = h = i = 0;
	if(m['B'] != 0)
	{
		g = a / m['B'];
	}
	if(m['S'] != 0)
	{
		h = b / m['S'];
	}
	if(m['C'] != 0)
	{
		i = c / m['C'];
	}
	ll res = max({g, h, i});
	if(a < m['B'] * res && t >= (m['B'] * res - a) * x)
	{
		t -= (m['B'] * res - a) * x;
		a += (m['B'] * res - a);
	}
	if(b < m['S'] * res && t >= (m['S'] * res - b) * y)
	{
		t -= (m['S'] * res - b) * y;
		b += (m['S'] * res - b);
	}
	if(c < m['C'] * res && t >= (m['C'] * res - c) * z)
	{
		t -= (m['C'] * res - c) * z;
		c += (m['C'] * res - c);
	}
	if(a == m['B'] && b == m['S'] && c == m['C'])
	{
		res++;
		a = b = c = 0;
	}
	ll n = x * m['B'] + y * m['S'] + z * m['C'];
	res += t / n;
	cout<<res;

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}