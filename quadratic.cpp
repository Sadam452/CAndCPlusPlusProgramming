#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float sol,d,sol2;
	printf("Enter the valye of a b c:?");
	scanf("%d%d%d",&a,&b,&c);
	d = (b*b - 4*a*c);
	if(d < 0)
	printf("Imaginary roots ");
	else
	{
		sol = (-b + sqrt(d))/2*a;
		sol2 = (-b - sqrt(d))/2*a;
	    printf("First solution = %f, second sol = %f",sol,sol2);
	}
	return 0;
}
