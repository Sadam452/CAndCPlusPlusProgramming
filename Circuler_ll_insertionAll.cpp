//circular ll insertion
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*tail=0,*tmp=0 ;
int count=0;
void create()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0)
	{
	tail=newnode;
	tail->next=newnode;
	count++;
    }
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
		count++;
	}
}
void insert_beg()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0)
	{
	tail=newnode;
	tail->next=newnode;
    }
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
	}
}
void insert_end()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0)
	{
		tail=newnode;
		tail->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
	}
}
void insert_pos()
{
	int pos=0,i=1;
	printf("Enter position:");
	scanf("%d",&pos);
	if(pos<0 || pos>count)
	printf("invalid position.");
	else{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	tmp=tail->next;
	while(i<pos-1)
	{
		tmp=tmp->next;
		i++;
	}
	newnode->next=tmp->next;
	tmp->next=newnode;
}
}
void display()
{
	if(tail==0)
	printf("Empty linked list.");
	else{
	tmp=tail->next;
	while(tmp->next!=tail->next) //using while loop
	//do                       //using do while loop
	{
		printf("%d\n",tmp->data);
		tmp=tmp->next;
	}//while(tmp!=tail->next);
	printf("%d\n",tmp->data);
	}
}
int main()
{
	int choice=1;
	printf("choice: 1 for add , 2 for display, 3 for insert at beg,4 for insert"
	" at any pos, 5 to insert at end ,6 for exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else if(choice==3)
		insert_beg();
		else if(choice==4)
		insert_pos();
		else if(choice==5)
		insert_end();
		else
		exit(1);
	}
	return 0;
}

