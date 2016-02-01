#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0

int main()
{
	int n,m,i,x,s[2],t;
	char v[20001][2];
	for(GI(n);n!=0;GI(n))
	{
		memset(v,0,sizeof(v));
		memset(s,0,sizeof(s));
		t=0;
		REP(i,n)
		{
			GI(x);
			v[x+10000][0]=1;
		}
		GI(m);
		REP(i,m)
		{
			GI(x);
			v[x+10000][1]=1;
		}
		REP(i,20001)
		{
			if(v[i][0]) 
			{
				s[0]+=(i-10000);
			}
			if(v[i][1]) 
			{
				s[1]+=(i-10000);
			}
			if(v[i][0]&&v[i][1])
				{
					t+=(s[0]>s[1]?s[0]:s[1]);
					s[0] = s[1] = 0;
				}
		}
		t+=(s[0]>s[1]?s[0]:s[1]);
		PI(t);
	}
	EXIT;
}