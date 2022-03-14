//insertion & deletion at beginning, any position , and at end 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*tmp,*tmp1,*head=0;
int count=0;
void Add_Node()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:\n");
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
}
void INSERT_BEG()
{
	newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to be inserted:\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;	
}
void INSERT_POS()
{
	int pos=0;
    printf("Enter position:\n");
    scanf("%d",&pos);
	if(pos>count || pos<1)
	printf("Invalid position, try with valid one again:\n");
	else
	{
		int i=1;
		tmp=head;
	    newnode=(struct node *)malloc(sizeof(struct node));
	    printf("Enter node data:\n");
	    scanf("%d",&newnode->data);
	    while(i<pos)
		{
		   tmp=tmp->next;
		   i++;	
			}
			newnode->next=tmp->next;
			tmp->next=newnode;	
	}	
}
void INSERT_END()
{
	newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter node data:\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	tmp=head;
	while(tmp->next!=0)
	{
		tmp=tmp->next;
	}
	tmp->next=newnode;			
}
void SHOW()
{
tmp=head;
while(tmp!=0)
{
	printf("%d\n",tmp->data);
	tmp=tmp->next;
	count++;
}	
}
void Del_beg()
{
	tmp=head;
	head=tmp->next;
	free(tmp);
}
void Del_pos()
{
	int pos1=0;
    printf("Enter position to delete:\n");
	scanf("%d",&pos1);
	if(pos1>count)
	printf("Invalid position, try with valid one again:\n");
	else
	{
		int i=1;
		tmp=head;
	    while(i<pos1-1)
		{
		   tmp=tmp->next;
		   i++;	
			}
			tmp1=tmp->next;
			tmp->next=tmp1->next;
			free(tmp1);	
	}		
}
void Del_End()
{
	tmp=head;
	while(tmp->next!=0)
	{
		tmp1=tmp;
		tmp=tmp->next;
	}
	if(tmp==head)
	{
		head=0;
	}
	else
	{
	tmp1->next=0;
    }
	free(tmp);	
}
int main()
{
	int choice=1;
	while(1)
	{
		printf("Dear user enter 1 to add node------ 2 to insert node at begining----3 to insert"
		 "at any position----4 to insert at end------5 to display----6 to delete from beg---7 to" 
		 "delete at any pos---8 to del at end---9  to exit.\n");
	    scanf("%d",&choice);
	    if(choice==1)
	    {
	    	Add_Node();
		}
		else if(choice==2)
		{
			INSERT_BEG();
		}
		else if(choice==3)
		{
			INSERT_POS();
		}
		else if(choice==4)
		{
			INSERT_END();
		}
		else if(choice==5)
		{
			SHOW();
		}
		else if(choice==6)
		{
			Del_beg();
		}
		else if(choice==7)
		{
			Del_pos();
		}
		else if(choice==8)
		{
			Del_End();
		}
		else
		{
			exit(1);
		}
	}
	return 0;
}
