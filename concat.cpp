#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="You are requested to submit application form.";
	char s2[50]="sadam";
	strcat(s1,s2);
	puts(s1);
	printf("\n");
	puts(s2);
	char a=strcmp(s1,s2); //compare the two strings and return the matched part
	printf("%c",a);
	return 0;
} 
