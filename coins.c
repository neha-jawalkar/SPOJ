#include <stdio.h>
typedef struct conversion{
int coins;
long long int dollars;
}conversion;
conversion con[600];
int next_free_index;
long long int max(long long int a, long long int b)
{
	return (a > b ? a : b);
}
int dollars(int c)
{
	int i;
	for(i=0;i<600;i++)
	{
		if(con[i].coins == c)
			return i;
	}
	con[next_free_index].coins = c;
	con[next_free_index].dollars = 0;
	next_free_index = (next_free_index + 1)%600;
	return (next_free_index - 1)%600;
}
long long int max_dollars(long long int c)
{
	if(c == 0)
		return 0;
	int index = dollars(c);
	if(con[index].dollars == 0)
		con[index].dollars = max(c, max_dollars(c/2) + max_dollars(c/3) + max_dollars(c/4));
	return con[index].dollars;
}
int main()
{
	int i;
	next_free_index = 0;
	long long int c;
	// Remember the final space!
	for(i=0;i<600;i++)
		con[i].dollars = 0;
	while(scanf("%lld",&c)!=EOF)
		printf("%llu\n", max_dollars(c));
	return 0;
}