#include <stdio.h>
#include <string.h>
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

I b[2000],e[2000][2001];

I dfs(I j)
{
	I i;
	REP2(i,1,e[j][0]+1)
	{
		if(b[e[j][i]] == -b[j]) continue;
		if(b[e[j][i]] == b[j]) return 0;
		if(b[e[j][i]] == 0) 
		{
			b[e[j][i]] = -b[j];
			if(dfs(e[j][i]) == 0) return 0; else continue;
		}
	}
	return 1;
}

START
{
	I n,m,j,b1,b2;
	TESTS
	{
		GI(n);GI(m);
		SET(e,0);
		REP(j,m)
		{
			GI(b1);GI(b2);
			--b1;
			e[b1][++e[b1][0]] = --b2;
			e[b2][++e[b2][0]] = b1;
		}
		SET(b,0);
		REP(j,n)
		{
			if(b[j] == 0) if( (b[j] = 1) && dfs(j) == 0)
			{
				printf("Scenario #%d:\nSuspicious bugs found!\n",i+1);
				break;
			}

		}
		if(j == n) printf("Scenario #%d:\nNo suspicious bugs found!\n",i+1);
	}
	EXIT;
}