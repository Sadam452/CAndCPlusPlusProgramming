#include<stdio.h>
#include<stdlib.h>
int power(int x,int i){
	int power_ = 1;
	for(int j=1;j<=i;j++)
	power_ *= x;
	return power_;
}
int fact(int i){
	int fact_ = 1;
	for(int j=1;j<=i;j++)
	fact_ *= j;
	return fact_;	
}
void area(int x,int y){
	float area_ = 0.5*x*y;
	printf("Area of Right Triangle is %f\n",area_);
}
void sum(int x,int y){
	float sum_ = 1.0; //Sum of first term
	for(int i=1;i<y;i++){ //calculating sum of remaining y-1 terms
		sum_ += (float)power(x,i)/fact(i);
	}
	printf("Sum of given series is :%f\n",sum_);
}
void combinations(){
	float result = fact(8)/(fact(7)*fact(8-7));
	printf("8C7 = %f\n",result);
}
int main(){
	int choice,x,y;
	while(1){
		printf("1. Find Area of Right Triangle\n2. Find sum of Series\n3. Find Combinations\n"
		"4. Exit");
		scanf("%d",&choice);
		printf("Enter value of x :");
		scanf("%d",&x);
		printf("Enter value of y :");
		scanf("%d",&y);
		if(choice == 1)
		area(x,y);
		else if(choice == 2)
		sum(x,y);
		else if(choice == 3)
		combinations();
		else if(choice == 4)
		exit(1);
		else
		printf("Please enter correct option from given menu");
		}
	}
