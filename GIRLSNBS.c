#include <stdio.h>
#include <string.h>
#include <math.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GD(a) scanf("%lf",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PD(a) printf("%.0lf\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()

typedef int I;
typedef long long LL;
typedef char C;
typedef double D;

START
{
	D G,B;
	for(GD(G),GD(B);G!=-1;GD(G),GD(B)) PD(ceil((G>B?G:B)/((G>B?B:G)+1)));
	EXIT;
}
