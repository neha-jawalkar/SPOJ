#include <stdio.h>
typedef enum
{
	HORIZONTAL, VERTICAL
}type;
type lines[1001][1001];
int next_free_index[1001];
int main()
{
	int t,m,n,i,j,k,cost,total_cost;
	int break_count[2];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		break_count[0] = break_count[1] = 0;
		total_cost = 0;
		for(j=0;j<=1000;j++)
			next_free_index[j] = 0;
		scanf("%d %d",&m,&n);
		for(j=0;j<m-1;j++)
		{
			scanf("%d",&cost);
			lines[cost][next_free_index[cost]] = HORIZONTAL;
			next_free_index[cost]++;
		}
		for(j=m-1;j<m+n-2;j++)
		{
			scanf("%d",&cost);
			lines[cost][next_free_index[cost]] = VERTICAL;	
			next_free_index[cost]++;		
		}
		for(j=1000;j>=0;j--)
		{
			for(k=0;k<next_free_index[j];k++)
			{
				total_cost+= (break_count[(lines[j][k] + 1)%2]+1)*j;
				break_count[lines[j][k]]++;			}
		}
		printf("%d\n",total_cost);
	}
}