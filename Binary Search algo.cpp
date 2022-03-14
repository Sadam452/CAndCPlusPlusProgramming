//Binary Search algo
#include<stdio.h>
int main()
{
int max=10;
int arr[max],first,last,mid,item,loc=0;
printf("Dear user enter the array elements\n");
for(int i=0;i<max;i++)
scanf("%d",&arr[i]);
printf("Enter the element to search...\n");
scanf("%d",&item);
first=0;
last=max-1;
mid=int ((first+last)/2);	
while(first<=last && arr[mid]!=item)
{
	if(item<arr[mid])
	last=mid-1;
	else
	first=mid+1;
	mid=int ((first+last)/2); 
}
if(arr[mid]==item)
{
loc=mid;
printf("Given element has been found in array at index no %d:\n",loc);
}
else
{
loc=NULL;
printf("Given element has no match in array , enter another choice..!\n");
}
return 0;
}
