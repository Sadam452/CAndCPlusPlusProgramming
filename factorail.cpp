#include<stdio.h>
long fun(int a)
{
	if(a==0)
	return 1;
	else
	return (a*fun(a-1));
}
int main()
{
	int choice;
	printf("Dear user please enter the number to find its factorial! :");
	scanf("%d",&choice);
	long result=fun(choice);
	printf("factorial of %d is : %d",choice,result);
	return 0;
}

