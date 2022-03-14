#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
};
struct node * create()
{
	struct node *newnode;
	int x;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter node data(-1 for no node)\n");
	scanf("%d",&x);
	if(x==-1)return 0;
	newnode->data=x;
	printf("Enter left child of %d\n",x);
	newnode->left=create();
	printf("Enter right child of %d\n",x);
	newnode->right=create();
	return newnode;
}
int main()
{
	struct node *root;
	root=create();
	return 0;
}
