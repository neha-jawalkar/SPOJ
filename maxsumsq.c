#include <stdio.h>
int a[100000];
int sum[100000];
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,j,b,c, max_sum;
		unsigned long long count = 0;
		scanf("%d",&n);
		scanf("%d",&a[0]);
		sum[0] = a[0];
		max_sum = sum[0];
		count = 1;
		for(j=1;j<n;j++)
		{
			scanf("%d",&a[j]);
			b = sum[j-1] + a[j];
			sum[j] = b > a[j] ? b : a[j];
			c = (b == a[j]) + 1;
			if(sum[j] > max_sum)
			{
				max_sum = sum[j];
				count = 1;
			}
			else if(sum[j] == max_sum)
				count = count + c;
		}
		printf("%d %llu\n",max_sum, count);
	}
	return 0;
}