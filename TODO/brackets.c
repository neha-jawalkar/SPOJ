#include <stdio.h>
int main()
{
	int t,i,j;
	char word[30001];
	int count;
	int n,m,op;
	for(t=0;t<10;t++)
	{
		printf("Test %d:\n", t+1);
		count = 0;
		scanf("%d",&n);
		scanf("%s",word);
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&op);
			if(op > 0)
			{
				word[op-1] = (word[op-1] == ')'? '(' : ')');
				// printf("Word=%s\n", word);
			}
			else
			{
				for(j=0;j<n;j++)
				{
					count = count + (word[j] == '(' ? 1 : -1);
					// printf("Char=%c Count=%d\n", word[j],count);
					if(count < 0)
						break;
				}
				if(j == n && count == 0)
					printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}