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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I solve(I n, I* x)
{
	if(n<811 && x[n]) return -1;
	if(n == 1) return 0;
	if(n<811) x[n] = 1;
	I j;
	for(j=0;n>0;j+=(n%10)*(n%10),n=n/10);
	j = solve(j,x);
	if(j == -1) return j; return 1+j;
}

START
{
	I x[811], n;
	SET(x,0);
	GI(n);
	printf("%d\n",solve(n,x));
	EXIT;
}