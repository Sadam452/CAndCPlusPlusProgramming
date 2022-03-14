#include<stdio.h>
//shell sort
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void shellSort(int a[],int n)
{
	int i,j,k,gap;
	for(gap=n/2;gap>=1;gap/=2)
	{
		for(j=gap;j<n;j++)
		{
			for(i=j-gap;i>=0;i=i-gap)
			{
				if(a[i+gap]>a[i])
				{
					break;
				}
				else
				{
					swap(&a[i+gap],&a[i]);
				}
			}
		}
	}
}
int main()
{
	int size=9,i;
	int arr[size];
	printf("enter array elements:");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	shellSort(arr,size);
	printf("sorted array:\n");
	for(i=0;i<size;i++)
	printf("%d\n",arr[i]);
	return 0;
}
