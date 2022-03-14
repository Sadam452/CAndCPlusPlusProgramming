//insert 
//search bst
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node * create(int x)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->left=newnode->right=0;
	return newnode;
}
struct node * insert(struct node *root,int x)
{
	if(root==0)
	return create(x);
	if(x<root->data)
	root->left=insert(root->left,x);
	else if(x>root->data)
	root->right=insert(root->right,x);
	return root;
}
void inorder(struct node *root)
{
	if(root==0)
	return;
	inorder(root->left);
	printf("%d\n",root->data);
	inorder(root->right); 	
}
void search(struct node *root,int ser)
{
	if(root==0)
	printf("No match found!\n");
	else if(root->data==ser)
	printf("%d found successfully\n",ser);
	else if(root->data<ser)
	search(root->right,ser);
	else if(root->data>ser)
	search(root->left,ser);
}
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
    while (current && current->left != NULL) 
        current = current->left;
    return current; 
} 
struct node* deleteNode(struct node* root, int key) 
{ 
    if (root == NULL) return root;  
    if (key < root->data) 
        root->left = deleteNode(root->left, key);  
    else if (key > root->data) 
        root->right = deleteNode(root->right, key);  
    else
    { 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
        struct node* temp = minValueNode(root->right); 
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data); 
    } 
    return root; 
} 
int main()
{
	struct node *root=0;
	int x,c=0,s;
	printf("Enter node data:");
	scanf("%d",&x);
	root=insert(root,x);
	while(1)
	{
		printf("Enter 1 to insert,2 to search, 3 to view, 4 to delete, 5 to exit:");
		scanf("%d",&c);
		if(c==1)
		{
		printf("Enter node data:");
	    scanf("%d",&x);	
	    insert(root,x);
		}
		else if(c==2)
		{
			printf("Node to search?");
			scanf("%d",&s);
			search(root,s);
		}
		else if(c==3)
		inorder(root);
		else if(c==4)
		{
			printf("Node to delete?");
			scanf("%d",&s);
			deleteNode(root,s);
		}
		else
		exit(1);
	}
	return 0;
}
