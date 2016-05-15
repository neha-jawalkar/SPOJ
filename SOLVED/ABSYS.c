#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

START
{
	C a[11],b[11],c[11];
	I la,lb,j;
	TESTS
	{
		GS(a);
		LEN(a,la);
		REP(j,la) if(a[j] == 'm')
		{
			GS(b);GS(b);
			GS(c);GS(c);
			printf("%d + %s = %s\n",atoi(c) - atoi(b), b, c);
			break;
		}
		if(j < la) continue;
		GS(b);GS(b);LEN(b,lb);
		REP(j,lb) if(b[j] == 'm')
		{
			GS(c);GS(c);
			printf("%s + %d = %s\n",a,atoi(c) - atoi(a), c);
			break;
		}
		if(j < lb) continue;
		GS(c);GS(c);
		printf("%s + %s = %d\n",a,b,atoi(a) + atoi(b));
	}
	EXIT;
}