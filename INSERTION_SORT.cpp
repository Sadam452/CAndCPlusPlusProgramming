//insertion sort
#include<stdio.h>
int main()
{
	int size=10,arr[size],i=0,j=0,tmp=0;
	printf("Enter array elements , size=10\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("ENtered array is:\n");
	for(j=0;j<size;j++)
	printf("%d\n",arr[j]);
	for(i=1;i<size;i++)
	{
		tmp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>tmp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
	printf("Sorted array is:\n");
	for(j=0;j<size;j++)
	printf("%d\n",arr[j]);
	return 0;
}
