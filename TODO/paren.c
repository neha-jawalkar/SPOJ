#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define TESTS int n,i;GI(n);getchar();REP(i,n)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define I int
#define START I main()
char e[100],c;
I t[100][100];
I f[100][100];
START
{
	I j,k,l,m;
	TESTS
	{
		for(j=0,c=getchar();c!='\n';c=getchar())
		{
			switch(c)
			{
				case 'T':
					e[j] = c;
					t[j][j] = 1;
					f[j][j] = 0;
					j++;
					break;
				case 'F':
					e[j] = c;
					t[j][j] = 0;
					f[j][j] = 1;
					j++;
					break;
				case 'a':
				case 'x':
				case 'o':
					getchar();
					e[j] = c;
					j++;
					break;
			}
		}
		e[j] = '\0';
		for(k=2;k<j;k+=2)
		{
			for(l=0;l<j-k;l+=2)
			{
				t[l][l+k] = 0;
				f[l][l+k] = 0;
				for(m=l+1;m<l+k;m+=2)
				{
					switch(e[m])
					{
						case 'a':
							t[l][l+k] += t[l][m-1]*t[m+1][l+k];
							f[l][l+k] += t[l][m-1]*f[m+1][l+k] + f[l][m-1]*t[m+1][l+k] + f[l][m-1]*f[m+1][l+k];
							break;
						case 'o':
							t[l][l+k] += t[l][m-1]*t[m+1][l+k] + t[l][m-1]*f[m+1][l+k] + f[l][m-1]*t[m+1][l+k];
							f[l][l+k] += f[l][m-1]*f[m+1][l+k];
							break;
						case 'x':
							t[l][l+k] += t[l][m-1]*f[m+1][l+k] + f[l][m-1]*t[m+1][l+k];
							f[l][l+k] += t[l][m-1]*t[m+1][l+k] + f[l][m-1]*f[m+1][l+k];	
					}
				}
			}
		}
		PI(t[0][j-1]);
	}
	EXIT;
}