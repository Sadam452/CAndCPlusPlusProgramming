//stack using ll
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
}*top=0,*newnode,*tmp;
void push(int x)
{
	newnode=(struct stack *)malloc(sizeof(struct stack));
	newnode->data=x;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==0)
	printf("Nothing to delete.");
	else{
	tmp=top;
	top=top->next;
	free(tmp);}
}
void peep()
{
	if(top==0)
	printf("Nothing to show.");
	else{
		printf("top element is: %d",top->data);
	}
}
void display()
{
	if(top==0)
	printf("Nothing to display.");
	else{
		tmp=top;
		while(tmp!=0){
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}
	}
}
int main()
{
	int ch=0,data=0;
	printf("choice: 1 for push,2 for peep,3 for pop,4 for display,5 for exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter data:");
			scanf("%d",&data);
		    push(data);
     	}
		else if(ch==2)
		peep();
		else if(ch==3)
		pop();
		else if(ch==4)
		display();
		else
		exit(1);
	}
	return 0;
}
