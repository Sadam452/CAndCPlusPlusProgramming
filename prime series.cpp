#include<stdio.h>
int main()
{
	int limit,i,j;
	int flag = 0;
	printf("Enter limit ?");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++)
	{
		flag = 0;
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		printf("%d\n",i);
	}
	return 0;
}
