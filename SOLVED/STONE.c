#include <stdio.h>
int main()
{
	int t,n,i,j;
	double x0,y0,x1,y1,x2,y2,b,cx,cy,a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		cx = 0;
		cy = 0;
		a = 0;
		scanf("%d",&n);
		scanf("%lf %lf",&x0,&y0);
		x1 = x0;
		y1 = y0;
		for(j=1;j<n;j++)
		{
			scanf("%lf %lf",&x2,&y2);
			b = x1*y2 - x2*y1;
			cx += (x1 + x2)*b;
			cy += (y1 + y2)*b;
			a += b;
			x1 = x2;
			y1 = y2;
		}
		x2 = x0;
		y2 = y0;
		b = x1*y2 - x2*y1;
		cx += (x1 + x2)*b;
		cy += (y1 + y2)*b;
		a += b;
		a /= 2;
		cx /= (6*a);
		cy /= (6*a);
		printf("%.2lf %.2lf\n",cx,cy);
	}
	return 0;
}