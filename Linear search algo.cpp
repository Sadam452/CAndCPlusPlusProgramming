//Linear Search Algo
#include<stdio.h>
int main()
{
    int size=10,arr[size],i,check,flag=0,tmp=0;
	//printf("Dear user please enter the size of an array\n");
	//scanf("%d",&size);
	printf("Dear user enter the elements of an array:\n");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("Dear user please enter the elemnet u want to locate in an array\n");
	scanf("%d",&check);
	for(i=0;i<size;i++)
	{
		if(check==arr[i])
		{
			flag=1;
			tmp=i;
			break;
		}
	}
	
		if(flag==0)
		printf("Sorry! No match found.");
		else if(flag==1)
		printf("Wow %d has been found at %d th index of given array! cheers.",check,tmp);
		return 0;	
}
