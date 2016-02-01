#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
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

typedef int I;
typedef long long LL;
typedef char C;

I min(I x, I y, I z)
{
	return x<y?x<z?x:z:y<z?y:z;
}
I max(I x, I y)
{
	return x>y?x:y;
}
START
{
	I j,k,m,n;
	short e[2000][2000];
	C a[2001],b[2001];
	TESTS
	{
		scanf("%s %s",a,b);
		m=strlen(a);
		n=strlen(b);
		memset(e,0,sizeof e);
		REP(j,m) REP(k,n) e[j][k] = min( (j>0?e[j-1][k]:k) + 1, (k>0?e[j][k-1]:j) + 1, ((j>0 && k>0)?e[j-1][k-1]:max(j,k)) + (a[j]!=b[k])); 
		PI(e[m-1][n-1]);
	}
	EXIT;
}