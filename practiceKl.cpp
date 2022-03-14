//by sadam 
//10 sep 20
#include<stdio.h>
#include<stdlib.h>
#define max 10
int Queue[max];
int front=-1,rear=-1;
void enqueue(int item)
{
	if(front==-1 && rear==-1)
	{
		rear++;
		Queue[rear]=item;
		front=0;
	}
	else if(rear==max-1)
	{
	  printf("Queue is full");
	}
	else
	{
		//rear++;
		Queue[++rear]=item;
	}
}
int dequeue()
{
	if(front==-1 && rear==-1)
	{
	printf("underflow");	
	}
	else if(front<rear)
	{
			front++;
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
}
void view()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d\t",Queue[i]);
}
int main()
{
	int ch,item;
		while(1)
	{
		printf("please enter 1 for enqueue\n 2 for dequeue\n 3 for view\n 4 for exit:"
		" \n So what is your choice:");
     	scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter element;");
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
