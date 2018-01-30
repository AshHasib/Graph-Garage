#include<bits/stdc++.h>
using namespace std;


int main()
{
	int G[10][10];

	int N;
	scanf("%d",&N);
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			G[i][j]=0;
		}
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%d to %d - status:",i,j);
			scanf("%d",&G[i][j]);
		}	
	}
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%d to %d - status %d\n",i,j,G[i][j]);
		}	
	}

}