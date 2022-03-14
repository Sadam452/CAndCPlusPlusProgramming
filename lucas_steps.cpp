#include<stdio.h>
void lucas(int limit)
{
  int back2=2,back1=1,next;
  for(int i=0;i<limit;i++)
  {
  	next=back2+back1;
  	printf("%d,",next);
  	back2=back1;
  	back1=next;
  }	
}
int main()
{
	int limit;
	printf("How many terms do you want to print ?");
	scanf("%d",&limit);
	printf("The lucas series is: 2,1,");
	lucas(limit-2);
	return 0;
}
