#include<stdio.h>
int main()
{
	float cel=0,feh=0;
	int step,upper;
	printf("Enter the value of step , upper ?");
	scanf("%d%d",&step,&upper);
	while(feh<=upper)
	{
		cel = 5.0/9 * (feh - 32.0);
		printf("feheren=%f\tcelcius=%f\n",feh,cel);
		feh+=step;
	}
	return 0;
}
