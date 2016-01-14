#include <stdio.h>
long long int max, area;
void check()
{
	if(area > max)
		max = area;
}
int main()
{
	long long int hist[100000];
	int stack[100000],n,i,top;
	for(scanf("%d",&n);n!=0;scanf("%d",&n))
	{
		top = -1;
		max = 0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&hist[i]);
			if(top == -1 || hist[i] > hist[stack[top]])
			{
				top++;
				stack[top] = i;
			}
			else
			{
				for(;top > -1 && hist[stack[top]] > hist[i];top--)
				{
					area = hist[stack[top]]*(i - (top ? stack[top-1] + 1 : 0));
					check();
				}
				top++;
				stack[top] = i;
			}
		}
		for(;top>0;top--)
		{
			area = hist[stack[top]]*(n - stack[top-1] - 1);
			check();
		}
		area = hist[stack[top]]*n;
		check();
		printf("%lld\n",max);
	}
	return 0;
}