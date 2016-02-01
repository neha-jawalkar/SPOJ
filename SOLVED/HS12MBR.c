#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=S;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I N,x1,x2,y1,y2,j,l1,l2,h1,h2;
C O;

START
{
	TESTS
	{
		l1=1001;
		l2=1001;
		h1=-1001;
		h2=-1001;
		GI(N);
		REP(j,N)
		{
			scanf(" %c",&O);
			switch(O)
			{
				case 'p':
					GI(x1);GI(y1);
					if(x1 < l1) l1 = x1;
					if(x1 > h1) h1 = x1;
					if(y1 < l2) l2 = y1;
					if(y1 > h2) h2 = y1;
					break;
				case 'l':
					GI(x1);GI(y1);GI(x2);GI(y2);
					if(x1 < l1) l1 = x1;
					if(x1 > h1) h1 = x1;
					if(y1 < l2) l2 = y1;
					if(y1 > h2) h2 = y1;
					if(x2 < l1) l1 = x2;
					if(x2 > h1) h1 = x2;
					if(y2 < l2) l2 = y2;
					if(y2 > h2) h2 = y2;
					break;
				case 'c':
					GI(x1);GI(y1);GI(x2);
					if(x1-x2 < l1) l1 = x1-x2;
					if(y1-x2 < l2) l2 = y1-x2;
					if(x1+x2 > h1) h1 = x1+x2;
					if(y1+x2 > h2) h2 = y1+x2;
			}
		}
		printf("%d %d %d %d\n",l1,l2,h1,h2);
	}
	EXIT;
}