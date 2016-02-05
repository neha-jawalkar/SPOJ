#include <stdio.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",a);
#define REP(i,N) for(i=0;i<(N);i++)
int c[100][3];
int main()
{
	int t,i,j,k,n;
	double b;
	GI(t);
	REP(i,t)
	{
		GI(n);
		REP(j,n) REP(k,3) GI(c[j][k]);	
		
	} 
}