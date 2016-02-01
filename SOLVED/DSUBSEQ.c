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

C S[100001];
I j,k,l,dp[100000],p[100000],q[26];
START
{
	TESTS
	{
		GS(S);
		l=strlen(S);
		memset(p,-1,sizeof p);
		memset(q,-1,sizeof q); 
		REP(j,l) { if(q[ S[j] - 'A' ] != -1)  p[j] = q[ S[j] - 'A' ]; q[ S[j] - 'A' ] = j; }
		dp[0] = 1;
		j=1;		
		REP2(j,l)
		{
			k = p[j] > 0 ? p[j] : 0;
			dp[j] = p[j] < 0 ? 1 : 0;
			REP2(k,j) dp[j] = ( dp[j] + dp[k] ) % P; 
		}
		k=0;
		REP(j,l) k = ( k + dp[j] ) % P;
		PI( (k+1) % P ); 
	}
	EXIT;
}