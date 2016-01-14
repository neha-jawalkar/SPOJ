#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int neighbour;
	struct node *next = NULL;
}node;
node* adj[10001];
node* temp;
int visited[10001];
int main()
{
	int n,m,i,u,v,nodes_left;
	scanf("%d %d",&n,&m);
	if(m != n -1)
		printf("NO\n");
	nodes_left = n;
	for(i=0;i<10001;i++)
	{
		visited[i] = 1;
		adj[i] = NULL;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&u,&v);
		for(temp=adj[u];temp->next!=NULL;temp=temp->next);
		if(temp==NULL)
			temp = 
	}
}