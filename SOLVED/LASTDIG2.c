#include <stdio.h>
#include <string.h>
char A[1001];
long long B;
int l,i,j,t,p,q;
int main()
{
	
	for(scanf("%d",&t),i=0;i<t;++i)
	{
		scanf("%s %lld",A,&B);
		l = A[ strlen(A) - 1 ] - '0';
		if(B==0) printf("1\n");
		else
		{
			p =  (B-1) % 4;
			for(q=l;p;q*=l,--p);	
			printf("%d\n",q%10);
		}	
	}
	return 0;
}