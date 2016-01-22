#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define INF 10000

typedef int I;
typedef long long LL;
typedef char C;
typedef short S;

S dp[6100][6100];
C a[6101];
I j,k,l;
S min(S x, S y, S z)
{
	return x<y?x<z?x:z:y<z?y:z;
}
START
{
	TESTS
	{
		GS(a);
		l=strlen(a);
		memset(dp,0,sizeof dp);
		REP(j,l)   for(k=j-1;k>-1;k--)	dp[k][j] = min( a[k]==a[j] ? dp[k+1][j-1] : INF, dp[k+1][j] + 1, dp[k][j-1] + 1);
		PI(dp[0][l-1]);
	}
	EXIT;
}