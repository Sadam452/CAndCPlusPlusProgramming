//circular queue usin ll
#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
}*front=0,*rear=0,*newnode=0,*tmp=0;
void enqueue(int x)
{
	newnode=(struct queue *)malloc(sizeof(struct queue));
	newnode->data=x;
	newnode->next=0;
	if(rear==0){
		front=rear=newnode;
		newnode->next=front;
	}
	else{
		rear->next=newnode;
		newnode->next=front;
		rear=rear->next;
	}
}
void dequeue(){
	if(rear==0)
	printf("Empty!");
	else if(front==rear)
	front=rear=0;
	else{
		tmp=front;
		front=front->next;
		rear->next=front;
		free(tmp);
	}
}
void peek(){
	if(rear==0)
	printf("Empty!");
	else{
		printf("First element:  %d",front->data);
	}
}
void display(){
	if(rear==0)
	printf("Empty!");
	else{
		tmp=front;
		do{
			printf("%d\n",tmp->data);
			tmp=tmp->next;
		}while(tmp!=front);
	}
	
}
int main()
{
	int ch=0,data=0;
	printf("Choice, 1 for enqueue, 2 to dequeue, 3 to display,4 to peek, 5 to exit");
	while(1){
		printf("choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter data:");
			scanf("%d",&data);
			enqueue(data);
		}
		else if(ch==2)
		dequeue();
		else if(ch==3)
		display();
		else if(ch==4)
		peek();
		else
		exit(1);
	}
	return 0;
}
