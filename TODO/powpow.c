#include <stdio.h>
#define K 1000000007
long long unsigned fact(int start, int end)
{
	int i;
	long long unsigned f=start;
	for(i=start+1;i<=end;i++)
	{
		f *= i;
		printf("%d %d=%llu\n",start,i,f);
	}
	return f;
}
long long int power(long long unsigned a, long long unsigned b)
{
	printf("%lld ^ %lld\n",a,b);
	long long int p=1;
	int r;
	while(b>0)
	{
		r = b%2;
		if(r == 1)
		{
			p = (p*a)%K;
		}
		printf("%lld\n",p);
		a = (a*a)%K;
		b = b/2;
	}
	return p;
}
int main()
{
	int i,t;
	long long unsigned a,b,n,ex;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu %llu %llu",&a,&b,&n);
		ex = fact(n+1,2*n)/fact(1,n);
		printf("%llu\n", power(a,power(ex,b)));
	}
	return 0;
}