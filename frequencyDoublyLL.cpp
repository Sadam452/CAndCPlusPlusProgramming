//doubly ll frequency
//by sadam; 15 Nov 20
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
	int choice=1,val,x;
	printf("Enter 1 to create, 2 to display,3 for frequency,else exit\n:");
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
