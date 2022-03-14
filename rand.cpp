#include<stdio.h>
#include<stdlib.h>
int cylinder[5000],request[1000];
int fcfs(int head)
{
	int count=0,i,j=0;
	count = abs(head - request[0]);
	for(i=1;i<1000;i++)
	{
		count += abs(request[j] - request[i]);
		j++;
	}
	return count;
}
int sstf(int head)
{
	int tmp_request[1000],i,j,tmp;
	for(i=0;i<1000;i++)
	tmp_request[i] = request[i];
	for(i=1;i<1000;i++)
	{
		tmp=tmp_request[i];
		j=i-1;
		while(j>=0 && tmp_request[j]>tmp){
			tmp_request[j+1]=tmp_request[j];
			j--;
		}
		tmp_request[j+1]=tmp;
	}
	return 0;
}
int scan(int head)
{
	return 0;
}
int cscan(int head)
{
	return 0;
}
int look(int head)
{
	return 0;
}
int clook(int head)
{
	
}
int main()
{
	int i,head;
	for(i=0;i<5000;i++)
	{
		cylinder[i] = i; //initialization of array
	}
	for(i=0;i<1000;i++)
	{
		request[i] = rand()%5000; //initialization with random numbers
	}
	printf("Enter the starting position of head :");
	scanf("%d",&head);
	printf("Number of head movements required in FCFS algorithm are : %d\n",fcfs(head));
	printf("Number of head movements required in SSTF algorithm are : %d\n",sstf(head));
	printf("Number of head movements required in SCAN algorithm are : %d\n",scan(head));
	printf("Number of head movements required in C-SCAN algorithm are : %d\n",cscan(head));
	printf("Number of head movements required in LOOK algorithm are : %d\n",look(head));
	printf("Number of head movements required in CLOOK algorithm are : %d\n",clook(head));
	return 0;
}
