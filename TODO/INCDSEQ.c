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

I i,j,k,N,K,S[10000],dp[50][10000],E[10000],L;

START
{
	SET(S,0);
	SET(dp,0);
	SET(E,-1);
	L=0;
	GI(N);GI(K);
	REP(i,N) { GI(S[i]); for(k=i-1;k>=0;k--) if(S[k]==S[i]) { E[i]=k;break; }}
	REP(i,N) printf("%d %d\n",S[i],E[i]);
	REP(i,K)
	{
		REP2(j,i,N)
		{
			if(i==0) dp[i][j]=1; else REP2(k,E[j]+1>i-1?E[j]+1 : i-1,j) if(S[k]<S[j] && E[k]<(E[j]+1>i-1?E[j]+1 : i-1)) 
			{
				printf("%d %d %d %d %d %d\n",k,j,S[k],S[j],E[k],(E[j]+1>i-1?E[j]+1 : i-1));
				dp[i][j]=(dp[i][j]+dp[i-1][k])%P;  
			}
			if(i==K-1) L=(L+dp[i][j])%P;
		}
		REP(k,N) printf("%d ",dp[i][k]);NEWLINE;
	}
	PI(L);
	EXIT;
}