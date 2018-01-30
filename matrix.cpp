#include<bits/stdc++.h>
using namespace std;


int G[10][10];

//maximum 10 nodes

int main()
{
    memset(G,0,G[0][0]*10*10);
    int a,b;
    int E;
    int i,j,num;
    printf("Enter the number of nodes:");
    scanf("%d",&num);
    printf("Enter the number of edges:");
    scanf("%d",&E);
    for(i=1;i<=E;i++)
    {
        printf("Enter edge %d : ",i);
        scanf("%d%d",&a,&b);
        G[a][b]=1;
    }
    printf("Showing the matrix :\n");

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf("%d\t",G[i][j]);
        }
        printf("\n");
    }
    return 0;
}
