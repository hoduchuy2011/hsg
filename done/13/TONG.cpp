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
	open("TONG");
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<(n + 1) * (2 * n + 1) * (2 * n + 3) / 3<<"\n";
	}

	return 0;
}