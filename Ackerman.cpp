#include<stdio.h>
int ackerman(int m,int n)
{
	if(m==0)
	return n+1;
	else if(n==0)
	ackerman(m-1,1);
	else
	ackerman(m-1,ackerman(m,n-1));
}
int main()
{
	int m,n;
	printf("Hey, please enter the value of *m* & *n* :");
	scanf("%d%d",&m,&n);
	int result=ackerman(m,n);
	printf("Result = %d",result);
	return 0;
}
