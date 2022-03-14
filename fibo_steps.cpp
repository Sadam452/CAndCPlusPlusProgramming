#include<stdio.h>
static int count=0;
int fib(int n)
{
	if(n<=1)
	return n;
	else
	{
		count++;
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int n;
	printf("How many terms?");
	scanf("%d",&n);
	printf("%dth term of fibo series is %d\n",n,fib(n));
	printf("steps in recursive return is : %d\n",count);
	return 0;
}
