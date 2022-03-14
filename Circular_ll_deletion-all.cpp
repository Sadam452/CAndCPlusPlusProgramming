//circular ll deletion
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*tail=0,*tmp;
int count=0;
void create()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(tail==0){
	tail=newnode;
	tail->next=newnode;
	count++;}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
		count++;
	}
}
void delete_beg(){
	if(tail==0)
	printf("nothing to delete:");
	else{
	tmp=tail->next;
    if(tmp->next==tmp)
	{tail=0;
	free(tmp);
	}
	else{
	tail->next=tmp->next;
	free(tmp);}
}
}
void delete_pos(){
	int pos=0,i=1;
	struct node *tmp1;
	printf("Position:");
	scanf("%d",&pos);
	if(pos<0 || pos>count)
	printf("Invalid position.");
	else if(pos==1)
	delete_beg();
	else{
	tmp=tail->next;
	while(i<pos-1){
		tmp=tmp->next;
		i++;	
	}
	tmp1=tmp->next;
	tmp->next=tmp1->next;
	free(tmp1);
}
}
void delete_end(){
	struct node *previous=0;
if(tail==0)
printf("Nothing to delete.");
else{
tmp=tail->next;
if(tmp->next==tmp)
{
	tail=0;
	free(tmp);
}
else{
	while(tmp->next!=tail->next)
	{
		previous=tmp;
		tmp=tmp->next;
	}
	previous->next=tail->next;
	tail=previous;
	free(tmp);
}
}
}
void display(){
	if(tail==0)
	printf("Empty linked list, nothing to print:");
	else{
		tmp=tail->next;
		do{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}while(tmp!=tail->next);
	}
}
int main()
{
	int choice=1;
	printf("choice:1 to add ,2 to display, 3 to delete at beg,4 to del at any pos,5 to delete at end,6 to exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		display();
		else if(choice==3)
		delete_beg();
		else if(choice==4)
		delete_pos();
		else if(choice==5)
		delete_end();
		else
		exit(1);
		
	}
	return 0;
}
