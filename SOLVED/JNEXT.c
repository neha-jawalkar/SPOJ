#include <stdio.h>
#include <stdlib.h>

int t,n,d[1000000],i,j;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


void next_largest()
{
	for(j=n-1;j;--j) if(d[j] > d[j-1]) break;
	if(j)
	{
		int temp,k;
/*		for(k=j;k<n-1;++k) for(l=k+1;l<n;++l) if(d[k]>d[l])
		{
			temp = d[k];
			d[k] = d[l];
			d[l] = temp;
		}*/
		qsort(&d[j],n-j,sizeof(int),cmpfunc);
		for(k=j;k<n;++k) if(d[k]>d[j-1])
		{
			temp = d[k];
			d[k] = d[j-1];
			d[j-1] = temp;
			break;
		}
	}
	else
	{
		n = 1;
		d[0] = -1;
	}
}	

int main()
{
	scanf("%d",&t);
	for(i=0;i<t;++i)
	{
		scanf("%d",&n);
		for(j=0;j<n;++j) scanf("%d",&d[j]);
		next_largest();
		for(j=0;j<n;++j) printf("%d",d[j]);
		printf("\n");
	}
	return 0;
}