#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
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
#define P 1000000007

typedef int I;
typedef long long LL;

I j,N,M,O,C[10000];

START
{
	for(;GI(N),N!=-1;)
	{
		M = 0;
		REP(j,N)  { GI(C[j]); M+=C[j];}
		if(M % N != 0) { PI(-1); continue; }
		M = M/N;
		O = 0;
		REP(j,N) if(C[j] > M) O+=C[j]-M; 
		PI(O);
	}
	EXIT;
}