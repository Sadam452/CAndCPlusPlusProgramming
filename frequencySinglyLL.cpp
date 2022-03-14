//program to find the frequency of an element in singly ll
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
int frequency(int x)
{
	tmp=head;
	int count=0;
	while(tmp!=0)
	{
		if(tmp->data==x)
		count++;
		tmp=tmp->next;
	}
	return count;
}
int main()
{
	int ch,val,x;
	printf("\nPlease Enter 1 for create, 2 for diplay,3 for frequency,else exit");
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
		   printf("Enter element to know its frequency!:");
		   scanf("%d",&x);
		   int f=frequency(x);
		   printf("Frequency of %d is %d\n",x,f);
	    }
		else
		exit(1);
	}
	return 0;
}
