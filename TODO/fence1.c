#include <stdio.h>
int main()
{
	int l;
	float pi = 3.1415926;
	for(scanf("%d",&l);l!=0;scanf("%d",&l))
	{
		printf("%0.2f\n",(l*l)/(2*pi));
	}
	return 0;
}