//WAP TO REVERSE A STRING USING STACK
//BY SADAM ,15 NOV 2020
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define max 30
int stack[max];
int top=-1;
void push(char item)
{
	if(top==max-1)
	{
	printf("Overflow");
	getch();
    }
    else
    stack[++top]=item;
}
char pop()
{
	if(top==-1)
	{
		printf("Underflow");
		getch();
	}
	else
	return stack[top--];
}
char reverse(char str[])
{
	int len=strlen(str);
	int i=0;
	for(i=0;i<len;i++)
	{
		push(str[i]);
	}
	char tmp[max];
	for(i=0;i<len;i++)
	{
		char a=pop();
		tmp[i]=a;
	}
	for(i=0;i<len;i++)
	str[i]=tmp[i];   
}
int main()
{
	char str[max];
	printf("Enter streing to reverse!:");
	gets(str);
	reverse(str);
	printf("Reverse of given string is:\n");
	puts(str);
	return 0;
}
