#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *Root=NULL;
//Prototype of Functions
void Create_BST();
void Pre_Order(struct node *);
void In_Order(struct node *);
void Post_Order(struct node *);
int main()
{
	Create_BST();
	printf("\nPre Order Traversal\n");
	Pre_Order(Root);
	printf("\nIn Order Traversal\n");
	In_Order(Root);
	printf("\nPost Order Traversal\n");
	Post_Order(Root);	
}
void Create_BST()
{
	int N,item;
	struct node *Temp,*Trav;
	printf("Enter number of Nodes:"); 
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		printf("Enter Data :");
		scanf("%d",&item);
		Temp=new (struct node);
		Temp->data=item;
		Temp->left=NULL;
		Temp->right=NULL;
		if(Root==NULL)
		{
			Root=Temp;
		}
		else
		{
			Trav=Root;
			while(1)
			{
				if(item<Trav->data)
				{
					if(Trav->left==NULL)
					{
						Trav->left=Temp; break;
					}	
					else 
					{
						Trav=Trav->left;
					}
						
				}
				if(item>Trav->data)
				{
					if(Trav->right==NULL)
					{
						Trav->right=Temp; break;
					}	
					else 
					{
						Trav=Trav->right;
					}
						
				}
			}
		}
		
	}
		
}
void Pre_Order(struct node *r)
{
	if(r!=NULL)
	{
		printf("%d\t",r->data);
		Pre_Order(r->left);
		Pre_Order(r->right);
	}
}
/////////////////////
void In_Order(struct node *r)
{
	if(r!=NULL)
	{
		
		In_Order(r->left);
		printf("\t%d",r->data);
		In_Order(r->right);
	}
}

/////////////////////
void Post_Order(struct node *r)
{
	if(r!=NULL)
	{
		
		Post_Order(r->left);
		Post_Order(r->right);
		printf("%d\t",r->data);
	}
}
