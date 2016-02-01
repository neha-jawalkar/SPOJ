#include <stdio.h>
#include <string.h>

long long dp[1000001];
int N,t,i,j,L;

int main()
{
	memset(dp,0,sizeof dp);
	L=2;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 5;
	for(scanf("%d",&t),i=0;i<t;i++)
	{
		scanf("%d",&N);
		if(!dp[N]) for(j=L+1;j<N+1;j++) dp[j] = 3*(dp[j-1] - dp[j-2]) + dp[j-3] + 1 + (j%2==0);
		printf("%lld\n",dp[N]);
	}
	return 0;
}