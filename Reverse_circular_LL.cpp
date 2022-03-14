#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*tail=0,*newnode,*tmp=0;
int count=0;
void create()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0){
	tail=newnode;
	tail->next=newnode;
	count++;}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
		count++;
	}
}
void reverse(){
	 struct node *tmp1=0,*nextnode=0;
	 if(tail==0)
	 printf("Nothing to revrse.");
	 else{
	 tmp=tail->next;
	 nextnode=tmp->next;
	 	while(tmp!=tail)
	 	{
	 		tmp1=tmp;
	 		tmp=nextnode;
	 		nextnode=tmp->next;
	 		tmp->next=tmp1;
		 }
		 nextnode->next=tail;
		 tail=nextnode;
}
}
void display(){
	if(tail==0)
	printf("Empty linked list, nothing to print:");
	else{
		tmp=tail->next;
		do{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}while(tmp!=tail->next);
	}
}
int main()
{
	int choice=1;
	printf("choice:1 to add ,2 to display, 3 to reverse,6 to exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else if(choice==3)
		reverse();
		else
		exit(1);
		
	}
	return 0;
}

