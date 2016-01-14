#include <stdio.h>
int main()
{
	int t,i;
	double av;
	long int num,den,rem;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lf",&av);
		if(av == 0)
		{
			printf("0\n");
			continue;
		}
		den = 10000;
		num = av*den;
		do
		{
			rem = num%den;
			num = den;
			den = rem;
		}while(den > 0);
		printf("%ld\n",10000/num);
	}
	return 0;
}