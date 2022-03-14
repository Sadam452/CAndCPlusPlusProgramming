#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int size=5;
	for(i=0;i<size;i++)
	{
		for(k=size;k>i+1;k--)
		cout<<" ";
		for(k=0;k<=i*2;k++)
		cout<<"*";
		cout<<"\n";
	}
	for(i=0;i<2*size-3;i++)
	{
		for(k=0;k<=i;k++)
		cout<<" ";
		for(k=2*size-3;k>2*i;k--)
		cout<<"*";
		cout<<"\n";
	}
	return 0;
}
