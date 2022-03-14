#include<stdio.h>
#include<string.h>
#include<stdio.h>
char INSERTION(char str[],int i,char sub[])
{
	int j,k;
	k=i;
	for(int b=0;b<strlen(sub);b++)
	{
	for(int a=strlen(str)+1;a>=k;a--)
		str[a]=str[a-1];
	}
	for(j=0;j<strlen(sub);j++,k++)
	str[k]=sub[j];
}
int main()
{
	char str[100],sub[100];
	int ind;
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the sub string to insert\n");
	gets(sub);
	printf("Enter the index of main string at which to insert\n");
	scanf("%d",&ind);
	INSERTION(str,ind,sub);
	printf("Updated string is:\n");
	puts(str);
	return 0;	
}
