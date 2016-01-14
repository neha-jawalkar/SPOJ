#include <stdio.h>
int main()
{
	int stack[1000];
	int top,curr,num,i,new_read,new_top,n;
	for(scanf("%d",&n);n!=0;scanf("%d",&n))
	{
//		printf("n:%d\n", n);
		scanf("%d",&num);
		new_read = 1;
		i = 1;
		curr = 1;
		top = -1;
		while(new_read || new_top)
		{
//			printf("num:%d new_read:%d top:%d stack_top:%d new_top:%d\n",num,new_read,top,stack[top],new_top);
			if(new_top)
			{
				if(stack[top] == curr)
				{
					curr++;
					top--;
					if(top > -1)
						new_top = 1;
					else new_top = 0;
				}
				else new_top = 0;
			}
			else if(new_read)
			{
				if(num == curr)
					curr++;
				else
				{
					top++;
					stack[top] = num;
				}
				new_read = 0;
				new_top = 1;
			}
			if(i < n && !new_top && !new_read)
			{
				scanf("%d",&num);
				new_read = 1;
				new_top = 1;
				i++;
//				printf("i:%d\n",i);
			}
		}
//		printf("%d %d %d\n",i,top,curr);
		if(i == n && top == -1 && curr == n+1)
			printf("yes\n");
		else printf("no\n");
	}
	return 0;
}