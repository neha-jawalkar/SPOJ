#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define P 1000000007

typedef int I;
typedef long long LL;
typedef char C;

START
{
	I n,k,j,a[100],sum;
	TESTS
	{
		GI(n);GI(k);
		sum = 0;
		REP(j,n)
		{
			GI(a[j]);
			if(a[j]<0 && k>0)
			{
				a[j] = -a[j];
				sum += a[j];
				--k;
				if(k && j == n-1)
				{
					if(k%2) sum -= 2*a[j];
					k = 0;
				}
			}
			else if(a[j] == 0) k = 0;
			else if(a[j] > 0 && k > 0) 
			{
				if(j && a[j-1]<a[j])
				{
					if(k%2) sum -= 2*a[j-1];
					k = 0;
					sum += a[j];
				}
				else
				{
					if(k%2) sum -= a[j]; else sum += a[j];
					k = 0;
				}
			}
			else sum += a[j]; 
		}
		PI(sum);
	}
	EXIT;
}