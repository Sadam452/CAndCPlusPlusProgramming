#include<stdio.h>
#include<windows.h>
int main()
{
	int m=3,n=3,p=3,matrix1[20][20],i,j,matrix2[20][20],k,matrix3[20][20];
	printf("Enter the value of m, n, p?");
	system("color B7");
	scanf("%d%d%d",&m,&n,&p);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the value of Matrix1[%d][%d]",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("Enter the value of Matrix2[%d][%d]",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			matrix3[i][j]=0;
			for(k=0;k<n;k++)
			matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		printf("%d\t",matrix3[i][j]);
		printf("\n");
	}
	return 0;
}
