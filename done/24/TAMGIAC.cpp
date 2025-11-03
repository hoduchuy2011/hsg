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
	double a, b, c;
	int t;
	cin >> t;
	for(int i = 1; i<= t; i++)
	{
		cin >> a >> b>> c;
		if (a<=0 || b <= 0 || c<= 0) 
		{
			cout << 0;
		}
		else if (abs(a+b+c-180)<= 1e-5)
		{
				if (abs(a-90)<= 1e-5||abs(b-90)<= 1e-5||abs(c-90)<= 1e-5)
				{
					cout << "VUONG";
				}
				else if (a>90||b>90||c>90) 
				{
					cout <<"TU";
				}
				else 
				{
					cout << "NHON";
				}
			  	else 
			  	{
			  		cout << 0;
			  	}
		}
		cout << '\n';
	}
}
