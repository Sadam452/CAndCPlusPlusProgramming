#include<stdio.h>
#include<windows.h>
int count=0;
void TowerOfHanio(int n,int x,int y,int z)
{
	if(n>=1)
	{
		TowerOfHanio(n-1,x,z,y);
		printf("Moving top disc from tower %d to tower %d\n",x,y);
		count++;
		TowerOfHanio(n-1,z,y,x);
	}
}
int main()
{
	int n,x,y,z;
	system("color E3");
	printf("Enter the no of discs on tower x: ?");
	scanf("%d",&n);
	printf("Value of X,Y,Z ?");
	scanf("%d%d%d",&x,&y,&z);
	TowerOfHanio(n,x,y,z);
	printf("Hey it took %d moves to move all discs from tower 1 to tower 2",count);
	return 0;
}
