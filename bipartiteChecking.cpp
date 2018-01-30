#include<bits/stdc++.h>
using namespace std;

vector<int>G[100];


bool bfs(int n,int source)
{
	bool visited[n+1],color[n+1];
	for(int i=1;i<=n;i++)
	{
		visited[i]=false;
		color[i]=false;
	}
	queue<int>Q;
	Q.push(source);
	color[source]=true;
	visited[source]=true;

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
				color[b]=!color[a]; //color the opposite of its predecessor
				Q.push(b);
			}
			else if(color[a]==color[b]) // if the adjacent nodes are colored
			{
				return false;
			}
		}
	}
	return true;
}	

int main()
{
	int nodes,edges,a,b;
	printf("Enter the number of nodes:");
	scanf("%d",&nodes);
	printf("Enter the number of edges:");
	scanf("%d",&edges);

	printf("Enter edges:\n");
	for(int i=1;i<=edges;i++)
	{
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	bool flag= bfs( nodes,1);

	if(flag==true)
	{
		printf("The graph is bicolorable\n");
	}
	else
	{
		printf("The graph is not bicolorable\n");
	}
	return 0;
}