#include<bits/stdc++.h>
using namespace std;


#define INF 1<<30

class node
{
	public:
	int u;
	int cost;

	node(int _u,int _cost)
	{
		u=_u;
		cost=_cost;
	}
	bool operator < (const node &p)const
	{
		return cost>p.cost;
	}
};

void dijsktra(int n,vector<int>G[],vector<int>cost[],int source)
{
	int distance[n+1];
	for(int i=1;i<=n;i++)
	{
		distance[i]=INF;
	}

	priority_queue<node>Q;
	Q.push(node(source,0));
	distance[source]=0;

	while(!Q.empty())
	{
		node top=Q.top();
		Q.pop();

		int a=top.u;

		for(int i=0;i<(int)G[a].size();i++)
		{
			int b=G[a][i];

			if(distance[a]+cost[a][i]<distance[b])
			{
				distance[b]=distance[a]+cost[a][i];
				Q.push(node(b,distance[b]));
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d to %d = %d\n",source,i,distance[i]);
	}
}

int main()
{
	vector<int>G[1000];
	vector<int>cost[1000];

	int nodes,edges;
	int a,b;
	int c;

	printf("Enter the number of nodes:");
	scanf("%d",&nodes);
	printf("Enter the number of edges:");
	scanf("%d",&edges);
	printf("Enter edges and cost:");
	for(int i=1;i<=edges;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		G[a].push_back(b);
		G[b].push_back(a);
		cost[a].push_back(c);
		cost[b].push_back(c);
	}
	printf("Enter source:");
	int source;
	scanf("%d",&source);

	dijsktra(nodes,G,cost,source);

	return 0;
}