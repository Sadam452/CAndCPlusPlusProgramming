//Binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
}*root=NULL,*newnode;
void create(){
	int num,item;
	struct node *trav;
	printf("How many nodes ?");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("Enter node data :");
		scanf("%d",&item);
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=item;
		newnode->left=newnode->right=NULL;
		if(root==NULL)
		root=newnode;
		else
		{
			trav=root;
			while(1)
			{
				if(item<trav->data)
				{
					if(trav->left==NULL)
					{ trav->left=newnode;
					break;}
					else
					trav=trav->left;
				}
				else if(item>trav->data)
				{
					if(trav->right==NULL)
					{
						trav->right=newnode;
						break;
					}
					else
					trav=trav->right;
				}
			}
		}
		
	}
}
struct node* minValue(struct node *R)
{
	struct node* current=R;
	while(current && current->left!=NULL)
	current=current->left;
	return current;
}
struct node* DeleteNode(struct node* R,int x)
{
	if(R==NULL) 
	return R;
	else if(x<R->data)
	R->left=DeleteNode(R->left,x);
	else if(x>R->data)
	R->right=DeleteNode(R->right,x);
	else{
		if(R->left==NULL)
		{
			struct node *temp=R->right;
			free(R);
			return temp;
		}
		else if(R->right==NULL)
		{
			struct node *temp=R->left;
			free(R);
			return temp;
		}
		struct node *temp=minValue(R->right);
		R->data=temp->data;
		R->right=DeleteNode(R->right,temp->data);
	}
	return R;
}
void view(struct node *R)
{
	if(R==NULL)
	return;
	view(R->left);
	printf("%d---",R->data);
	view(R->right);
}
void insert()
{
	create();
}
int main(){
	int choice;
	printf("1 for create// 2 for view // 3 for insert //4 for delete//5 for exit.\n");
	while(1){
		printf("Your Choice ?");
		scanf("%d",&choice);
		if(choice==1)
		create();
		else if(choice==2)
		view(root);
		else if(choice==3)
		insert();
		else if(choice==4){
			int s;
			printf("Enter nofeto delete ?");
			scanf("%d",&s);
		    DeleteNode(root,s);
	   }
		else
		exit(1);
	}
}
