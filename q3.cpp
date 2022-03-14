#include<stdio.h>
#define size 2
int main()
{
	int mat1[size][size],mat2[size][size],i,j,k=0,result[2*size][2*size]={0},l=0;
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	{
		printf("matrix1[%d][%d]",i,j);
		scanf("%d",&mat1[i][j]);
	}
	for(i=0;i<size;i++)
	for(j=0;j<size;j++)
	{
		printf("matrix2[%d][%d]",i,j);
		scanf("%d",&mat2[i][j]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		result[i][j]= mat1[i][j]*mat2[i][j];
	}
	for(j=0,k=size;j<size,k<2*size;j++,k++)
	{
		for(i=0,l=size;i<size,l<size;i++,l++)
		result[k][l]= mat1[i][j]*mat2[i][j];
	}
	for(i=0;i<size*2;i++)
	{
		for(j=0;j<size*2;j++)
		printf("\tresult[%d][%d]=%d",i,j,result[i][j]);
		printf("\n");
	}
}
