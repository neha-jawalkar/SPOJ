#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define START I main()
#define EXIT return 0

typedef int I;

I N,s[201],dp[201][201][201];
I max(I x, I y, I z)
{
	return x>y?x>z?x:z:y>z?y:z;
}
I rec(I n, I b, I w)
{
	if(n==N+1) return 0;
	if(!dp[n][b][w]) dp[n][b][w] = max( (!b||s[b]<s[n])? rec(n+1,n,w)+1 : 0, (!w || s[w]>s[n]) ? rec(n+1,b,n)+1 : 0, rec(n+1,b,w) );
	return dp[n][b][w];
}
START
{
	I i;
	for(GI(N);N!=-1;GI(N))
	{
		memset(dp,0,sizeof(dp));
		REP2(i,1,N+1) GI(s[i]);
		PI(N-rec(1,0,0));
	}
	EXIT;
}
