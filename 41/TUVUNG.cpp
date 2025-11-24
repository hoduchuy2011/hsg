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
signed main()
{
	open("TUVUNG");
	// Nhap du lieu
	string s;
	cin>>s;
	s = "#" + s; //Them 1 ki tu vao dau string de ktra tu index 1
	int n = s.size();
	vector<int> a(n, 0), b(n, 0);
	// Xet 2 vector ktra tu 1 den i co bao nhieu nguyen am va phu am
	for(int i = 1; i < n; i++)
	{
		// s[i] la nguyen am
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			if(i == 0)
			{
				a[i]++;
			}
			else
			{
				a[i] = a[i - 1] + 1;
				b[i] = b[i - 1];
			}
		}
		// s[i] la phu am
		else
		{
			if(i == 0)
			{
				b[i]++;
			}
			else
			{
				b[i] = b[i - 1] + 1;
				a[i] = a[i - 1];
			}
		}
	}
	int res = 0;
	for(int i = 1; i < n; i++)
	{
		//neu s[i] la nguyen am thi dem co bao nhieu phu am o phia sau
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			res += b[n - 1] - b[i - 1];
		}
		//nguoc la dem so nguyen am o phia sau
		else
		{
			res += a[n - 1] - a[i - 1];
		}
	}
	cout<<res;
	
	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}