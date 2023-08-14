#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;
};
typedef struct node* NODE;
NODE root= NULL;
NODE getnode() // create a node
{
NODE x;
x=(NODE) malloc (sizeof(struct node));
x->lchild=NULL;
x->rchild=NULL;
return x;
}
NODE insert(int item, NODE root)
{
NODE temp,cur,prev;
temp=getnode();
temp->info=item;
if(root==NULL)
{
root=temp;
return root;
}
else
{
prev=NULL;
cur=root;
while (cur!=NULL) // find the leaf node
{
prev=cur;
cur=(temp->info<cur->info)?cur->lchild:cur->rchild;
if(prev->info==temp->info)
{
free(temp);
return root;
}
}
if(temp->info<prev->info)
prev->lchild=temp;
else
prev->rchild=temp;
}
return root;
}
void inorder(NODE ptr1)
{
if(ptr1!=NULL)
{
inorder(ptr1->lchild);
printf("%d\t",ptr1->info);
inorder(ptr1->rchild);
}
}
void preorder(NODE ptr2)
{
if(ptr2!=NULL)
{
printf("%d\t",ptr2->info);
preorder(ptr2->lchild);
preorder(ptr2->rchild);
}
}
void postorder(NODE ptr3)
{
    
if(ptr3!=NULL)
{
postorder(ptr3->lchild);
postorder(ptr3->rchild);
printf("%d\t",ptr3->info);
}
}
void search(NODE root)
{
int item,found=0;
NODE cur;
printf("enter the element to be searched\n");
scanf("%d",&item);
if(root==NULL)
{
printf("binary search tree is empty\n");
return;
}
cur=root;
while(cur!=NULL)
{
if(item==cur->info)
{
found=1;
printf("Found key %d in tree\n",cur->info);
}
if(item<cur->info)
cur=cur->lchild;
else
cur=cur->rchild;

}
if(found==0)
printf("Key not found\n");
}
void main()
{
int choice,item,n,i;
while(1)
{
printf("\n1. Create BST of N Integers");
printf("\n2. BST Traversal ");
printf("\n3. Binary Search");
printf("\n4. Exit");
printf("\nEnter Your Choice");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\n Enter number of elements");
scanf("%d",&n);
for (i =0; i<n; i++)
{
printf("Enter the item to be inserted\n");

scanf("%d",&item);
root=insert(item,root);
}
break;
case 2: if(root==NULL) // check for empty tree
printf("Tree is empty\n");
else
{
printf("\n\n INORDER traversal\n");
inorder(root);
printf("\n\n PREORDER traversal\n");
preorder(root);
printf("\n\n POSTORDER traversal\n");
postorder(root);
}
break;
case 3:search(root);
break;
case 4:return;
default:printf("\n Invalid Choice\n");
}
}
}
