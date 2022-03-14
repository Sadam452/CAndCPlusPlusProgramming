//fibanocci series without recursion
#include<stdio.h>
void fibonacci(int l){
	int n1=0,n2=1,n3;
	printf("\n%d\t%d\t",n1,n2);
	for(int i=0;i<l;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}
int main(){
	int limit,num=1;
	printf("HOW MANY TERMS OF FIBANOCCI SERIES ?");
	scanf("%d",&limit);
	fibonacci(limit);
	return 0;
}
