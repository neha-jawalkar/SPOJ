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
#define LEN(s,ls) ls = strlen(s)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

C s[1000001];
I l[1000000];

START
{
	I ls,j,k,m;
	l[0] = 0;
	TESTS
	{
		GS(s);
		LEN(s,ls);
		m = 0;
		REP2(j,1,ls)
		{
			if(s[m] == s[j]) l[j] = ++m;
			else if(m)
			{
				m = l[m-1];
				--j;
			}
			else l[j] = 0;
		}
		k = 0;
		for(j=ls-1;l[j];++k,j = l[j] - 1);
		printf("Case %d: %d\n",i+1,k);
	}
	EXIT;
}