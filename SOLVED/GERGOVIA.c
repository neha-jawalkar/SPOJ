#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
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

START
{
	LL i,j,k,n,a[100000];
	for(;GLL(n) && n;)
	{
		REP(i,n) GLL(a[i]);
		j = k = 0;
		REP(i,n)
		{
			k += j > 0 ? j : -j;
			j += a[i];
		}
		PLL(k);
	}
	EXIT;
}