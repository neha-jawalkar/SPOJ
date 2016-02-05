#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define PI(a) printf("%d ",(a))
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

I stack[1000];
I Q[1000];
I tree[500][2];
I s,e,top,r,n0,j,n,c;
START
{
	TESTS
	{
		memset(tree,0,sizeof(tree));
		s=0;e=0;top=0;
		GI(n);
		REP(j,n)
		{
			GI(n0);
			if(j==0) r=n0;
			GI(tree[n0][0]);
			GI(tree[n0][1]);
		}
		Q[e]=-1;
		e++;
		Q[e]=r;
		e++;
		while(s<e)
		{
			n0=Q[s];
			s++;
			if(s<e && Q[s]==-1)
			{
				stack[top]=n0;
				top++;
			}
			else if(n0!=-1 && !tree[n0][0] && !tree[n0][1])
			{
				PI(n0);
				continue;
			}
			else if(n0==-1 && s<e)
			{
				n0=Q[s];
				s++;
				PI(n0);
				Q[e]=-1;
				e++;
			}
			if(tree[n0][1])
			{
				Q[e]=tree[n0][1];
				e++;
			} 
			if(tree[n0][0])
			{
				Q[e]=tree[n0][0];
				e++;
			}
		}
		for(top--;top>-1;PI(stack[top]),top--);
		NEWLINE;
	}
	EXIT;
}