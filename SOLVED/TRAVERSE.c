#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);++i)
#define REP2(i,S,N) for(i=(S);i<(N);++i)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define LEN(s,ls) ls = strlen(s)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

START
{
	LL n, m[10][11], dp[10][10], i, j;
	GLL(n);
	REP(i, n)
	{
		GLL(m[i][10]);
		for (j = n - 1; j >= 0; m[i][10] /= 10,--j) m[i][j] = m[i][10] % 10;
	}
	SET(dp, 0);
	dp[0][0] = 1;
	REP(i, n) REP(j, n)
	{
		if(i == n-1 && j == n-1) break;
		if (i + m[i][j] < n) dp[i + m[i][j]][j] += dp[i][j];
		if (j + m[i][j] < n) dp[i][j + m[i][j]] += dp[i][j];
	}
	printf("%lld",dp[n - 1][n - 1]);
	EXIT;
}