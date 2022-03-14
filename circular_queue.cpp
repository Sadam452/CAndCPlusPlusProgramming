//by sadam 
//12 sep 20
#include<stdio.h>
#include<stdlib.h>
#define max 10
int front=0, rear=0;
int Queue[max];
void enqueue(int item)
{
	if((rear+1)%max==front)
	printf("queue is full\n");
	else
	{
		rear=(rear+1)%max;
		Queue[rear]=item;
	}
}
int dequeue()
{
	if(front==rear)
	{
		printf("empty queue");
	}
	else
	{
		front=(front+1)%max;
		return Queue[front];
	}
}
void view()
{
	
	int i;
	if(front==rear)
	printf("empty!");
	else
	{
		i=front+1;
		while(1)
		{
			printf("%d\t",Queue[i]);
			if(i==rear)
			break;
			i=(i+1)%max;
		}
	}
}
int main()
{
	int ch,item;
	printf("please enter 1 for enqueue\n 2 for dequeue\n 3 for view\n 4 for exit: \n So what is your choice:");
		while(1)
	{
		printf("So what is your choice:\n");
     	scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter element:\n");
			scanf("%d",&item);
			enqueue(item);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			view();
		}
		else if(ch==4)
		{
			exit(1);
		}
	}
}

