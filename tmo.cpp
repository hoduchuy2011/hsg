#include <bits/stdc++.h>
#include <random>
#include <ctime>
#define ll long long
#define st string
#define fi first
#define se second
#define mod 1000000007
#define all(x) x.begin(), x.end()

using namespace std;

int main()
{
	freopen(".INP", "w", stdout);
	// Tạo bộ sinh số ngẫu nhiên
	mt19937_64 rng(time(0));
	// Sinh n trong [0, 1e6]
	uniform_int_distribution<char> dist_n('a', 'z');
	for(int i = 0; i < 200; i++)
	{
		char n = dist_n(rng);
		cout<<n;
	}

	cerr<<"Time elapsed: "<<1.0 * clock() / CLOCKS_PER_SEC<<".s\n";
	return 0;
}