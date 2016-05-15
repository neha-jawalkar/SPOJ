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

I max(I x, I y)
{
	return x>y?x:y;
}

I dp[2][2000001];

START
{
	I k,n,v[500],w[500],m,i,j,l;
	GI(k);GI(n);
	REP(i,n)
	{
		GI(v[i]);GI(w[i]);
	}
	l = m = 0;
	SET(dp, 0);
	REP(i,n)
	{
		REP(j,k+1)
		{
			dp[l][j] = max(dp[(l+1)%2][j],j-w[i]>=0?dp[(l+1)%2][j-w[i]] + v[i] : 0);
			m = max(dp[l][j],m);
		}
		l = (l+1)%2;
	}
	PI(m);
	EXIT;
}