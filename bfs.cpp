#include<bits/stdc++.h>
using namespace std;

vector<int>G[100]; // maximum 100 nodes


void bfs(int n,int source)
{
	int distance[n+1];
	bool visited[n+1];

	for(int i=1;i<=n;i++)
	{
		visited[i]=false;
		distance[i]=-9999;
	}	
	queue<int>Q;
	distance[source]=0;
	visited[source]=true;

	Q.push(source);

	while(!Q.empty())
	{
		int a=Q.front();
		Q.pop();
		for(int i=0;i<G[a].size();i++)
		{
			int b=G[a][i];

			if(!visited[b])
			{
				visited[b]=true;
				distance[b]=distance[a]+1;
				Q.push(b);
			}
		}
	}

	printf("Showing all the shortest paths from your entered source:\n");
	for(int i=1;i<=n;i++)
	{
		printf("%d to %d = %d\n",source,i,distance[i]);
	}
}

int main()
{
	int nodes,edges,source;
	int a,b;
	vector<int>graph[100];
	printf("Enter the number of nodes:");
	scanf("%d",&nodes);
	printf("Enter the number of edges:");
	scanf("%d",&edges);
	printf("Enter edges:\n");
	for(int i=1;i<edges;i++)
	{
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);

	}

	printf("Enter source:");
	scanf("%d",&source);

	bfs(nodes,source);

		
	return 0;

}