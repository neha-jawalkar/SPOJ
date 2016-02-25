#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
int main()
{
	int n,m,u,v,num_sets;
	cin>>n>>m;
	num_sets = n;
	map<int,map<int,int>> graph;
	map<int,int> visited;
	for(int i=0;i<m;++i)
	{
		cin>>u>>v;
		graph[u][v] = 1;
		graph[v][u] = 1;
	}
	queue<int> q;
	for(auto i = graph.begin(); i != graph.end();i = graph.begin())
	{
		v = i->first;
		q.push(v);
		while(!q.empty())
		{
			v = q.front();
			q.pop();
			if(visited.count(v)) continue;
			visited[v] = 1;
			--num_sets;
			if(graph.count(v))
			{
				for(auto j=graph[v].begin();j!=graph[v].end();++j)
				{
					if(visited.count(j->first)) continue;
					q.push(j->first);
					graph[j->first].erase(v);
					if(!graph[j->first].size()) graph.erase(j->first);
				}
				graph.erase(v);
			}
		}
		visited.clear();
		++num_sets;
	}
	cout<<num_sets<<endl;
	return 0;
}