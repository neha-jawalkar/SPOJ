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

I dfs(I* g, I i, I* v)
{
	if(v[g[i]/10] == v[i]*(g[i]%10 ? -1 : 1)) return 0;
	else if(v[g[i]/10] == v[i]*(g[i]%10 ? 1 : -1)) return 1;
	v[g[i]/10] = v[i]*(g[i]%10 ? 1 : -1);
	I x = dfs(g,g[i]/10,v);
	v[g[i]/10] = 2;
	return x;
}

START
{
	I n,g[100],v[100],i,j;
	C s[6];
	for(; GI(n) && n ;)
	{
		REP(i,n)
		{
			GI(j);GS(s);
			g[i] = --j*10 + (s[0] == 't'); 
		}
		SET(v, 0);
		REP(i,n) if(v[i] == 0 && (v[i] = 1) && dfs(g,i,v) == 0) break; else v[i] = 2;
		if(i == n) PS("NOT PARADOX"); else PS("PARADOX");  
	}
	EXIT;
}