#include <stdio.h>
int main()
{
	long long unsigned n,i,k,num,count=0;
	scanf("%llu %llu",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%llu",&num);
		if(num%k == 0)
			count++;
	}
	printf("%llu\n", count);
	return 0;
}