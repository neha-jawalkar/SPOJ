#include <stdio.h>
#include <string.h>
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GLL(t);REP(i,t)
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

I min4(LL w, LL x, LL y, LL z)
{
	return w<x?w<y?w<z?w:z:y<z?y:z:x<y?x<z?x:z:y<z?y:z;
}

I min3(LL x, LL y, LL z)
{
	return x<y?x<z?x:z:y<z?y:z;
}

I min2(LL x, LL y)
{
	return x<y?x:y;	
}

START
{
	LL i,n,j,k,l,g,dp[2][3];
	for(i=1;GLL(n) && n;++i)
	{
		GLL(g);GLL(g);
		dp[0][1] = g;
		GLL(g);
		dp[0][2] = dp[0][1] + g;
		GLL(g); 
		dp[1][0] = dp[0][1] + g;
		GLL(g);
		dp[1][1] = min3(dp[1][0],dp[0][1],dp[0][2]) + g;
		GLL(g);
		dp[1][2] = min3(dp[1][1],dp[0][1],dp[0][2]) + g;
		REP2(j,2,n)
		{
			k = j%2;
			l = (j+1)%2;
			GLL(g);
			dp[k][0] = min2(dp[l][0],dp[l][1]) + g;
			GLL(g);
			dp[k][1] = min4(dp[k][0],dp[l][0],dp[l][1],dp[l][2]) + g;
			GLL(g);
			dp[k][2] = min3(dp[k][1],dp[l][1],dp[l][2]) + g;
		}
		printf("%lld. %lld\n",i,dp[(n-1)%2][1]);
	}
	EXIT;
}