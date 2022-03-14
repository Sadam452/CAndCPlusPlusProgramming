#include<stdio.h>
#include<string.h>
void SUBSTRING(char example[],int in,int l)
{
	int i,j=0;
	char newStr[100];
	for(i=in;i<in+l;i++)
	{
	newStr[j]=example[i];
	j++; 
    }
printf("Here is the substring you were searching for...!\n");
puts(newStr);
	
}
int main()
{
	char str[100];
	int length,index;
	printf("Please enter any string, you want:\n");
	gets(str);
	printf("PLease enter the first index of substring:\n");
	scanf("%d",&index);
	printf("PLease enter the length of sub string:\n");
	scanf("%d",&length);
	SUBSTRING(str,index,length);
	return 0;
}
