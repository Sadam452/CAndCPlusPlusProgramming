#include<stdio.h>
int scan(int arr[],int size)
{
	printf("PLEASE ENTER THE ELEMENTS OF AN ARRAY:");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
}
int display(int arr[],int size)
{
	printf("YOUR ENTERED ARRAY IS:");
	for(int i=0;i<size;i++)
	printf("%d\n",arr[i]);
}
int min1(int arr[],int size)
{
	int minu;
	minu=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<minu)
		minu=arr[i];
	}
	return minu;
}
int main()
{
	int max=100;
	int arr[max],size,min;
	printf("PLEASE ENTER SIZE OF AN ARRAY:");
	scanf("%d",&size);
	scan(arr,size);
	display(arr,size);
	min=min1(arr,size);
	printf("SMALLEST ELEMENT IN GIVEN ARRAY IS %d",min);
	return 0;
	
}
