#include <stdio.h>
long long int fact(long long int n)
{
	long long int i,f=1;
	for(i=2;i<=n;i++)
	{
		f = (f*i)%1000000007;
	}
	return f;
}
long long int power(long long int a, long long int b)
{
	long long int p=1;
	int r;
	while(b>0)
	{
		r = b%2;
		if(r == 1)
		{
			p = (p*a)%1000000007;
		}
		a = (a*a)%1000000007;
		b = b/2;
	}
	return p;
}
int main()
{
	int i,t;
	long long int a,b,n,ex,factn;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&n);
		factn = fact(n);
		ex = fact(2*n)/(factn*factn);
		printf("%lld\n", power(a,power(ex,b)));
	}
	return 0;
}