#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS I t,i;GI(t);getchar();REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()

typedef int I;
typedef long long LL;
typedef char C;

I s[15][2];
C c;
I N,j,k[8];
START
{
	s[0][0]=1;
	s[0][1]=8;
	s[1][0]=2;
	s[1][1]=5;
	s[2][0]=3;
	s[2][1]=4;
	s[3][0]=3;
	s[3][1]=4;
	s[4][0]=6;
	s[4][1]=7;
	s[5][0]=6;
	s[5][1]=7;
	s[6][0]=10;
	s[6][1]=11;
	s[7][0]=13;
	s[7][1]=14;
	s[8][0]=9;
	s[8][1]=12;
	s[9][0]=10;
	s[9][1]=11;
	s[10][0]=3;
	s[10][1]=4;
	s[11][0]=6;
	s[11][1]=7;
	s[12][0]=13;
	s[12][1]=14;
	s[13][0]=10;
	s[13][1]=11;
	s[14][0]=13;
	s[14][1]=14;
	TESTS
	{
		j=0;
		memset(k,0,sizeof k);
		GI(N);
		getchar();
		while( (c=getchar()) != '\n')
		{
			j=s[j][ (c=='H' ? 0 : 1) ];
			if(j==3) k[0]++;
			else if(j==4) k[1]++;
			else if(j==6) k[2]++;
			else if(j==7) k[3]++;
			else if(j==10) k[4]++;
			else if(j==11) k[5]++;
			else if(j==13) k[6]++;
			else if(j==14) k[7]++;
		}
		printf("%d ",N);
		for(j=7;j>-1;j--) printf("%d ",k[j]);
		NEWLINE;
	}
	EXIT;
}