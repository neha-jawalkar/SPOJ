#include <stdio.h>
#include <string.h>
#include <math.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()

typedef int I;
typedef long long LL;
typedef char C;
typedef double D;


START
{
	LL N;
	D n;
	for(GLL(N);N!=-1;GLL(N))
	{
		n = (-3 + sqrt(9+12*(N-1)))/6;
		if(n==ceil(n)) PS("Y"); else PS("N");
	}
	EXIT;
}