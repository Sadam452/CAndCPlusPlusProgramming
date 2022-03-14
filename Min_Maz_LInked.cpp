//wap to find biggest & smallest element in a singly LL
//By sadam; 15 Nov 20
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=0,*tail,*newnode,*tmp;
void create()
{
	int num,i;
	printf("How many nodes?");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter node data:");
		scanf("%d",&newnode->data);
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
	int ch,val;
	printf("\nPlease Enter 1 for create, 2 for diplay,3 for min element"
	", 4 for max element, else exit");
	while(1)
	{
		printf("\nYour choice is?");
		scanf("%d",&ch);
		if(ch==1)
		create();
		else if(ch==2)
		display();
		else if(ch==3)
		{
		val=min();
		printf("Minimum/Smallest Element in Linked List is: %d",val);
	    }
		else if(ch==4)
		{
		val=max();
		printf("Maximum/Biggest Element in Linked List is: %d",val);
	    }
		else
		exit(1);
	}
	return 0;
}
