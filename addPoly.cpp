//add two polynomials using LL
//By sadam ;15 Nov
#include<stdio.h>
#include<stdlib.h>
struct node{
   int coeff;
   int pow;
   struct node *next;
}*head=0,*newnode,*tail,*head2=0,*newnode2,*tail2,*tmp,*tmp2,*head3,*result,*tail3;
void createPoly1()
{
	int num;
	printf("How many nodes?");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter node coefficiant\n:");
scanf("%d",&newnode->coeff);
printf("enter node  power\n:");
scanf("%d",&newnode->pow);
newnode->next=0;
if(head==0)
head=tail=newnode;
else 
{
	tail->next=newnode;
	tail=newnode;
	}	
}
}
void createPoly2()
{
	int num;
	printf("How many nodes?");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
newnode2=(struct node *)malloc(sizeof(struct node));
printf("enter node coefficiant\n:");
scanf("%d",&newnode2->coeff);
printf("enter node  power\n:");
scanf("%d",&newnode2->pow);
newnode2->next=0;
if(head2==0)
head2=tail2=newnode2;
else 
{
	tail2->next=newnode2;
	tail2=newnode2;
	}	
}
}
void polyadd(){
	tmp=head;
	tmp2=head2;
   while(tmp->next && tmp2->next){
      if(tmp->pow > tmp2->pow){
      	result=(struct node *)malloc(sizeof(struct node));
         result->pow = tmp->pow;
         result->coeff = tmp->coeff;
         if(head3==0)
         tail3=head3=result;
         else{
         	tail3->next=result;
         	tail3=result;
		 }
         tmp = tmp->next;
      }
      else if(tmp->pow < tmp2->pow){
      	result=(struct node *)malloc(sizeof(struct node));
         result->pow = tmp2->pow;
         result->coeff = tmp2->coeff;
         if(head3==0)
         tail3=head3=result;
         else{
         	tail3->next=result;
         	tail3=result;
		 }
         tmp2 = tmp2->next;
      } else {
      	result=(struct node *)malloc(sizeof(struct node));
         result->pow = tmp->pow;
         result->coeff = tmp->coeff+tmp2->coeff;
         if(head3==0)
         tail3=head3=result;
         else{
         	tail3->next=result;
         	tail3=result;
		 }
         tmp = tmp->next;
         tmp2 = tmp2->next;
      }
      result= (struct node *)malloc(sizeof(struct node));
      result = result->next;
      result->next = NULL;
   }
   while(tmp->next || tmp2->next){
      if(tmp->next){
      	result=(struct node *)malloc(sizeof(struct node));
         result->pow = tmp->pow;
         result->coeff = tmp->coeff;
         if(head3==0)
         tail3=head3=result;
         else{
         	tail3->next=result;
         	tail3=result;
		 }
         tmp = tmp->next;
      }
      if(tmp2->next){
      	result=(struct node *)malloc(sizeof(struct node));
         result->pow = tmp2->pow;
         result->coeff = tmp2->coeff;
         if(head3==0)
         tail3=head3=result;
         else{
         	tail3->next=result;
         	tail3=result;
		 }
         tmp2 = tmp2->next;
      }
      result->next = (struct node *)malloc(sizeof(struct node));
      result = result->next;
      result->next = NULL;
   }
}
void display(){
	tmp=head3;
   while(tmp->next != NULL){
      printf("%dx^%d", tmp->coeff, tmp->pow);
      tmp = tmp->next;
      if(tmp->next != NULL)
         printf(" + ");
   }
}
int main(){
 int ch;
 printf("Enter 1 for create poly 1, 2 for polynomial 2, 3 to view result\n");
 while(1)
 {
 	printf("Your choice now?");
 	scanf("%d",&ch);
 	if(ch==1)
 	createPoly1();
 	else if(ch==2)
 	createPoly2();
 	else if(ch==3)
 	{
 		polyadd();
 	display();
    }
 	else
 	exit(1);
 }
   return 0;
}
