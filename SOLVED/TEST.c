#include <stdio.h>

int main()
{
	int n;
	for(;;)
	{
		scanf("%d",&n);
		if(n == 42)
			return 0;
		printf("%d\n",n);
	}
	return 0;
}