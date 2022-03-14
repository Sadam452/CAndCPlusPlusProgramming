//reverse a doubly ll
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *currentnode,*nextnode,*tail=0,*head=0,*tmp;
void create()
{
	currentnode=(struct node *)malloc(sizeof(struct node));
	printf("enter node data:");
	scanf("%d",&currentnode->data);
	currentnode->next=0;
	currentnode->prev=0;
	if(head==0)
	head=tmp=currentnode;
	else
	{
		tmp->next=currentnode;
		currentnode->prev=tmp;
		tmp=tmp->next;
	}
	tail=tmp;
}
void reverse()
{
	currentnode=head;
	while(currentnode!=0)
	{
		nextnode=currentnode->next;
		currentnode->next=currentnode->prev;
		currentnode->prev=nextnode;
		currentnode=nextnode;
	}
	currentnode=head;
	head=tail;
	tail=currentnode;
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
	int ch=1;
	printf("1 for add, 2 for reverse , 3 for display, 4 for exit:");
	while(1)
	{
		printf("choice :");
		scanf("%d",&ch);
		if(ch==1)
		create();
		else if(ch==2)
		reverse();
		else if(ch==3)
		display();
		else
		exit(1);
	}
	return 0;
}
