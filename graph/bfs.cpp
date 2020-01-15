#include<bits/stdc++.h>
using namespace std;

//void bfs(vector<vector<long long int>> adj,long long int start);
int main()
{
	long long int i,j,k,m,n,edge,node;

	printf("please enter the no of edges and nodes\n");
	scanf("%lld %lld",&edge,&node);
	vector< vector<long long int> > adj(node*node);
	vector<long long int>::iterator it;
	for(i=0;i<edge;i++)
	{
		scanf("%lld %lld",&m,&n);
		adj[m].push_back(n);
		adj[n].push_back(m);
	}
	for(i=0;i<node;i++)
	{
		for(it = adj[i].begin();it != adj[i].end();it++)
			printf(" the content of %i is %lld ",i,*it);
		printf("\n");
	}
	return 0;
}
