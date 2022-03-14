#include<stdio.h>
#include<string.h>
void con(char str[],char str2[])
{
	int k=strlen(str);
	for(int i=0;i<strlen(str2);i++)
	{
		str[k]=str2[i];
		k++;
	}
	str[k]='\0';
	puts(str);
}
int main()
{
	char str[100],str2[100];
	printf("Please enter first and secound string:\n");
	gets(str);
	gets(str2);
	con(str,str2);
	return 0;
	
}
