#include <stdio.h>
#define GI(a) scanf("%d",&a)
#define GLL4(n,r,s,e) scanf("%lld %lld %lld %lld",&n,&r,&s,&e)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define LL long long
#define I int
LL rec(LL n, LL r, LL s, LL e)
{
	LL c = (LL)1<<n;
	if(s==0 && e==c-1)
	{
		if(!r) return c;
		return 0;
	}
	LL m = (c>>1);
	I sub=1;
	if(r>=m) 
	{
		r-=m;
		sub=-1;
	}
	if(e<m) return rec(n-1,r,s,e);
	if(s>=m) return rec(n-1,r,s-m,e-m)*sub;
	return rec(n-1,r,s,m-1) + rec(n-1,r,0,e-m)*sub;
}
I main()
{
	LL n,r,s,e;
	for(GLL4(n,r,s,e);n!=-1;GLL4(n,r,s,e))
		PLL(rec(n,r,s,e));
	EXIT;
}