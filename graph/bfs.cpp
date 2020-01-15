#include<bits/stdc++.h>
using namespace std;
#define NIL -1


void bfs(vector<vector<int>> adj,int n ,int start)
{
	int i;
	queue<int> q;
	vector<bool> used(n);
	vector<int> dist(n),par(n); //dist = distance & par = parent
	for(i=0;i<n;i++)
	{
		used[i] = false;
		par[i] = NIL;
	}
	q.push(start);
	used[start] = true;
	par[start] = NIL;
	dist[start] = 0;
	//enqueue operation
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		cout<<v<<" parent is "<<par[v]<<" distance is "<<dist[v]<<endl;
		for(int j: adj[v])
		{
			
			if(used[j] == false)
			{
			used[j] = true;
			q.push(j);
			par[j] = v;
			dist[j] = dist[v] +1;
			
			}
			
		}
		
	
	}	
	
}
int main()
{
	int i,m,n,edge,node;

	printf("please enter the no of edges and nodes\n");
	scanf("%d %d",&edge,&node);
	vector< vector<int> > adj(node*node);
	vector<int>::iterator it;
	for(i=0;i<edge;i++)
	{
		scanf("%d %d",&m,&n);
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	for(i=0;i<node;i++)
	{
		printf(" the content of %lld is   ",i);
		for(it = adj[i].begin();it != adj[i].end();it++)
			printf(" %lld  ",*it);
		printf("\n");
	}
	bfs(adj,node,2);
	
	return 0;
	
}
