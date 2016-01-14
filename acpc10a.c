#include <stdio.h>
#include <math.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",a)
#define REP(i,N) for(i=0;i<(N);i++)
int main()
{
	int a[3],i;
	while(1)
	{
		REP(i,3) GI(a[i]);
		if(a[0]==0 && a[1]==0 && a[2]==0)
			break;
		if(a[0] + a[2] == 2*a[1])
			printf("AP %d\n",a[2] + a[1]-a[0]);
		else printf("GP %d\n",a[2]*a[1]/a[0]);
	}
	return 0;
}