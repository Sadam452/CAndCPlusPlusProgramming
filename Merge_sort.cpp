//Merge sort
#include<stdio.h>
#include<conio.h>
#define max 10
void merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	int b[max];
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	for(k=lb;k<=ub;k++)
	a[k]=b[k];
}}
void mergeSort(int a[],int lb,int ub)
{
	int mid=0;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main()
{
	int arr[max];
	printf("Enter array elements:\n");
	for(int i=0;i<max;i++)
	scanf("%d",&arr[i]);
	mergeSort(arr,0,max-1);
	getch();
	printf("sorted array is:\n");
	for(int i=0;i<max;i++)
	printf("%d\n",arr[i]);
	return 0;
}
