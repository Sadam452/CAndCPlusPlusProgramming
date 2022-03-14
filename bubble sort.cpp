//Bubble sort Program
#include<stdio.h>
int main()
{
	int size,arr[size],i,tmp=0;
	printf("Dear user please enter the size of an array\n");
	scanf("%d",&size);
	printf("Dear user enter the elements of an array to arrange in ascending order:\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(int j=size-1;j>0;j--)
	{
		for(int k=0;k<j;k++)
		{
		if(arr[k]>arr[k+1])
		{
			tmp=arr[k];
			arr[k]=arr[k+1];
			arr[k+1]=tmp;
		}
     	}
	}
	printf("ARRAY IN ASCENDING ORDER IS:\n");
	for(i=0;i<size;i++)
	printf("%d\n",arr[i]);
	return 0;
}
