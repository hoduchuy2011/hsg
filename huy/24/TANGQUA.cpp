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
	open("TANGQUA");
	int n;
	cin>>n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	sort(all(a), greater<ll>());
	ll s = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] != a[i - 1])
		{
			break;
		}
		s++;
	}
	cout<<s;

	return 0;
}