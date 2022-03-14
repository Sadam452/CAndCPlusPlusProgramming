//quick sort---divide and conqueror
#include<stdio.h>
int swap(int *a,int *b)
{
	int tmp=0;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end){
	while(a[start]<=pivot)
	{
		start++;
	}
	while(a[end]>pivot){
		end--;
}
    if(start<end){
	swap(&a[start],&a[end]);
	}
}
swap(&a[lb],&a[end]);
return end;
}
int quicksort(int a[],int lb,int ub)
{
	int loc=0;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
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
	int lb=0,ub=size-1;
	quicksort(arr,lb,ub);
	printf("Sorted array is:\n");
	for(j=0;j<size;j++)
	printf("%d\n",arr[j]);
	
}
