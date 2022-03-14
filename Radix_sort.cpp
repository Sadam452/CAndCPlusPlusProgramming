#include<stdio.h>
int getMax(int a[],int n)
{
	int max_=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max_)
		max_=a[i];
	}
	return max_;
}
void countSort(int a[],int n,int pos)
{
	int count[10]={0};
	int b[n];
	int i=0;
	for(i=0;i<n;i++)
	{
	count[(a[i]/pos)%10]+=1;}
	for(i=1;i<=10;i++)
	{
	count[i]=count[i]+count[i-1];}
	for(i=n-1;i>=0;i--)
	{
	b[count[(a[i]/pos)%10]-=1]=a[i];}
	for(i=0;i<n;i++)
	{
	a[i]=b[i];}	
}
void radixSort(int a[],int n)
{
	int max=getMax(a,n);
	printf("k %d\t",max);
	int pos;
	for(pos=1;max/pos>0;pos*=10);
	{
		printf("loop");
	    countSort(a,n,pos);
    }
}
int main()
{
	int size=7,i,arr[size];
	printf("Enter array elements:\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	radixSort(arr,size);
	printf("sorted array is:\n");
	for(i=0;i<size;i++)
	printf("%d\n",arr[i]);
	return 0;
}
