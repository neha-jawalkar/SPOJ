#include <iostream>
#include <queue>
#include <map>
using namespace std;
int m,n;
int image[250][250];
int visited[250][250];
int num_slicks;
queue<pair<int,int>> q;
map<int,int> l;
void bfs(int i, int j)
{
	num_slicks++;
	int size=0;
	q.push(make_pair(i,j));
	while(!q.empty())
	{
		i = q.front().first;
		j = q.front().second;
		q.pop();
		if(visited[i][j]) continue; else visited[i][j] = 1;
		if(image[i][j])
		{
			size++;
			if(i>0 && !visited[i-1][j]) q.push(make_pair(i-1,j));
			if(j<m-1 && !visited[i][j+1]) q.push(make_pair(i,j+1));
			if(i<n-1 && !visited[i+1][j]) q.push(make_pair(i+1,j));
			if(j>0 && !visited[i][j-1]) q.push(make_pair(i,j-1));
		}
	}
	l[size]++;
	return;
}
int main()
{
	while(cin>>m,cin>>n,m!=0)
	{
		num_slicks = 0;
		for(int i=0;i<m;++i) for(int j=0;j<n;++j) { cin>>image[i][j]; visited[i][j]=0;}
		for(int i=0;i<m;++i) for(int j=0;j<n;++j)
		{
			if(!visited[i][j])
			{
				if(image[i][j] == 1) bfs(i,j);
			}
			else visited[i][j] = 1;
		}
		cout<<num_slicks<<endl;
		for(map<int,int>::iterator i=l.begin();i!=l.end();++i) cout<<i->first<<' '<<i->second<<endl;
		l.clear();
	}
}