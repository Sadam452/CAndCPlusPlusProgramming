//circular ll implementation
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*head=0,*tmp;
void create()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=tmp=newnode;
	else
	{
		//newnode->next=tmp->next; for maintaining tail pointer only
		tmp->next=newnode;
		tmp=tmp->next;
	}
	tmp->next=head;
}
void display()
{
	if(head==0)
	printf("Empty linked list.");
	else{
	tmp=head;
	//while(tmp->next!=head) //using while loop
	do                       //using do while loop
	{
		printf("%d\n",tmp->data);
		tmp=tmp->next;
	}while(tmp!=head);
	//printf("%d\n",tmp->data);
	}
}
int main()
{
	int choice=1;
	printf("choice: 1 for inset , 2 for display, 3 for exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else
		exit(1);
	}
	return 0;
}
