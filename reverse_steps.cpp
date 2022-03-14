#include<stdio.h>
int reverse(int num)
{
	int remainder,reverse_of_num=0,i=1;
	while(num>0)
	{
		remainder=num%10;
		reverse_of_num=reverse_of_num*10 + remainder;
		num=num/10;
	}
	return reverse_of_num;
}
int main()
{
	int num;
	printf("Enter any number?");
	scanf("%d",&num);
	printf("Reverse of %d is %d",num,reverse(num));
	return 0;
}
