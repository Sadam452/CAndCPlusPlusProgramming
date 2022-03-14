//heap sort //heapify method //2 nov 2020// 8:35 pm
#include<stdio.h>
#define max 7
void swap(int *a,int *b)
{
	int tmp=0;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void maxHeapify(int a[],int n,int i)
{
	int largest=i;
	int l=(2*i);
	int r=(2*i)+1;
	while(l<=n && a[l]>a[largest])
	{
		largest=l;
	}
	while(r<=n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		maxHeapify(a,n,largest);
	}
}
void heapsort(int a[],int n)
{
	int i=0;
	for(i=n/2;i>=1;i--)
	{
		maxHeapify(a,n,i);
	}
	for(i=n;i>=1;i--)
	{
		swap(&a[1],&a[i]);
		maxHeapify(a,i-1,1);
	}
}
int main()
{
	int arr[max];
	printf("Enter array elements:\n");
	for(int i=1;i<=max;i++)
	scanf("%d",&arr[i]);
	heapsort(arr,max);
	printf("sorted array is:\n");
	for(int i=1;i<=max;i++)
	printf("%d\n",arr[i]);
	return 0;
}
