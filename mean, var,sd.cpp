#include<stdio.h>
#include<conio.h>
#include<math.h>
void scan(int a[],int s)
{
	int i;
	printf("Dear user,enter the elements of an array:");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int s)
{
	int i;
	printf("Dear user your array is:\n");
	for(i=0;i<s;i++)
	printf("Element at %dth index is %d\n",i,a[i]);
}
float mean(int a[],int s)
{
	int i,tmp=0;
	float mean;
	for(i=0;i<s;i++)
	{
		tmp+=a[i];
	}
	mean=tmp/s;
	return mean;
}
float variance(int a[],int s,float mean)
{
	int i,tmp,sum=0;
	float var;
	for(i=0;i<s;i++)
	{
		tmp=a[i]-mean;
		tmp=tmp*tmp;
		sum=sum+tmp;
	}
	var=sum/s;
	return var;
}
float std_dev(int a[],float var)
{
	float standard_dev;
	standard_dev=sqrt(var);
	return standard_dev;
}
int main()
{
	int n=100,arr[n],size;
	float m,v,sd;
	printf("Dear user, please enter the size of an array:\n");
	scanf("%d",&size);
	scan(arr,size);
	display(arr,size);
	m=mean(arr,size);
	v=variance(arr,size,m);
	sd=std_dev(arr,v);
	printf("mean , variance ,& standard deviation of given data is:\nMEAN=%f\tVARIANCE=%f\tSTANDARD DEVIATION=%f",m,v,sd);
	return 0;
}
