#include<stdio.h>
#include<string.h>
void INSERTION(char s1[],char s2[],int ind)
{
	int i,j;
	int k=ind;
	for(i=0;i<strlen(s2);i++)
	{
		for(j=strlen(s1)+1;j>=k;j--)
		{
		s1[j]=s1[j-1];	
		}
	}
	for(i=0;i<strlen(s2);i++)
	{
		s1[k]=s2[i];
		k++;
	}
	printf("Insertion done successfully\n");
	puts(s1);
}
int main()
{
	char str1[100],str2[10];
	int index;
	printf("Enter string 1\n");
	gets(str1);
	printf("Enter string 2 which is to be inserted in s1\n");
	gets(str2);
	printf("Enter index\n");
	scanf("%d",&index);
	INSERTION(str1,str2,index);
	return 0;
}
