#include<stdio.h>
#include<string.h>
#define size 10
void pallindrome(char str[])
{
	char temp[size];
	int len=strlen(str),j=0;
	for(int i=len-1;i>=0;i--){
	temp[j] = str[i];
	j++;}
	temp[j]='\0';
	puts(str);
	puts(temp);
	if(strcmp(str,temp)==0)
	printf("Yes pallindrome");
	else
	printf("Better luck next time");
}
int main()
{
	char str[size];
	printf("Enter any word ?");
	gets(str);
	pallindrome(str);
    return 0;
}
