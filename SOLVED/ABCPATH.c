#include <stdio.h>

int t,h,w,g[50][50],i,j,k,l,m,s[2500][2],d[50][50];
char c;

int solve(int x, int y)
{
	if(d[x][y]) return d[x][y];
	int i,m=1,l,u,v;
	for(i=-1;i<2;++i) for(j=-1;j<2;++j)
	{
		if(!i && !j) continue;
		u = x+i;
		v = y+j;
		if(u >=0 && u<h && v >=0 && v<w && g[u][v] == g[x][y] + 1)
		{
			l = solve(u,v) + 1;
			if(l > m) m = l;
		}
	}
	d[x][y] = m;
	return m;
}

int main()
{
	for(t=0;scanf("%d %d%c",&h,&w,&c) && h!=0;++t)
	{
		k=0;l=0;
		for(i=0;i<h;scanf("%c",&c),++i) for(j=0;j<w;++j) 
		{
			d[i][j] = 0;
			scanf("%c",&c);
			g[i][j] = c - 'A';
			if(!g[i][j])
			{
				s[k][0] = i;
				s[k++][1] = j;
			}
		}
		for(i=0;i<k;++i)
		{
			m = solve(s[i][0],s[i][1]);
			l = m > l ? m : l;
			if(l == 26) break;
		}
		printf("Case %d: %d\n",t+1,l);
	}
	return 0;
}