#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	int choice=1,count=0;
	struct node *newnode,*head=0,*tmp;
	while(choice)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to insert in node:\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
	head=tmp=newnode;	
	}
	else
	{
	tmp->next=newnode;
	tmp=newnode;	
	}
	printf("Do you want to Enter another element(1/0)\n");
	scanf("%d",&choice);	
	}
	tmp=head;
	while(tmp!=0)
	{
		printf("%d\n",tmp->data);
		tmp=tmp->next;
		count++;
	}
	printf("Number of nodes are:\n%d",count);
	
	return 0;
}
