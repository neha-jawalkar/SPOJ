#include <stdio.h>
int x[4],y[4],n;
int main()
{	
	while(scanf("%d",&n),n!=-1)
	{
		if(n==0) printf("%d\n",1);
		else if(n==1) printf("%d\n",0);
		else if(n==2) printf("%d\n",3);
		else
		{
			x[0]=y[1]=1;
			x[1]=y[0]=0;
			x[2]=3;y[2]=0;
			for(int i=3;i<=n;i++)
			{
				x[3]=3*x[1]+2*y[0];
				y[3]=x[2]+y[1];
				x[0]=x[1];
				x[1]=x[2];
				x[2]=x[3];
				y[0]=y[1];
				y[1]=y[2];
				y[2]=y[3];
			}
			printf("%d\n",x[2]);
		}
	}
	return 0;
}