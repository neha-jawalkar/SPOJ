#include <stdio.h>
int m;
int tree(int n)
{
	printf("n:%d\n",n);
	int i,j,temp,max = 0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(n >= i+j)
			{
				temp = i + tree(n-i-j);
				if(temp > max)
					max = temp;
			}
		}
	}
	printf("%d %d\n",n,max);
	return max;
}
int main()
{
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		while(n - tree(n)!=0)
		{

		}
		printf("%d\n",tree(n));
	}
	return 0;
}