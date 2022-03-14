#include<stdio.h>
const int n=5; //capacity of knapsack.
float x[n];    //solution array
void swap(int *e1,int *e2)  //swap function used in sort
{
	int tmp=*e1; 
	*e1=*e2;
	*e2=tmp;
}
void sort(int * const p,int * const w)   //bubble sort technique
{
	int pass,j;
	for(pass=0;pass<n-1;pass++)
	{
		for(j=0;j<n-1;j++)
		{
		if((p[j] / w[j]) < (p[j+1] / w[j+1]))
		{
			swap(&p[j],&p[j+1]);
			swap(&w[j],&w[j+1]);
		}
     	}
	}
}
int knapsack(int p[],int w[],int m) //knapsack function
{
	int i;
	float u=m;                     
	for(i=0;i<n;i++)
	x[i]=0;
	for(i=0;i<n;i++)
	{
		if(w[i]>u)
		break;
		x[i]=1;
		u=u-w[i];
	}
	if(i<n){
		x[i]=float(u/w[i]);
	}
}
int main()
{
	int m,p[n],w[n],i;
	printf("Please enter the capacity of knap-sack(m)?");
	scanf("%d",&m);
	printf("Enter the item wieghts in w[n] array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("Enter the item profits in p[n] array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	sort(p,w);
	printf("\nSorted array of profits in accordance with p/w ratio(high to low):");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p[i]);
	}
	printf("\nSorted array of weights in accordance with p/w ratio(high to low):");
	for(i=0;i<n;i++)
	{
		printf("%d\t",w[i]);
	}
	knapsack(p,w,m);
	printf("\nSolution array is(see the order of p[],w[] array !!) :");
	for(i=0;i<n;i++)
	{
		printf("%.2f\t",x[i]);
	}
	return 0;
}
