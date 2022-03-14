#include<stdio.h>
int main()
{
 int size=10,arr[size],i,tmp;
 printf("Enter %d elemenmts odf an array:",size);
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
  printf("Enter any value to search?");
  scanf("%d",&tmp);
  for(i=0;i<size;i++)
  {
  	if(arr[i]==tmp)
  	{
  		printf("element found at index no %d",i);
  		break;
    }
  }
  if(i==10)
  printf("Element not fopund");
  return 0;	
}
