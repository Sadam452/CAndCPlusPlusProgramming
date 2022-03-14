//doubly linked list creation
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode,*head=0,*tmp;
void create()
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
	printf("Enter 1 to insert data, 2 to display, 3 to exit\n");
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
