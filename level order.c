#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*left;
	struct node*right;
	};
	struct node*newnode(int data)
	{
	struct node*node=(struct node*)malloc(sizeof (struct node));
	node->data=data;
	node->left=node->right=NULL;
	return(node);
	}
		struct node*level(int arr[],int i,int n)
	{
	struct node*root=NULL;
	if(i<n)
	      {
		root=newnode(arr[i]);
		root->left=level(arr,2*i+1,n);
		root->right=level(arr,2*i+2,n);
	      }
	      return root;
	   }
	   void inorder(struct node*root)
	   {
		   if(root!=NULL)
		   {
		   inorder(root->left);
		   printf("%d",root->data);
		   inorder(root->right);
	   }
	   }
	   void main()
	    {
	    int n,i=0;
	    printf("Enter the number of nodes:\n ");
	    scanf("%d", &n);
	    int arr[n];
	    printf("Enter the nodes:\n");
	    for (int i = 0; i < n; i++) 
	    {
		scanf("%d", &arr[i]);
	    }
	    
	   struct node*root=level(arr,i,n);
	   inorder(root);
	   }
	   
