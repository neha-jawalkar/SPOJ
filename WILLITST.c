#include <stdio.h>
#include <string.h>
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


START
{
	LL N;
	GLL(N);
	if( N<=1 ||  !(N&(N-1))  ) PS("TAK"); else PS("NIE");
	EXIT;
}