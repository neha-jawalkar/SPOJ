#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define I int
#define START I main()
#define M 1908 
#define N 1000
I dp[1000];
START
{
	int n,j,k;
	dp[0] = 1;
	j=1;
	REP2(j,N)
	{
		dp[j]=(2*dp[j-1])%M;
		REP(k,j-1)
		{
			dp[j] = (dp[j] + dp[k]*dp[j-2-k])%M;
		}
	}
	TESTS
	{
		GI(n);
		PI(dp[n-1]);
	}
	EXIT;
}