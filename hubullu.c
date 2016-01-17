#include <stdio.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
int main()
{
	int t,i,n;
	GI(t);
	REP(i,t)
	{
		GI(n);
		GI(n);
		if(n==0)
			printf("Airborne wins.\n");
		else printf("Pagfloyd wins.\n");
	}
	return 0;
}