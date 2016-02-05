#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLF(a) scanf("%lf",&a);
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define I int
#define START I main()
#define LL long long
#define LF double
START
{
	LF a[20];
	I K,i,j,x,y;
	for(GI(K);K!=0;GI(K))
	{
		REP(i,K) GLF(a[i]);
		x=0;
		REP(i,K-1)
		{
			if(x) break;
			j=i+1;
			REP2(j,K)
			{
				if(a[i]<a[j])
				{
					y = a[i];
					a[i] = a[j];
					a[j] = y;
				}
				else if(a[i]==a[j])
				{
					x=1;
					break;
				}
			}
		}
		if(!x)
		{
			i=1;
			REP2(i,K-1) y+=a[i];
			for(i=1;i<K-1;i++)
			{
				if(y>a[i-1])
				{
					x=1;
					break;
				}
				y-=a[i];
			}
		}
		if(x) PS("YES"); else PS("NO");
	}
	EXIT;
}