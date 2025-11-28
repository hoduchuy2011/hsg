#include <bits/stdc++.h>;
using namespace std;
ifstream fi("BEAUTSQ.INP");
ofstream fo("BEAUTSQ.OUT");
long long a,b,d;
bool  c[10000002];
long long rev(long long k)
{
	long long h=0;
	while (k>0)
	{
		h=h*10+k%10;
		k=k/10;
	}
	return h;
}
int main()
{
	fi>>a>>b;
	for (long long i=2;i<=10000002;i++)
		c[i]=true;
	c[0]=false;c[1]=false;
	for (long long i=2;i*i<=10000002;i++)
		if(c[i]==true)
			{
				for (int j=i*i;j<=10000002;j=j+i)
					c[j]=false;
			}
	for (long long i=2; i<=10000002;i++)
	if(c[i]==true)
		if(rev(i)!=i)
			c[i]=false;
	d=0;
	for (long long  i=trunc(sqrt(a));i<=trunc(sqrt(b));i++)
		if (c[i]==true && i*i>=a&&i*i<=b)
		{
			d=d+1;
		}
	fo<<d;
}
