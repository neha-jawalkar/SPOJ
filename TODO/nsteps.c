#include <stdio.h>
int main()
{
	int i,t,x,y,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		if(x == y)
		{
			if(x%2==0)
				n = 2*x;
			else n = 2*x - 1;
		}
		else if(x == y+2)
		{
			if(x%2==0)
				n = 2*(x-1);
			else n = 2*x - 3;
		}
		else n = -1;
		if(n == -1)
			printf("No Number\n");
		else printf("%d\n",n);
	}
	return 0;
}