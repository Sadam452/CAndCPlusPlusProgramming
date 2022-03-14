#include<stdio.h>
#include<string.h>
#include<stdio.h>
char INSERTION(char str[],int i,int len)
{
	int j,k;
	k=i;
	for(int b=0;b<len;b++)
{
	for(int z=k;z<strlen(str);z++)
		str[z]=str[z+1];
	}
}
int main()
{
	char str[100],sub[100];
	int ind,length;
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the index of main string at which to delete & length\n");
	scanf("%d%d",&ind,&length);
	INSERTION(str,ind,length);
	printf("Updated string is:\n");
	puts(str);
	return 0;	
}
