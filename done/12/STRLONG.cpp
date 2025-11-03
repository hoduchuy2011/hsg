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

int main() 
{
	open("STRLONG");
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll a = n * (n + 1) / 2;
	ll b = 0;
	vector<int> f(26, 0);
	int l = 0;
	for (int r = 0; r < n; ++r) 
	{
		f[s[r] - 'a']++;
		while (f[s[r] - 'a'] > 1) 
		{
			f[s[l] - 'a']--;
			l++;
		}
		b += (r - l + 1);
	}

	cout << a - b;

	return 0;
}