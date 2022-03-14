#include<stdio.h>
int main()
{
	int rows,i,j,term=1,space;
	printf("How many number of rows do u want in pascals triangle ?");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		printf("  ");
	    for(j=0;j<=i;j++)
	    {
	    	if(j==0 || i==0)
	    	term=1;
	    	else
	    	     term=term*(i-j+1)/j;
	    	printf("%4d",term);
		}
		printf("\n");
	}
	return 0;
}
