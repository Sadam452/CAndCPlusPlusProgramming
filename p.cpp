#include<stdio.h>
#include<math.h>
int main()
{
	int num,digits=0,tmp,tmp1,remainder,one,sum=0;
	printf("Enter the number ?");
	scanf("%d",&num);
	tmp1=tmp=num;
	while(tmp>0)
	{
		digits++;
		tmp=tmp/10;
	}
	while(tmp1>0)
	{
		remainder=tmp1%10;
		one=pow(remainder,digits);
		sum=+one;
		tmp1/=10;
	}
	if(sum==num)
	printf("Given number %d is an armstrong number.",num);
	else
	printf("Try with some different  number.");
	return 0;	
}
