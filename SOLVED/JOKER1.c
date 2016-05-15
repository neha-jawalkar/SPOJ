#include <stdio.h>
#include <stdlib.h>
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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

int cmpfunc(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

START
{
	LL n,m[66],j,x;
	TESTS
	{
		GLL(n);
		REP(j,n) GLL(m[j]);
		qsort(m,n,sizeof(LL),cmpfunc);
		x = 1;
		REP(j,n)
		{
			x = (x*(m[j]-j >=0? m[j]-j : 0))%P;
			if(x == 0) break;
		}
		PLL(x);
	}
	PS("KILL BATMAN");
	EXIT;
}