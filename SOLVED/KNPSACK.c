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

typedef int I;
typedef long long LL;
typedef char C;

I X,M,W[100],i,j;
double P[100],dp[10000001];

START
{
	memset(dp,0,sizeof dp);
	GI(X);GI(M);
	REP(i,M) { GI(W[i]);scanf("%lf",&P[i]); }
	dp[0]=0;
	REP2(i,1,X+1)
	{
		dp[i]=201;
		REP(j,M) if(dp[i]>dp[(i-W[j]>=0)?i-W[j]:0]+P[j]) dp[i] = dp[(i-W[j]>=0)?i-W[j]:0]+P[j];
	}
	printf("%.2lf\n",dp[X]);
	EXIT;
}