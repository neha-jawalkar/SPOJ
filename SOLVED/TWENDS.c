#include <stdio.h>
#include <stdlib.h>
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
I x[1000],dp[1000][1000];
I rec(I s, I e)
{
	if(dp[s][e])
		return dp[s][e];
	if(e-s==1)
	{
		dp[s][e] = abs(x[s]-x[e]);
		return dp[s][e];
	}
	I y1,y2,s1,s2;
	if(x[s+1]>=x[e])
	{
		y1=rec(s+2,e);
		s1=x[s]-x[s+1];
	}
	else
	{
		y1=rec(s+1,e-1);
		s1=x[s]-x[e];
	}
	if(x[s]>=x[e-1])
	{
		y2=rec(s+1,e-1);
		s2=x[e]-x[s];
	}
	else
	{
		y2=rec(s,e-2);
		s2=x[e]-x[e-1];
	}
	if(y1+s1>y2+s2) dp[s][e] = y1+s1; else dp[s][e] = y2+s2;
	return dp[s][e];
}
START
{
	I n,i,j;
	for(j=0,GI(n);n!=0;GI(n),j++)
	{
		memset(dp,0,sizeof(dp));
		REP(i,n) GI(x[i]);
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n",j+1,rec(0,n-1));
	}
	EXIT;
}