#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left,*right;
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
void pre_order(struct node *root)
{
	if(root==0)return;
	printf("%d\n",root->data);
	pre_order(root->left);
	pre_order(root->right);
}
void in_order(struct node *root)
{
	if(root==0)return;
	in_order(root->left);
	printf("%d\n",root->data);
	in_order(root->right);
}
void post_order(struct node *root)
{
	if(root==0)return;
	post_order(root->left);
	post_order(root->right);
	printf("%d\n",root->data);
}
int main()
{
	struct node *root;
	root=create();
	printf("Printing tree in pre order manner: Hit any key!\n");
	getch();
	pre_order(root);
	printf("Printing tree in in_order manner: Hit any key!\n");
	getch();
	in_order(root);
	printf("Printing tree in post_order manner: Hit any key!\n");
	getch();
	post_order(root);
	return 0;
}
