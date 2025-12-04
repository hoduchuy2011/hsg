//Author: Lunaris
//Timestamp: 2025-12-03 14:16:20
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
	string s;
	cin>>s;
	vector<string> a;
	string t = "";
	for(auto i : s)
	{
		if(i >= 'A' && i <= 'Z')
		{
			if(t != "")
			{
				a.push_back(t);
			}
			t = "";
			t += tolower(i);
		}
		else
		{
			t += i;
		}
	}
	if(t != "")
	{
		a.push_back(t);
	}
	for (int i = 0; i < a.size(); ++i)
	{
		cout<<a[i];
		if(i != a.size() - 1)
		{
			cout<<"_";
		}
	}
	cout<<"\n";
}
signed main() 
{	
	open("KIEUMOI");
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}