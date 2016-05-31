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
#define LEN(s,ls) ls = strlen(s)
#define P 1000000007
#define GC getchar()

typedef int I;
typedef long long LL;
typedef char C;

I q[40000][2],c[100][100];

START
{
    C g[100][101];
    I h,w,i,j,s[2],d[2],v[2],b,e;
    GI(w);GI(h);
    s[0] = -1;
    for(GC,i=0;i<h;++i) REP(j,w+1)
    {
        g[i][j] = GC;
        if(j<w) c[i][j] = P;
        if(g[i][j] == 'C') 
        {
            if(s[0] == -1)
            {
                s[0] = i;
                s[1] = j;
            }
            else 
            {
                d[0] = i;
                d[1] = j;
            }
        }
    }
    b = e = 0;
    c[s[0]][s[1]] = -1;
    q[e][0] = s[0];
    q[e++][1] = s[1];
    while(b < e)
    {   
        v[0] = q[b][0];
        v[1] = q[b++][1];
        if(v[0] == d[0] && v[1] == d[1]) break;
        for(i=v[0];i>=0;--i)
        {
            if(g[i][v[1]] == '*') break;
            else if(c[i][v[1]] > c[v[0]][v[1]] + 1)
            {
                c[i][v[1]] = c[v[0]][v[1]] + 1;
                q[e][0] = i;
                q[e++][1] = v[1];
            }
        }
        for(i=v[0]+1;i<h;++i)
        {
            if(g[i][v[1]] == '*') break;
            else if(c[i][v[1]] > c[v[0]][v[1]] + 1)
            {
                c[i][v[1]] = c[v[0]][v[1]] + 1;
                q[e][0] = i;
                q[e++][1] = v[1];
            } 
        }
        for(i=v[1];i>=0;--i)
        {
            if(g[v[0]][i] == '*') break;
            else if(c[v[0]][i] > c[v[0]][v[1]] + 1)
            {
                c[v[0]][i] = c[v[0]][v[1]] + 1;
                q[e][0] = v[0];
                q[e++][1] = i;
            }
        }
        for(i=v[1]+1;i<w;++i)
        {
            if(g[v[0]][i] == '*') break;
            else if(c[v[0]][i] > c[v[0]][v[1]] + 1)
            {
                c[v[0]][i] = c[v[0]][v[1]] + 1;
                q[e][0] = v[0];
                q[e++][1] = i;
            }
        }
    }
    PI(c[d[0]][d[1]]);
    EXIT;
}