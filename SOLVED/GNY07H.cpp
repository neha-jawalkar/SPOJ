#include <iostream>
using namespace std;
int main()
{	
	int n,w,x[3],y[3],z[3];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>w;
		x[0]=x[1]=y[0]=z[0]=z[1]=1;
		y[1]=2;
		for(int j=2;j<=w;j++)
		{
			x[2]=x[1]+x[0]+2*y[0]+z[0];
			y[2]=x[2]+y[1];
			z[2]=x[2]+z[0];
			x[0]=x[1];x[1]=x[2];
			y[0]=y[1];y[1]=y[2];
			z[0]=z[1];z[1]=z[2];
		}
		printf("%d %d\n",i+1,x[1]);
		
	}
}