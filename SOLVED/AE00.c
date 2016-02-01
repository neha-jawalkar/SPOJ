#include <stdio.h>
#include <string.h>
#include <math.h>
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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I i,j,N,R;

START
{
	R=1;
	GI(N);
	REP2(j,2,N+1) for(i=1;i<=sqrt(j);i++) if(j%i==0) R++;
	PI(R);
	EXIT;
}