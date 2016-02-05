#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define GC(a) scanf("%c",&a)
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
#define min(a,b) ((a)<(b)?(a):(b))

typedef int I;
typedef long long LL;
typedef char C;

I N,P[58][59][2],R[58][59][2],F;
C A[2],B[2];

I solve(I n)
{
	V[n] = 1;
	if(n == 'Z' - 'A') return 1000000000;
	if(!P[n][0][0]) return 0;
	I i,F=0;
	REP2(i,1,P[n][0][0]+1) F+=min(P[n][i][1],solve(P[n][i][0]));
	printf("%c %d\n",n+'A',F);
	return F;
}

START
{
	I i;
	SET(V,0);
	SET(P,0);
	GI(N);
	REP(i,N)
	{
		GS(A);GS(B);GI(F);
		P[A[0]-'A'][0][0]++;
		P[A[0]-'A'][ P[A[0]-'A'][0][0] ][0] = B[0] - 'A';
		P[A[0]-'A'][ P[A[0]-'A'][0][0] ][1] = F;
		P[B[0]-'A'][0][0]++;
		P[B[0]-'A'][ P[B[0]-'A'][0][0] ][0] = A[0] - 'A';
		P[B[0]-'A'][ P[B[0]-'A'][0][0] ][1] = F;
	}
	memcpy(R,P,sizeof P);
	PI(solve(0));
	EXIT;
}