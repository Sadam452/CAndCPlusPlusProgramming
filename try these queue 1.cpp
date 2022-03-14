//by sadam 
//12 sep 20
#include<stdio.h>
#include<stdlib.h>
#define max 10
int front=-1, rear=-1;
int Queue[max];
void enqueue(int x)
{
	if(front==-1 && rear==-1)
	{
		rear++;
		Queue[rear]=x;
		front=0;
	}
	else if(rear==max-1)
	{
		printf("sorry! no space available\n");
	}
	else
	{
		Queue[++rear]=x;
	}
}
int dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("sorry! you cant delete anything from empty queue\n");
	}
	else if(front==rear)
	{
		int item;
		item=Queue[front];
		front=rear=-1;
		return item;
	}
	else if(front<rear)
	{
		return Queue[front++];
	}
}
void view()
{
	int i;
	if(front==-1 && rear==-1)
	printf("nothing to print\n");
	else 
	{
		for(i=front;i<=rear;i++)
		printf("element %d\n",Queue[i]);
	}
}
int main()
{
	int ch,item;
	printf("1 for enqueue, 2 for dequeue, 3 for view, 4 for exit\n");
	while(1)
	{
		printf("your choice\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("element to enqueue\n");
			scanf("%d",&item);
			enqueue(item);
		}
		else if(ch==2)
		{
			item=dequeue();
			printf("deleted element is %d\n",item);
		}
		else if(ch==3)
		{
			view();
		}
		else if(ch==4)
		{
			exit(1);
		}
		else
		{
			printf("wrong choice!\n");
		}
	}
	return 0;
}
