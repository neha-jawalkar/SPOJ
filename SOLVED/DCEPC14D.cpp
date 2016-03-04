#include <iostream>
#include <map>
using namespace std;
#define P 1000000007
map<int,int> dp[10000];
int n, s, a[10000];
int main()
{
	cin>>n;
	s=0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		for(int j=0;j<i;++j)
		{
			if(a[i]%a[j] == 0)
			{
				dp[i][a[i]/a[j]] = (dp[i][a[i]/a[j]] + dp[j][a[i]/a[j]] + 1) % P;
				s = (s + dp[j][a[i]/a[j]] + 1) % P;
			}
		}
		for(int j=0;j<i;++j)
		{
			if(a[j]%a[i] == 0 && a[i]%a[j] != 0)
			{
				dp[j][a[j]/a[i]] = ( dp[j][a[j]/a[i]] + dp[i][a[j]/a[i]] + 1) % P;
				s = ( s + dp[i][a[j]/a[i]] + 1) % P;
			}
		}
	}
	cout<<s<<endl;
}