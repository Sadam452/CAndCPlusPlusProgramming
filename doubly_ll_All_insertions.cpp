//doubly ll insertion
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode=0,*head=0,*tail=0,*tmp=0;
void add()
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter node data\n:");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
head=tmp=newnode;
else 
{
	tmp->next=newnode;
	newnode->prev=tmp;
	tmp=tmp->next;
	}
	tail=tmp;	
}
void insert_beg()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode data:\n");
	scanf("%d",&newnode->data);
	head->prev=newnode;
	newnode->next=head;
	head=newnode;	
}
void insert_end()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode data:\n");
	scanf("%d",&newnode->data);
	tail->next=newnode;
	newnode->prev=tail;
	newnode->next=0;
	tail=newnode;
}
void insert_pos()
{
	int pos=0,i=0;
	printf("Enter position.\n");
	scanf("%d",&pos);
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter newnode data:\n");
	scanf("%d",&newnode->data);
	tmp=head;
	while(i<pos-1)
	{
	tmp=tmp->next;
	i++;	
	}
	newnode->prev=tmp;
	newnode->next=tmp->next;
	tmp->next=newnode;
	newnode->next->prev=newnode;
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
		printf("Enter 1 to have data, 2 to insert at beg, 3 to insert at end, 4 to insert at any"
		"5 to display, 6 to exit\n:");
		scanf("%d",&choice);
		if(choice==1)
		add();
		else if(choice==2)
		insert_beg();
		else if(choice==3)
		insert_end();
		else if(choice==4)
		insert_pos();
		else if(choice==5)
		display();
		else
		exit(1);
	}
	
return 0;
}
