#include <stdio.h>
#include <math.h>
#define TESTS int t,i;GI(t);REP(i,t)
#define REP(i,N) for(i=0;i<(N);i++)
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define EXIT return 0
int main()
{
	int h,p,a,u;
	double A,B,C,D;
	TESTS
	{
		GI(h);GI(p);GI(a);
		if(p>h)
		{
			PI(1);
			continue;
		}
		A = p;
		B = p-2*a;
		C = 2*(a-h);
		D = B*B - 4*A*C;
		D = sqrt(D);
		u = ceil((D-B)/(2*A));
		PI(2*u-1);
	}
	EXIT;
}