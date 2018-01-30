#include<bits/stdc++.h>
using namespace std;

vector<int>G[100]; // max 100 nodes

int main()
{
	int nodes,edges;
	int a,b;

	printf("Enter the number of nodes:");
	scanf("%d",&nodes);
	printf("Enter the number of edges:");
	scanf("%d",&edges);

	for(int i=0;i<edges;i++)
	{
		printf("Enter edge number %d : ",i+1);
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
	}

	printf("Showing the graph :\n");
	for(int i=0;i<edges;i++)
	{
		printf("No %d : ",i);
		for(int j=0;j<G[i].size();j++)
		{
			cout<<G[i][j]<<"\t";
		}
		printf("\n");
	}
	return 0;
}