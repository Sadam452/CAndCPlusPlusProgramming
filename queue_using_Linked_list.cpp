//queue using ll
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
}*front=0,*rear=0,*tmp=0,*newnode=0;
void enqueue(int x)
{
	newnode=(struct queue *)malloc(sizeof(struct queue));
	newnode->data=x;
	newnode->next=0;
	if(front==0 & rear==0)
	front=rear=newnode;
	else{
		rear->next=newnode;
		rear=newnode;
	}
	
}
void dequeue()
{
	if(front==0 & rear==0)
	printf("Already empty.");
		else{
			tmp=front;
			front=front->next;
			free(tmp);
		}
}
void display()
{
	if(front==0 & rear==0)
	printf("Nothing Here!");
	else{
		tmp=front;
		while(tmp!=0)
		{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}
	}
}
void peek()
{
	if(front==0 & rear==0)
	printf("Nothing Here!");
	else{
		printf("First element : %d",front->data);
	}
}
int main()
{
	int ch=0,data=0;
	printf("choice: 1 for enqueue,2 for peek,3 for dequeue,4 for display,5 for exit");
	while(1)
	{
		printf("choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter data:");
			scanf("%d",&data);
		enqueue(data);
	}
		else if(ch==2)
		peek();
		else if(ch==3)
		dequeue();
		else if(ch==4)
		display();
		else
		exit(1);
	}
	return 0;
}

