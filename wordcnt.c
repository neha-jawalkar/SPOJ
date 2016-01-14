#include <stdio.h>
#include <string.h>
int main()
{
	char c;
	int n,i,prev_len,curr_len,curr_count,max,start;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		prev_len=0;
		curr_len=0;
		curr_count=1;
		max=0;
		start=1;
		for(c=getchar();c=='\n' || c==' ' || c=='\t' || c=='\r';c=getchar());
		for(;c!='\n' && c!=EOF;c=getchar())
		{
			if(c>='a' && c<='z')
			{
				if(start)
					start=0;
				curr_len++;
			}
			else if(!start)
			{
				if(curr_len == prev_len)
					curr_count++;
				else
				{
					prev_len = curr_len;
					curr_count = 1;
				}
				if(curr_count > max)
					max = curr_count;
				curr_len = 0;
				start = 1;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}