#include <stdio.h>
int main()
{
	int i,t;
	long long j,A,B,C,a,d,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&A,&B,&C);
		n = (2*C)/(A+B);
		d = (B-A)/(n-5);
		a = A-2*d;
		printf("%lld\n",n);
		for(j=0;j<n;printf("%lld ",a+j*d),j++);
		printf("\n");
	}
	return 0;
}