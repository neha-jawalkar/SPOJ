#include <iostream>
using namespace std;
int main()
{
	long long int t,m,n,c;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>c;
		n=0;
		for(int j=0;j<c;j++)
		{
			cin>>m;
			n=(n+m)%c;
		}
		if(n==0) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
	return 0;
} 