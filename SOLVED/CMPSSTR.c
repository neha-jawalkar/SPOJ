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

C A[52],B[52];
I dp[50][50],a,b,i,j,l;

START
{
	for(;scanf("%c",A)!=-1;)
	{
		fgets(&A[1], sizeof A - 1, stdin); a = strlen(A); a-- ;
		fgets(B, sizeof B , stdin); b = strlen(B); b-- ;
		l=0;
		REP(i,a) REP(j,b) { dp[i][j] =  ( i > 0 && j > 0 ? A[i] == B[j] ? dp[i-1][j-1] + 1 : 0 : A[i] == B[j] ? 1 : 0); if(dp[i][j] > l) l = dp[i][j];}
		PI(l);
	}
	EXIT;
}