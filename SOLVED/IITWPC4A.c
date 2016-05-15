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

LL solve(char* s, int l, int m)
{
	LL i,j=0,k=0;
	for(i=0;i<l;++i)
	{
		if(s[i]=='a')  ++j; else j=0;
		if(j==m) { ++k; j=0;}
	}
	return k;
}

START
{
	char s[100001];
	LL m,n,l;
	TESTS
	{
		GS(s);
		l = strlen(s);
		GLL(m);GLL(n);
		if(m==n) printf("%lld %lld\n",l,l);
		else if(m>n) printf("%lld %lld\n",l-solve(s,l,m)*(m-n),l);
		else printf("%lld %lld\n",l,l+solve(s,l,m)*(n-m));
	}
	EXIT;
}