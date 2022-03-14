//selectio sort
#include<stdio.h>
int swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
	int size=10,arr[size],i=0,j=0,min=0;
	printf("Enter array elements , size=10\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("Entered array is:\n");
	for(j=0;j<size;j++)
	printf("%d\n",arr[j]);
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		if(min!=i)
		swap(&arr[i],&arr[min]);
	}
	printf("Sorted array is:\n");
	for(j=0;j<size;j++)
	printf("%d\n",arr[j]);
	return 0;
}
