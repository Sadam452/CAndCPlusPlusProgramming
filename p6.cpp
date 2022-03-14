#include<stdio.h>
#include<string.h>
char copy(char str1[],char str3[])
{
	int l=strlen(str1),i;
	for(i=0;i<l;i++) //strlen returns length of string
	str3[i]=str1[i];
	str3[i]='\0';
}
char concat(char str1[],char str2[])
{
	int l=strlen(str1);
	for(int i=0;i<strlen(str2);i++){ //strlen returns length of string
	str1[l]=str2[i];
	l++;}
}
int main()
{
char str1[50],str2[50],str3[100];
printf("Enter First String upto 50 chars :");
gets(str1);
printf("Enter Second String upto 50 chars :");
gets(str2);
copy(str1,str3); //copy operation
puts(str3);
concat(str1,str2); //concatenate str1 to str2
puts(str1);
return 0;
}

