#include <stdio.h>
#include <stdbool.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define PC(c) printf("%c",c)
#define NEWLINE printf("\n")
#define A 'A'
#define B 'B'
typedef enum {False,True}boolean;
boolean flip[1000001];
int main()
{
	int k,l,m,n,i;
	GI(k);GI(l);GI(m);
	flip[0] = True;
	flip[1] = flip[k] = flip[l] = False;
	i=2;
	REP2(i,1000001)
	{
		if(i==k || i==l)
			continue;
		if(flip[i-1] || (i>k && flip[i-k]) || (i>l && flip[i-l]))
			flip[i] = False;
		else flip[i] = True;
	}
	REP(i,m)
	{
		GI(n);
		PC(flip[n]+'A');
	}
	NEWLINE;
	return 0;
}