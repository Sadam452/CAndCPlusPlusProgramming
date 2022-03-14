//delete from doubly ll
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode,*tmp,*head=0,*tail=0;
void add()
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
	tail=tmp;	
}
void del_beg()
{
	tmp=head;
	head=head->next;
	head->prev=0;
	free(tmp);
}
void del_pos()
{
	int pos=0,i=1;
	printf("Enter position: ");
	scanf("%d",&pos);
	tmp=head;
	while(i<pos)
	{
	tmp=tmp->next;
	i++;	
	}
	tmp->prev->next=tmp->next;
	tmp->next->prev=tmp->prev;
	free(tmp);	
}
void del_end()
{
	tmp=tail;
	tail->prev->next=0;
	tail=tail->prev;
	free(tmp);	
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
	int ch=1;
	printf("Enter 1 to add, 2 to display, 3 to delete at beg, 4 to delete at any pos"
	", 5 to delete at end, 6 to exit.\n");
	while(1)
	{
		printf("Choice: ");
		scanf("%d",&ch);
		if(ch==1)
		add();
		else if(ch==2)
		display();
		else if(ch==3)
		del_beg();
		else if(ch==4)
		del_pos();
		else if(ch==5)
		del_end();
		else
		exit(1);
		
	}
	return 0;
}
