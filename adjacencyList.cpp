#include<bits/stdc++.h>
using namespace std;
//undirected graph

//maximum 10 nodes
int main ()
{
	int a,b,i,j,num;
	int E;
	vector<int>G[10];
	vector<int>cost[10];
	printf("Enter the number of edges:");
	scanf("%d",&E);

	for(i=0;i<E;i++)
	{
		printf("Enter edge no %d :",i+1);
		scanf("%d%d",&a,&b);

		G[a].push_back(b);
		G[b].push_back(a);
		cost[a].push_back(1);
		cost[b].push_back(1);
	}
	printf("Printing adjacency status of all nodes:");

	for(i=0;i<E;i++)
	{
		printf("Node %d\n",i+1);
		for(j=0;j<G[i].size();j++)
		{
			printf("%d\n",G[i][j]);
		}
		printf("\n");
	}
	return 0;
}