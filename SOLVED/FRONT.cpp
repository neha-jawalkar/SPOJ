#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,x,y;
	vector<pair<int,int>> stack;
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d %d",&x,&y);
		if(i > 0) while(!stack.empty() && stack.back().second <= y) stack.pop_back();	
		if(stack.empty() || (stack.back().first < x &&  stack.back().second > y)) stack.push_back(make_pair(x,y));		
	}
	cout<<stack.size()<<endl;
}