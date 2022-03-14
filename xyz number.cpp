#include<stdio.h>
#define size 100 //size equal to number of factors a number can have...can be increased if we want
int main()
{
	int num,i,j=0,list[size]={0};
	int flag =0;
	printf("Enter any number ?");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i == 0)
		list[j]=i; // this list will save all the factors
		j++;
	}
	for(i=0;i<j-1;i++)
	{
		for(int k=2;k<list[i];k++)
		if(list[i]%k == 0)
		{
			list[i] = -1;
		}	
	}
	for(i=0;i<j-1;i++)
	{
		if(list[i]>=2)
		{
			if( list[i] !=2)
			{
				if( list[i] !=3)
				{
					if( list[i] !=5)
					flag = -1;
				}
			}
		}
	}
	if(flag == -1)
	printf("%d is not XYZ number\n",num);
	else
	printf("%d is XYZ number\n",num);
	}
