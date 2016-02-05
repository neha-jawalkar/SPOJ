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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I n,W,w[100],j,v[100];
short dp[1000][100][100][100];

I solve(I W, I* v)
{
	printf("%d\n",W);
	I k;REP(k,n) printf("%d ", v[k]);NEWLINE;
	if(W<0) return 0;
	if(W==0) return 1;
	I i,j,m=0;
	REP(i,n)
	{
		if(!v[i])
		{
			v[i]=1;
			m+=solve(W-w[i],v);
			v[i]=0;
			for(j=i+1;w[j]==w[i];j++);
			j--;
			i=j;
		}
	}
	return (m>1?m:1);
}

int cmpfunc(const void *a, const void*b){ return *(int*)a - *(int*)b; }

START
{
	TESTS
	{
		SET(v,0);
		GI(n);GI(W);
		REP(j,n) GI(w[j]);
		qsort(w,n,sizeof(I),cmpfunc);
		PI(solve(W,v));
	}
	EXIT;
}