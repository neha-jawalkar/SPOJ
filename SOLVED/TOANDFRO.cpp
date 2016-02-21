#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int c,r;
	char s[201];
	for(cin>>c;c!=0;cin>>c)
	{
		cin>>s;
		r = strlen(s)/c;
		for(int i=1,m=0;i<=c;i++,m=0)
		{
			for(int j=1;j<=r;j++,m=(m+1)%2)
			{
				if(m) cout<<s[j*c - i];
				else cout<<s[(j-1)*c + i - 1];
			}
		}
		cout<<endl;
	}
	return 0;
}