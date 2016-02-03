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
#define TESTS I t,z;GI(t);REP(z,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I N,dp[1001],i,j;
START
{
	dp[0]=0;
	REP2(i,1,1001)
	{
		dp[i] = 1000000000;
		REP2(j,1,(int)sqrt(i)+1) if(dp[i]>dp[i-j*j]+1) {dp[i] = dp[i-j*j]+1; if(dp[i]==1) break;}
	}
	TESTS
	{
		GI(N);	
		PI(dp[N]);
	}
	EXIT;
}