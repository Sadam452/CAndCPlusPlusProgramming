#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*tmp,*newnode;
void insert()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter node data:\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=tmp=newnode;
	}
	else
	{
		tmp->next=newnode;
		tmp=tmp->next;
	}
}
void reverse()
{
	struct node *nextnode,*prevnode=0;
	newnode=nextnode=head;
	while(nextnode!=0)
	{
		nextnode=nextnode->next;
		newnode->next=prevnode;
		prevnode=newnode;
		newnode=nextnode;
	}
	head=prevnode;
}
void display()
{
	tmp=head;
	while(tmp!=0)
	{
		printf("%d\n",tmp->data);
		tmp=tmp->next;
	}
}
int main()
{
	int choice=1;
	while(1)
	{
		printf("Enter 1 for insert, 2 for reverse, 3 for display,4 to exit\n");
		scanf("%d",&choice);
		if(choice==1)
		insert();
		else if(choice==2)
		reverse();
		else if(choice==3)
		display();
		else
		exit(1);
	}
	return 0;
}
