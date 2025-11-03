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

void solve() 
{
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; i++) 
	{
		if (a[i] == '1' && b[i] == '1') 
		{
			cout << "NO";
			return;
		}
	}

	cout << "YES";
}

int main() 
{
	open("GAME");
	solve();

	return 0;
}