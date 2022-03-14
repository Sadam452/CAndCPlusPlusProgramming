#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,sum_alternate=0,sum1=0,total=0,credit_card_number[16],k=0,sum[8],sum3[8];
	printf("Please enter card number :");
	for(i=0;i<=15;i++)
	scanf("%d",&credit_card_number[i]);
	for(i=14;i>=0;i=i-2,k++)
	sum[k]=credit_card_number[i]*2;
	for(i=1,k=0;i<=15;i=i+2,k++)
	sum3[k]=credit_card_number[i];
	for(i=0;i<8;i++)
	sum_alternate+=sum3[i];
	for(i=0;i<8;i++)
	{
		if(sum[i]>=10)
		sum[i]=sum[i]-9;
	}
	for(i=0;i<8;i++)
	sum1+=sum[i];
	total = sum1 + sum_alternate;
	printf("sum=%d\nsum_alternate=%d\ntotal=%d\n",sum1,sum_alternate,total);
	if(total%10 == 0)
	printf("Credit Card Number is valid.\n");
	else
	printf("Credit Card Number is invalid.\n");
	return 0;
}
