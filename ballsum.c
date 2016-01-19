#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define GLL(a) scanf("%lld",&a)
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define I int
#define LL long long
#define START I main()
LL gcd(LL x, LL y)
{
	if(!x||!y) return 0;
	LL r;
	do
	{
		r=y%x;
		y=x;
		x=r;
	}while(r!=0);
	return y;
}
START
{
	LL n,k,x,y,g;
	for(GLL(n),GLL(k);n!=-1;GLL(n),GLL(k))
	{
		x=(k-1)/2;
		x=x*(k-x-1);
		y=(n%2==0?n/2*(n-1):n*(n-1)/2);
		g=gcd(x,y);
		if(g)
		{
			x/=g;
			y/=g;
			if(y==1)
				PLL(x);
			else printf("%lld/%lld\n",x,y);
		}
		else PLL(g);
	}
	EXIT;
}