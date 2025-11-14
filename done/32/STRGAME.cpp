#include <bits/stdc++.h>
#define ll long long
#define st string
#define fi first
#define se second
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
int main() 
{
	open("STRGAME");
	int n, k, m;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(), s.end());
	if(s[0] == s[k - 1])
	{
		if(s[k] == s[n - 1])
		{
			m = (n + k - 1) / k;
		}
		else
		{
			m = n - k - 1;
		}
	}
	else
	{
		m = 1;
	}
	cout<<s.substr(k-1, m);

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}