#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
typedef int I;
typedef long long LL;
#define START I main()
START
{
	I a;
	LL c,n,m,j,s[2],x;
	TESTS
	{	
		GLL(n);
		GI(a);
		s[0]=a;
		s[1]=1;
		m=s[0];
		c=s[1];
		j=1;
		REP2(j,n)
		{
			GI(a);
			x=s[0]+a;
			if(x>a)
			{
				s[0]=x;
				if(x>m)
				{
					m=s[0];
					c=s[1];
				}
				else if(x==m)
				{
					c=c+s[1];
				}
			}
			else if(x==a)
			{
				s[0]=x;
				s[1]++;
				if(x>m)
				{
					m=s[0];
					c=s[1];
				}
				else if(x==m)
				{
					c=c+s[1];
				}
			}
			else
			{
				s[0]=a;
				s[1]=1;
				if(a>m)
				{
					m=s[0];
					c=s[1];
				}
				else if(a==m)
				{
					
					c=c+s[1];
				}
			}
		}
		printf("%lld %lld\n",m,c);
	}
	EXIT;
}