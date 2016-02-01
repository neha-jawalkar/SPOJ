#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,s,N) for(i=s;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

I j,k,l,N,M,O,K,S,A[1000];

void swap(I A[], I j, I k)
{
	l = A[j];
	A[j] = A[k];
	A[k] = l;
}

START
{
	M=0;O=0;
	GI(N);GI(K);GI(S);
	REP(j,N) GI(A[j]);
	REP(j,N) { REP2(k,j+1,N) if(A[j] < A[k]) swap(A,j,k); M+=A[j]; O++; if(M >= K*S) { PI(O);break; } }
	EXIT;
}