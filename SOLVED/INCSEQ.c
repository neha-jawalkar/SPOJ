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
#define P 5000000

typedef int I;
typedef long long LL;
typedef char C;

I S,dp[51][10000],bit[51][100002];

START
{
	I N,K,i,j,k,l=0;
	GI(N);GI(K);
	memset(dp, 0, sizeof dp);
	memset(bit, 0, sizeof bit);
	for(i=1;i<=N;i++)
	{
		GI(S);
		S++;
		for(j=1;j<=i&&j<=K;j++)
		{		
			if(j==1) dp[j][i]=1; else for(k=S-1;k;k-=(k&-k)) dp[j][i]=(dp[j][i]+bit[j-1][k])%P;
			if(j<K) for(k=S;k<=100001;k+=(k&-k)) bit[j][k]=(bit[j][k]+dp[j][i])%P;
			if(j==K) l=(l+dp[j][i])%P;
		}
//		REP2(k,1,K+1) printf("(%d %d) ",S-1,dp[k][i]); NEWLINE;
	}
	PI(l);
	EXIT;
}