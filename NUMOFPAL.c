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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

C S[1001];
I dp[1000][1000],l,i,j,n;

START
{
	GS(S);
	l = strlen(S);
	n=0;
	REP(i,l) { for(j=i;j>-1;j--) { if(j < i) dp[j][i] = (j+1 > i-1 ? 1 : dp[j+1][i-1])  * (S[j] == S[i]); else if(j == i) dp[j][i] = 1; n += dp[j][i]; } }
	PI(n);
	EXIT;
}