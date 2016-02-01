#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GC(a) a=getchar()
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()

typedef int I;
typedef long long LL;
typedef char C;
typedef char* CC;
typedef int* II;

START
{
	C h;
	CC n;
	I l,i,j,m;
	II lps;
	for(;GI(l)!=-1;)
	{
		n = (C*)malloc((l+1)*sizeof(C));
		lps = (I*)malloc(l*sizeof(I));
		scanf("%s",n);
		lps[0]=0;
		m=0;
		i=1;
		REP2(i,l)
		{
			if(n[i]==n[m])
			{
				m++;
				lps[i] = m;
			}
			else
			{
				if(m!=0)
				{
					m=lps[m-1];
					i--;
				}
				else
				{
					lps[i]=0;
				}
			}
		}
		GC(h);
		i=0;
		j=0;
		for(GC(h);h!='\n';)
		{
			if(h==n[i])
			{
				if(i==l-1)
				{
					PI(j-l+1);
					i=lps[i];
				}
				else i++;
				j++;
				GC(h);
			}
			else
			{
				if(i)
				{
					i=lps[i-1];
				}
				else
				{
					j++;
					GC(h);
				}
			}
		}
		NEWLINE;	
	}
	EXIT;
}