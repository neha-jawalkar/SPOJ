#include <stdio.h>
#include <math.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define PLLU(a) printf("%llu\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define I int
#define LLU long long unsigned
#define START I main()

START
{
	I m,n,i,j,k,t;
	LLU dp[11][2001],l;
	REP(i,2001) dp[1][i] = 1;
	i=2;
	REP2(i,11)
	{
		j=1<<(i-1);
		REP2(j,2001)
		{
			dp[i][j]=0;
			k=1<<(i-2);
			REP2(k,j/2+1) dp[i][j]+=dp[i-1][k];
		}
	}
	GI(t);
	REP(i,t)
	{
		GI(n);
		GI(m);
		l=0;
		j=1<<(n-1);
		REP2(j,m+1) l+=dp[n][j];
		printf("Data set %d: %d %d %llu\n",i+1,n,m,l);
	}
	EXIT;
}