#include<bits/stdc++.h>

using namespace std;

int main()
{
    int E;
    int a,b,i,s;
    vector<int>edge[10],cost[10];

    printf("Enter number of edges:");

    scanf("%d",&E);

    for(i=1;i<=E;i++)
    {
        printf("Enter edge %d :" ,i);
        scanf("%d%d",&a,&b);

        edge[a].push_back(b);
        edge[b].push_back(a);
        cost[a].push_back(1);
        cost[b].push_back(1);
    }
    s=edge[1].size();
    printf("Showing all nodes connected to node 1:\n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",edge[1][i]);
    }
    return 0;
}
