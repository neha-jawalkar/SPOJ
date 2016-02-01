#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=S;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()

typedef int I;
typedef long long LL;
typedef char C;

I E,F,N,P[500],W[500],dp[10000],j,k;

START
{
	dp[0] = 0;
	TESTS
	{
		GI(E);GI(F);GI(N);
		REP(j,N) { GI(P[j]);GI(W[j]); }
		REP2(j,1,F-E+1)
		{
			dp[j]=-1;
			REP(k,N) if(j-W[k] >= 0 && dp[j-W[k]]>-1 && ( dp[j]==-1 || (dp[j-W[k]] + P[k] < dp[j]) ) ) dp[j] = dp[j-W[k]] + P[k];
		}
		if(dp[F-E]==-1) printf("This is impossible.\n");
		else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[F-E]);
	}
	EXIT;
}