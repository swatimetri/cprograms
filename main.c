#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node *insertlvlorder(int x[],int i,int n)
{ 
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node*root=NULL;
	if(i<n)
	{
	    newnode->data=x[i];
		root=newnode;
		root->left=insertlvlorder(x,2*i+1,n);
		root->right=insertlvlorder(x,2*i+2,n);
	}
	return root;
}	
void Inorder(struct node*root)
{
	if(root!=NULL)
	{
		Inorder(root->left);
		printf("%d\n",root->data);
		Inorder(root->right);
	}
}
void Preorder(struct node*root)
{	
	if(root!=NULL)
	{
		printf("%d\n",root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
}
void Postorder(struct node*root)
{
	if(root!=NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		printf("%d\n",root->data);
	}
}
void main()
{
    int n,ch,i;
    int arr[20];
    struct node*temp;
	printf("\n*MENU*\n");
	printf("\n1.Create\n2.Preorder\n3.Postorder\n4.Exit\n");
	printf("\nEnter your choice\n");
	scanf("%d",&ch);
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}	
	temp=insertlvlorder(arr,0,n);
	Inorder(temp);
	Preorder(temp);
	Postorder(temp);			   		        
}
				



