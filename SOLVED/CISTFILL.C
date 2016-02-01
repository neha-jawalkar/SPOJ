#include <stdio.h>
#include <stdlib.h>
#define LIM 2
int c[50000][3],w,d;
double low, mid, high,filled,h;
int n,m,v,t,i,j,k;
float bin_search()
{
/*	int k = 0;*/
	for(k=0;k<100;k++)
	{
/*		if(k <= LIM)
			printf("k:%d low:%lf high:%lf\n",k,low,high);*/
		filled=0;
		h=0;
		mid = (low+high)/2;
/*		if(k<=LIM)
			printf("mid:%lf\n",mid);*/
		for(j=0;j<m;j++)
		{
			if(c[j][0]+c[j][1] <= mid)
			{
				filled+=c[j][1]*c[j][2];
/*				if(k<=LIM)
					printf("j:%d filled:%lf\n", j,filled);*/
				if(h != mid)
					h = c[j][0]+c[j][1];
			}
			else if(c[j][0]<mid && c[j][0]+c[j][1]>mid)
			{
				filled+=(mid-c[j][0])*c[j][2];
/*				if(k<=LIM)
					printf("j:%d filled:%lf\n", j,filled);*/
				if(h != mid)
					h=mid;
			}
		}
/*		if(k<=LIM)
			printf("filled:%lf v:%d filled>v:%d\n", filled,v,filled>v);*/
		if(filled == v)
			return h;
		else if(filled < v)
			low = mid;
		else high = mid;
/*		k++;*/
	}
	return h;
}
int main()
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		t = 0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d %d %d %d",&c[j][0],&c[j][1],&w,&d);
			c[j][2] = w*d;
			if(j == 0)
			{
				low = c[j][0];
				high = low + c[j][1];
			}
			else
			{
				if(c[j][0] < low)
					low = c[j][0];
				if(c[j][0] + c[j][1] > high)
					high = c[j][0] + c[j][1];
			}
			t+=c[j][1]*c[j][2];
		}
		scanf("%d",&v);
		if(t < v)
		{
			printf("OVERFLOW\n");
			continue;
		}
		printf("%.2lf\n", bin_search());
	}
	return 0;
}