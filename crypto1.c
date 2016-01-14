#include <stdio.h>
#include <time.h>
int main()
{
	unsigned long long p = 4000000007;
	unsigned long long a,ex=1;
	int i,j=0;
	int add[14];
	add[0] = 1;
	add[1] = 9;
	add[2] = 11;
	add[3] = 14;
	add[4] = 15;
	add[5] = 17;
	add[6] = 19;
	add[7] = 20;
	add[8] = 23;
	add[9] = 24;
	add[10] = 25;
	add[11] = 27;
	add[12] = 28;
	add[13] = 29;
	scanf("%llu",&a);
	for(i=1;i<30;i++)
	{
		a = (a*a)%p;
		if(i == add[j])
		{
			ex = (ex*a)%p;
			j++;
		}
	}	
	if(p - ex < p/2)
		ex = p - ex;
	time_t t= (time_t)ex;
	char buf[30];
	strftime(buf,30,"%a %b %d %T %Y",gmtime(&t));
	printf("%s\n",buf);
	return 0;
}