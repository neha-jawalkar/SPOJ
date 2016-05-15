#include <stdio.h>
#include <string.h>
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GLL(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define LEN(s,ls) ls = strlen(s)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

LL raise(LL x, LL y)
{
	LL z = 1;
	for(;y;x=(x*x)%P,y=y>>1) if(y%2) z = (z*x)%P;
	return z;
}

START
{
	LL n,w,t,r,i,j,k;
	GLL(n);GLL(w);GLL(t);GLL(r);
	j = k = 1;
	REP2(i,2,n+1)
	{
		j = (j*i)%P;
		if(i == w) k = (k*raise(j,P-2))%P;
		if(i == t) k = (k*raise(j,P-2))%P;
		if(i == r) k = (k*raise(j,P-2))%P;
	}
	PLL( (j*k)%P );
	EXIT;
}