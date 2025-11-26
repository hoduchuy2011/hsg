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
bool check(char c)
{
	return c != 'W' && c != 'A' && c != 'R';
}
signed main()
{
	open("TenGoi");
	int n;
	cin>>n;
	vector<string> a(n);
	for(auto &i : a)
	{
		cin>>i;
	}
	int mx = 0, cnt = 0;
	for(auto i : a)
	{
		i += 'W';
		int l = 0;
		for(auto c : i)
		{
			if(check(c))
			{
				l++;
			}
			else
			{
				if(l > 0) 
				{
					if(l > mx)
					{
						mx = l;
						cnt = 1;
					}
					else if(l == mx)
					{
						cnt++;
					}
				}
				l = 0; 
			}
		}
	}
	
	cout<<mx<<" "<<cnt;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}