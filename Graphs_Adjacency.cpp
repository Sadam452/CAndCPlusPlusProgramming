//graph representation by adjacency matrix;
#include<stdio.h>
#include<conio.h>
int AdjMatrix(int v,int e)
{
	int from,to,A[v+1][v+1]={0},i,j;
	for(i=1;i<=e;i++)
	{
	printf("Enter from:");
	scanf("%d",&from);
	printf("Enter to:");
	scanf("%d",&to);
	A[from][to]=1;
	A[to][from]=1;
    }
    for(i=1;i<=v;i++)
    {
    	for(j=1;j<=v;j++)
    	printf("%d\t",A[i][j]);
    	printf("\n");
	}
}
int main()
{
	int edges,vertices;
	printf("Enter number of edges, vertices: ");
	scanf("%d%d",&edges,&vertices);
	AdjMatrix(vertices,edges);
	return 0;	
}
