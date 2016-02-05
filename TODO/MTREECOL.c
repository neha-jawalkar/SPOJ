#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
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
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;
typedef short SI;

I N,R,C[501][1001],T[1001][1001],P[1001],D[1001],c,t,p,q;
START
{
	for(GI(N);N!=0;GI(N))
	{
		GI(R);
		memset(T, 0, sizeof T);
		memset(C, 0, sizeof C);
		memset(P, 0, sizeof P);
		memset(D, 0, sizeof D);
		t=1;c=0;
		REP(i,N) { GI(k); C[k][0]++; C[k][ C[k][0] ] = i+1; }
		REP(i,N-1) { GI(k); T[k][0]++; GI(T[k][ T[k][0] ]); P[ T[k][ T[k][0] ] ] = k; }
		for(i=500; i; i--) 
		{
			if(C[i][0])
			{
				for(j=C[i][0];j && !D[j];j--)
				{
					p = C[i][j];
					q = 0;
					while( p )
					{
						c=c+q+i;
						q=q+i;
						t++;
						D[]
						p = P[p];
					}
					c = c + q*t;
				}
			}
		}
		PI(c);
	}
	EXIT;
}