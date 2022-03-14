#include<stdio.h>
#include<conio.h>
int main(){
	int Arr[100],size,i,j,tmp;
	printf("Enter size of an array:\n");
	scanf("%d",&size);
	printf("Enter array elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&Arr[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				tmp=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=tmp;
			}
		}
	}
	getch();
	printf("Sorted array is:\n");
	for(i=0;i<size;i++)
	printf("%d\n",Arr[i]);
		return 0;
}
