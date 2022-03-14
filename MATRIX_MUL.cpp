#include<stdio.h>
int main()
{
	int a=4,b=4,c=4,i,j,k;
	int arr1[a][b],arr2[b][c],arr3[a][c];
	printf("Enter indices of matrix..a,b of arr1[a][b]....c for arr2[b][c]...\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("enter the elements of an array 1\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
	   scanf("%d",&arr1[i][j]);
	}
	printf("enter the elements of an array 2\n");
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&arr2[i][j]);
	}
	printf("Array 1 entered by you is\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
		printf("%d\t",arr1[i][j]);
    	}
    	printf("\n");
    }
    printf("Array 2 entered by you is\n");
    for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",arr2[i][j]);
    	}
    	printf("\n");
    }
	for(i=0;i<a;i++)
	{
		for(j=0;j<c;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<b;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("PRODUCT OF TWO ARRAYS IS:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d\t",arr3[i][j]);
    	}
    	printf("\n");
    }
	return 0;
}
