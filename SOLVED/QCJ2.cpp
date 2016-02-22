#include <iostream>
using namespace std;
int dp[101][101];
int main()
{
	int n;
	dp[0][0] = 1;
	dp[0][1] = 0;
	while(cin>>n,n!=0)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(j==0) dp[i][j] = 1;
				else
				{
					dp[i][j]=0;
					for(int k=0;k<=i-1 && k<=j;k++)
					{
						dp[i][j] = (dp[i][j] + dp[i-1][k])%761238923; 
					}
				}
			}
		}
		cout<<dp[n][n]<<endl;
	}
}