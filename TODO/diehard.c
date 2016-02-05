#include <stdio.h>
int main()
{
	int i,t,h,a,turns;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&h,&a);
		turns = 1;
		h += 3;
		a += 2;
		while(1)
		{
			if(h > 5 && a > 10)
			{
				h -= 2;
				a -= 8;
			}
			else if(h > 20)
			{
				h -= 17;
				a += 7;
			}
			else break;
			turns += 2;
		}
		printf("%d\n",turns);
	}
	return 0;
}