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

typedef int I;
typedef long long LL;
typedef char C;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

I bin_search(I n, I* S, I l, I h)
{
	if(l==h) return 0;
	I m = (l+h)/2;
	if(S[m]==n) return 1;
	if(S[m]<n) return bin_search(n,S,m+1,h);
	if(S[m]>n) return bin_search(n,S,l,m);
}

START
{
	I i,N,K,S[100000],P=0;
	GI(N);GI(K);
	REP(i,N) GI(S[i]);
	qsort(S,N,sizeof(I), cmpfunc);
	REP(i,N) if(S[i]+K<=S[N-1]) P+=bin_search(S[i]+K,S,i+1,N);
	PI(P);
	EXIT;
}