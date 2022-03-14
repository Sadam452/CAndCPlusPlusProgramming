//fibanocci series with recursion
//by sadam; 07/12/2020
#include<stdio.h>
void fibonacci(int l){
static int num1=0,num2=1,num3; //static to share common copy
if(l>0){
num3=num1+num2;
num1=num2;
num2=num3;
printf("%d\t",num3);
fibonacci(l-1);	}
}
int main(){
	int limit,num=1;
	printf("HOW MANY TERMS OF FIBANOCCI SERIES ?");
	scanf("%d",&limit);
	printf("0\t1\t");
	fibonacci(limit-2);  //because first two terms are 0 &1 which had already been printed!
	return 0;
}
