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
	I x[26],d,i,j,k,l,m,t;
	C s[1001];
	for(GI(t),getchar(),i=0;i<t;++i)
	{
		fgets(s, 1000, stdin);
		l = strlen(s);
		s[--l] = '\0';
		SET(x,0);
		m = 0;
		REP(j,l) 
		{
			if(s[j] == ' ') continue;
			if(++x[s[j]-'A'] > m) 
			{
				m = x[s[j]-'A'];
				k = s[j]-'A';
			}
			else if(x[s[j]-'A'] == m) k = -1;
		}
		if(k == -1) 
		{
			PS("NOT POSSIBLE");
			continue;
		}
		d = k - 4 >= 0 ? k - 4 : k - 4 + 26;
		printf("%d ",d);
		REP(j,l) 
		{
			if(s[j] == ' ') printf(" ");
			else printf("%c",(s[j] - d >= 'A' ? s[j] - d : s[j] - d + 26));
		}
		NEWLINE;
	}
	EXIT;
}