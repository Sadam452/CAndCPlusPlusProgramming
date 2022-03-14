//deque // or deck
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 5
int deque[max];
int front=-1,rear=-1;
void enqueueFront(int x)
{
	if((front==0 && rear==max-1) || (front==rear+1))
	printf("Deck is full!");
	else if(front==-1 && rear==-1)
	{
	front=rear=0;
	deque[front]=x;
    }
    else if(front==0)
    {
    	front=max-1;
    	deque[front]=x;
	}
	else
	{
		front--;
		deque[front]=x;
	}
}
void enqueueRear(int x)
{
	if((front==0 && rear==max-1) || (front==rear+1))
	printf("Deck is full!");
	else if(front==-1 && rear==-1)
	{
	front=rear=0;
	deque[rear]=x;
    }
    else if(rear==max-1)
    {
    	rear=0;
    	deque[rear]=x;
	}
	else
	{
		rear++;
		deque[rear]=x;
	}
	
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	printf("Empty deck!");
	else{
	while(i!=rear)
	{
		printf("%d\n",deque[i]);
		i=(i+1)%max;
	}
	printf("%d\n",deque[rear]);
        }
}
void GetFront()
{
	if(front==-1 && rear==-1)
	printf("Empty deck!");
	else
	printf("Front element is : %d",deque[front]);	
}
void GetRear()
{
	if(front==-1 && rear==-1)
	printf("Empty deck!");
	else
	printf("Rare element is : %d",deque[rear]);	
}
void dequeueFront()
{
	if(front==-1 && rear==-1)
	printf("Empty deck!");
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==max-1)
	{
		front=0;
	}
	else
	{
		front++;
	}
	
}
void dequeueRear()
{
	if(front==-1 && rear==-1)
	printf("Empty deck!");
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(rear==0)
	{
		rear=max-1;
	}
	else
	{
		rear--;
	}
}
int main()
{
	int choice=0,element=0;
	printf("Enter 1 for Enqueue_front, 2 for Enqueue_rare, 3 for display"
	", 4 forDequeue_front, 5 for Dequeue_rare, 6 for front element, 7 for rare element, else exit:\n");
	while(1)
	{
		printf("Your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter element:");
			scanf("%d",&element);
		    enqueueFront(element);
	    }
	    else if(choice==2)
	    {
	    	printf("Enter element:");
			scanf("%d",&element);
		    enqueueRear(element);
		}
		else if(choice==3)
		{
			display();
		}
		else if(choice==4)
		{
			dequeueFront();
		}
		else if(choice==5)
		{
			dequeueRear();
		}
		else if(choice==6)
		{
			GetFront();
		}
		else if(choice==7)
		{
			GetRear();
		}
		else
		exit(1);
	}
}
