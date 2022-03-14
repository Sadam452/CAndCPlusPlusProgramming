#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100
char stack[size];
int top=-1;
void push(char item)
{
	if(top>=size-1)
	{
		printf("\nSTACK OVERFLOW");
	}
	else
	{
		stack[++top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
	printf("STACK UNDER FLOW");
	getchar();
	exit(1);
	}
	else
	{
		return stack[top--];
	}
}
int operator_chk(char exm)
{
	if(exm=='^' || exm=='*' || exm=='/' || exm=='+' || exm=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int order(char opr)
{
	if(opr=='^')
	{
		return(3);
	}
	else if(opr=='*' || opr=='/')
	{
		return(2);
	}
	else if(opr=='+' || opr=='-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	
}
void reverse(char arr[size])
{
	int i,j=0;
	char tmp[size];
	for(i=strlen(arr)-1;i>=0;--i,++j) //i+1!=0
	{
		tmp[j]=arr[i];
	}
	for(i=0;i<=strlen(tmp);++i)
	{
		if(tmp[i]=='(')
		tmp[i]=')';
		else if(tmp[i]==')')
		tmp[i]='(';
	}
	tmp[j]='\0';
	strcpy(arr,tmp);
	}
void InfixToPrefix(char inf[],char post[])
{
	int i=0,j=0;
	char item,x;
	reverse(inf);
	push('(');
	strcat(inf,")");
	item=inf[i];
	while(item!='\0')
	{
		if(item=='(')
		{
			push(item);
		}
		else if(isdigit(item) || isalpha(item))
		{
			post[j]=item;
			j++;
		}
		else if(operator_chk(item)==1)
		{
			x=pop();
			while(operator_chk(x)==1 && order(item)<order(x))
			{
				post[j]=x;
				j++;
				x=pop();
			}
			push(x);
			push(item);
		}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				post[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{
			printf("\n Invalid infix expression\n");
			getchar();
			exit(1);
		}
		i++;
		item=inf[i];
	}
	if(top>0)
	{
		printf("\n Invalid infix exp");
		getchar();
		exit(1);
	}
	post[j]='\0';
	reverse(post);
	
}
int main()
{
	char infix[size],prefix[size];
	printf("ASSUMPTION: SINGLE LETTER AND SIMGLE DIGITS CHARACTERS ONLY:");
	printf("\nEnter infix expression:");
	gets(infix);
	InfixToPrefix(infix,prefix);
	printf("yeah! THIS IS YOUR PREFIX EXPRESSION :");
	puts(prefix);
	return 0;
}
