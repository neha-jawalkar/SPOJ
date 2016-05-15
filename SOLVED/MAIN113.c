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

START
{
	LL n,j,dp[30][2];
	SET(dp,0);
	dp[0][0] = 3;
	dp[1][0] = 3;
	dp[1][1] = 6;
	REP2(j,2,30)
	{
		dp[j][0] = dp[j-1][0] + dp[j-1][1];
		dp[j][1] = 2*dp[j-1][0] + dp[j-1][1];
	}
	TESTS
	{
		GLL(n);
		PLL(dp[n-1][0]+dp[n-1][1]);
	}
	EXIT;
}