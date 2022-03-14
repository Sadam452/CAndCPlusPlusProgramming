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
void create()
{
	int num;
	printf("Hw many nodes?");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter node data\n:");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
head=tail=newnode;
else 
{
	tail->next=newnode;
	newnode->prev=tail;
	tail=newnode;
	}	
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
int min()
{
	tmp=head;
	int min_element=tmp->data;
	while(tmp!=0)
	{
		if(tmp->data<min_element)
		min_element=tmp->data;
		tmp=tmp->next;
	}
	return min_element;
}
int max()
{
	tmp=head;
	int max_element=tmp->data;
	while(tmp!=0)
	{
		if(tmp->data>max_element)
		max_element=tmp->data;
		tmp=tmp->next;
	}
	return max_element;
}
int main()
{
	int choice=1,val;
	printf("Enter 1 to create, 2 to display,3 for min,4 for max,else exit\n:");
	while(1)
	{
		printf("Your choice is?:");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else if(choice==3)
		{
		val=min();
		printf("Minimum/Smallest Element in Linked List is: %d\n",val);	
		}
		else if(choice==4)
		{
		val=max();
		printf("Maximum/Biggest Element in Linked List is: %d\n",val);	
		}
		else
		exit(1);
	}
	
return 0;
}
