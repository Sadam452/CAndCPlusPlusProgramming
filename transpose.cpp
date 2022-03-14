#include<stdio.h>
int main()
{
	int m=3,n=3,matrix[20][20],i,j,matrix2[20][20];
	printf("Enter the value of m, n?");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the value of Matrix[%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			matrix2[j][i]=matrix[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
}
