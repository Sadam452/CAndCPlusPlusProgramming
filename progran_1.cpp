#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
  char str[size];
  int i,count=0,length;
  printf("Enter any string(MAx size 100) ?");
  gets(str);
  length = strlen(str);
  for(i=0;i<length;i++)
	if(str[i] ==' ')
	  count++;
  printf("Number of spaces in Given string are : %d",count);
  return 0;
}
