#include <stdio.h>
int main()
{
	int t,i,j,b,f,l[1000],n,a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&b,&f);
		n=0;
		for(j=0;j<f;scanf("%d",&l[j]),n+=l[j],j++);
		printf("Scenario #%d:\n",i+1);
		if(n < b)
		{
			printf("impossible\n\n");
			continue;
		}
		if(n == b)
		{
			printf("%d\n\n",f);
			continue;
		}
		for(n=0;n<f-1&&b>0;n++)
		{
			for(j=n+1;j<f;j++)
			{
				if(l[j]>l[n])
				{
					a = l[n];
					l[n] = l[j];
					l[j] = a;
				}
			}
			b = b-l[n];
		}
		printf("%d\n\n",n);
	}
	return 0;
}