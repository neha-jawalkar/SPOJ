#include <stdio.h>
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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I cmpfunc(const void* x, const void* y)
{
	double xx = *(double*)x, yy = *(double*)y;
  	if (xx < yy) return -1;
  	if (xx > yy) return  1;
  	return 0;
}

typedef struct pair
{
	double x; double y;
}pair;

START
{
	I i,j,n;
	pair points[19900];
	double slopes[19900];
	for(;GI(n) && n;)
	{
		REP(i,n)
		{
			scanf("%lf %lf",&points[i].x,&points[i].y);
			REP(j,i)
			{
				slopes[(i*(i-1))/2+j] = points[j].x == points[i].x ? P : (points[j].y - points[i].y)/(points[j].x - points[i].x);
			}
		}
		qsort(slopes,(n*(n-1))/2,sizeof(double),cmpfunc);
		j = 1;
		REP2(i,1,(n*(n-1))/2) if(slopes[i]!=slopes[i-1]) ++j;
		PI(j);
	}
	EXIT;
}