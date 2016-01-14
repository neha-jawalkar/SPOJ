#include <stdio.h>
int main()
{
	int i,j,t,min,low,high,mid,temp,index;
	int x[100000],q[100000],head,tail,n,c;
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		min = 0;
		scanf("%d %d",&n,&c);
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i]);
			if(j == 0)
			{
				low = x[j];
				high = x[j];
			}
			else
			{
				if(x[j] < low)
					low = x[j];
				else if(x[j] > high)
					high = x[j];
			}
		}
		q[0] = low;
		q[1] = high;
		head = 0;
		tail = 1;
		c -= 2;
		while(c >=0 && head!=tail)
		{
			if(c == 0)
			{
				printf("%d\n", min);
				continue;
			}
			low = q[head];
			high = q[head+1];
			head++;
			mid = (low+high)/2;
			temp = high - low;
			index = -1;
			for(j=0;j<n;j++)
			{
				if((x[j] - mid)*-1*(x[j] < mid) < temp)
				{
					temp = (x[j] - mid)*-1*(x[j] < mid);
					index = j;
				}
			}
			if(index != -1)
			{
				tail++;
				q[tail] = low;
				tail++;
				q[tail] = temp;
				tail++;
				q[tail
			}
		}
	}
}