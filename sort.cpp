#include<stdio.h>
int main()
{
	int size=7,arr[size],i=0,j,tmp;
	printf("enter array elements\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		if(arr[i]>arr[j])
		{
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
		}
	}
	printf("sorted array is:");
	for(i=0;i<size;i++)
	printf("%d\n",arr[i]);
}
