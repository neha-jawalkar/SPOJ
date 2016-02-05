#include <stdio.h>
int main()
{
	char c = getchar();
	int i,count,ops;
	for(i=0;c!='-';c = getchar(),i++)
	{
		count = 0;
		ops = 0;
		for(;c!='\n' && c!='\r';c = getchar())
		{
			if(c == '{')
			{
//				printf("1.%c %d\n",c,count);
				count++;
			}
			else 
			{
//				printf("2.%c %d\n",c,count);
				count--;
//				printf("3.%c %d\n",c,count);
				if(count < 0)
				{
//					printf("4.%c %d\n",c,count);
					ops++;
//					printf("5.%c %d\n",c,count);
					count+=2;
//					printf("6.%c %d\n",c,count);
				}
//				printf("7.%c %d\n",c,count);
			}
//			printf("8.%c %d\n", c,count);
		}
		getchar();
		if(count > 0)
			ops += count/2;
		printf("%d. %d\n", i+1,ops);
	}
	return 0;
}