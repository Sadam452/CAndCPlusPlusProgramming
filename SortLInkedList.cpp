//wap to sort a singly LL
//By sadam; 15 Nov 20
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=0,*tail,*newnode,*tmp,*tmp1;
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
void sort()
{
	tmp=head;
	int x;
	for(tmp=head;tmp!=0;tmp=tmp->next)
	{
		for(tmp1=tmp->next;tmp1!=0;tmp1=tmp1->next)
		if(tmp->data>tmp1->data)
		{
			x=tmp->data;
			tmp->data=tmp1->data;
			tmp1->data=x;
		}
	}
}
int main()
{
	int ch,val;
	printf("\nPlease Enter 1 for create, 2 for diplay,3 for sort, else exit");
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
		  sort();
	    }
		else
		exit(1);
	}
	return 0;
}
