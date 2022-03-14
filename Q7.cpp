//insertion before or after a given node in a singly linked List
//Delete all instances of particular node from linked list
//By sadam; 16 Nov 20 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*tail,*tmp,*head=0;
void Add_Node()
{
	int i,num;
	printf("How any nodes?");
	scanf("%d",&num);
	for(i=0;i<num;i++){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}}
}
void INSERT()
{
	int Item=0,ch;
	struct node *prev;
	newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to be inserted:\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    printf("Do you want to insert before or after the given node(0 for before, 1 for after:?");
		scanf("%d",&ch);    //choice to insert before or after
		if(ch==0){
			printf("\nEnter Node before which U want to Insert : ");
		    scanf("%d",&Item);
		    tmp=head;
		    while(tmp->data!=Item){
		    	prev=tmp;    //to hold address of node before matching node
		        tmp=tmp->next;}
		    newnode->next=tmp;
		    prev->next=newnode;
		    
		}
		else if(ch==1){
		printf("\nEnter Node after which U want to Insert : ");
		scanf("%d",&Item);
		tmp=head;
		while(tmp->data!=Item)
		tmp=tmp->next; //to find node with given data
		newnode->next=tmp->next;
		tmp->next=newnode;	
		}		
}
void SHOW()
{
tmp=head;
while(tmp!=0)
{
	printf("%d\n",tmp->data);
	tmp=tmp->next;
}	
}
void DELETE(int Item)
{
	struct node *tmp1;
	tmp=head;
	if(head->data==Item) //if head is to be deleted
	{
		tmp1=head;
		head=head->next;
		free(tmp1);
	}
	else
	{
		//struct node *a; 
	    while(tmp->next->data!=Item){
	        tmp=tmp->next;}
			tmp1=tmp->next;
			tmp->next=tmp->next->next;
			if(tmp->next==0) //if node deleted is last node, update tail
			tail=tmp;
			free(tmp1);	
	}		
}
int main()
{
	int choice=1,Item;
	while(1)
	{
		printf("Dear user enter 1 to add node//2 to insert node//3 to display"
		"4 to delete,5  to exit?");
	    scanf("%d",&choice);
	    if(choice==1)
	    {
	    	Add_Node();
		}
		else if(choice==2)
		{
			INSERT();
		}
		else if(choice==3)
		{
			SHOW();
		}
		else if(choice==4)
		{
			printf("Enter node to delete :");
	        scanf("%d",&Item);
		    DELETE(Item);
		    tmp=head;
	while(tmp!=0)  //while loop to delete all instances of given node
	{
		if(tmp->data==Item)
		{
	    	DELETE(Item);
	    }
	    tmp=tmp->next;
		}
		}
		else if(choice==5)
		{
			SHOW();
		}
		else
		{
			exit(1);
		}
	}
	return 0;
}
