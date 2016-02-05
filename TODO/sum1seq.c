#include <stdio.h>
#include <math.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REPINV(i,N) for(i=(N);i>=1;i--)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
void rec(int n, int s)
{
	if(n==0&&s==0)
		return;
	
}
int main()
{
	int n,s;
	TESTS
	{
		GI(n);GI(s);
		rec(n-1,s);
	}
	EXIT;
}