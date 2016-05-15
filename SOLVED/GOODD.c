#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GLL(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define LEN(s,ls) ls = strlen(s)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

C l[1000000][9];
I v[1000000],x[1000001];

START
{
	LL n,m,i,j,k,o,c;
	GLL(n);GLL(m);
	REP(i,n)
	{
		GS(l[i]);
		if(l[i][0] == 'g') GS(&l[i][1]);
		else if(l[i][0] >= '1' && l[i][0] <= '9') 
		{
			LEN(l[i],c);
			l[i][c-1] = '\0';
			x[atoi(l[i])] = i;
		}
	}
	SET(v,0);
	c = j = 0;
	REP(i,n)
	{
		if(v[i] == 1) 
		{
			j = 1;
			k = i;
			o = c;
		}
		else if(v[i] == 2 && j == 1 && k == i)
		{
			if(c - o) c += (c-o)*((m-c)/(c-o)-1);
			else
			{
				PS("TLE"); 
				break;
			}
		}
		++v[i];
		if(l[i][0] == 'c')
		{
			++c;
			if(c == m)
			{
				PLL(i+1);
				break;
			}
		}
		else if(l[i][0] == 'g') i = x[atoi(&l[i][1])];
	}
	if(i == n && c < m) PS("WA");
	EXIT;
}