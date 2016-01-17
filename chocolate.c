#include <stdio.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REPINV(i,N) for(i=(N);i>0;i--)
#define REP2(i,N) for(;i<(N);i++)
int lines[2000][2];
int main()
{
	int i,j,k,t,m,n,temp[2],count[2],cost;
	GI(t);
	REP(i,t)
	{
		GI(m);
		GI(n);
		REP(j,m-1) 
		{
			GI(lines[j][0]);
			lines[j][1] = 0;
		}
		REP2(j,m+n-2)
		{
			GI(lines[j][0]);
			lines[j][1] = 1;
		}
		REP(j,m+n-3)
		{
			k=j+1;
			REP2(k,m+n-2)
			{
				if(lines[j][0] < lines[k][0])
				{
					temp[0] = lines[j][0];
					temp[1] = lines[j][1];
					lines[j][0] = lines[k][0];
					lines[j][1] = lines[k][1];
					lines[k][0] = temp[0];
					lines[k][1] = temp[1];
				}
			}
		}
		count[0] = count[1] = cost = 0;
		REP(j,m+n-2)
		{	
			if(lines[j][1] == 0)
			{
				cost += lines[j][0]*(count[1]+1);
				count[0]++;
			}
			else 
			{
				cost += lines[j][0]*(count[0]+1);
				count[1]++;
			}
		}
		printf("%d\n",cost);
	}
	return 0;
}