#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,t;
	double sides[4],s;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		s = 0;
		for(j=0;j<4;scanf("%lf",&sides[j]),s+=sides[j],j++);
		s /= 2;
		printf("%.2lf\n",sqrt((s-sides[0])*(s-sides[1])*(s-sides[2])*(s-sides[3])));
	}
	return 0;
}