#include <iostream>
#include <vector>
#include <set>
#define INF 2000000
using namespace std;

void dijkstra(vector<vector<pair<int,int> > >& g, int s,vector<int>& m)
{
    m[s]=0;
    set<pair<int,int> > a;
    a.insert({0,s});
    int c,d;
    while(!a.empty())
    {
        s=a.begin()->second;
        a.erase(a.begin());
        for(pair<int,int> e : g[s])
        {
            d = e.first;
            c = e.second;
            if(m[d] > m[s] + c)
            {
                a.erase({m[d],d});
                m[d] = m[s]+c;
                a.insert({m[d],d});
            }
        }
    }

}

int main()
{
    int n,a,b,w,u,q,v;
    vector<vector<pair<int,int> > > g(501);
    vector<int> m(501,INF);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>w;
        g[a].push_back(make_pair(b,w));
        g[b].push_back(make_pair(a,w));
    }
    cin>>u;
    dijkstra(g,u,m);
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>v;
        if(m[v]==INF) cout<<"NO PATH"<<endl; else cout<<m[v]<<endl;
    }
}