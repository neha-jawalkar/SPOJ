#include <stdio.h>
#include <string.h>
char e[5001]; //for encrypted string
long long int n[5000]; //for number of decryptions
int main()
{
	int i,l; //for length
	n[0] = 1;
	for(;;)
	{
		scanf("%s",e);
		if(e[0] == '0')
			break;
		l = strlen(e);
		for(i=1;i<l;i++)
		{
			if(e[i] == '0')
				n[i] = n[(i>1?i-2:0)];
			else if(e[i-1] == '0')
				n[i] = n[i-1];
			else
			{
				n[i] = n[i-1] + (e[i-1]=='1' || (e[i-1]=='2' && e[i] < '7') ? n[(i>1?i-2:0)] : 0) ;
			}
		}
		printf("%lld\n", n[l-1]);
	}
	return 0;
}