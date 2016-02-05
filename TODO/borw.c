#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)

typedef int I;

I max(I w,I x,I y,I z)
{
	return (w>x?w>y?w>z?w:z:y>z?y:z:x>y?x>z?x:z:y>z?y:z);
}

I N,s[201],dp[201][201][201],i,j,k,l;
START
{
	for(GI(N);N!=-1;GI(N))
	{
		SET(dp,0);l=1;
		REP2(i,1,N+1)
		{
			GI(s[i]);
			if(i==1) {dp[i][1][0]=1;dp[i][0][1]=1;continue;}
			REP(j,i)
			{
				REP(k,i)
				{
					if(j==k) continue;
					if(!j || (s[i]>s[j] && dp[i][i][k] < dp[i-1][j][k]+1)) dp[i][i][k]=dp[i-1][j][k]+1;
					if(!k || (s[i]<s[k] && dp[i][j][i] < dp[i-1][j][k]+1)) dp[i][j][i]=dp[i-1][j][k]+1;
					dp[i][j][k] = dp[i-1][j][k];
					if(i==N) l=max(l,dp[i][i][k],dp[i][j][i],dp[i][j][k]);
				}
			}
		}
//		REP2(i,1,N+1) REP(j,i+1) REP(k,i+1) printf("%d %d %d %d %d\n",i,s[i],j,k,dp[i][j][k]);
		PI(N-l);
	}
	EXIT;
}
