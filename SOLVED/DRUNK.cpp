#include <iostream>
using namespace std;
float dp[1000001][2];
int main()
{
	int t,n,p,q,z,m[2];
	float w,x,y,c1,c2,c3;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>c1>>c2>>c3>>m[0]>>m[1];
		dp[0][0] = !m[0];
		dp[0][1] = !m[1];
		for(int j=1;j<=n;++j)
		{
			for(int k=0;k<=1;++k)
			{
				p=k;
				q=(k+1)%2;
				x=0;
				for(int l=1;l<=4;++l)
				{
					z = j-l*l;
					w = 0;
					if(z >= 0)
					{	
						y = z+1 == j ? 0 : z-1 >= 0 ? c1/(c1+c2+c3) : c1/(c1+c2);
						w += y ? y*(m[p] ^ m[q] ? dp[z+1][q] : 1 - dp[z+1][q]) : 0;
						y = z+1 == j ? z-1 < 0 ? 1 : c2/(c2+c3) : z-1 < 0 ? c2/(c1+c2) : c2/(c1+c2+c3);
						w += y*(m[p] ^ m[q] ? dp[z][q] : 1 - dp[z][q]);
						y = z-1 < 0 ? 0 : z+1 == j ? c3/(c2+c3) : c3/(c1+c2+c3);
						w += y ? y*(m[p] ^ m[q] ? dp[z-1][q] : 1 - dp[z-1][q]) : 0;
					}
					x = max(x,w);
				}
				dp[j][k]=x;
			}
		}
		printf("%.4f\n",( m[0] ^ m[1] ? dp[n][0] : 1 - dp[n][0]));

	}
}