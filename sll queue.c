#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char phno[20];
    char usn[20];
    char branch[20];
    char name[20];
    struct node*link;
};
struct node*front=0;
struct node*rear=0;
void enqueue(char phno[20],char name[20],char usn[20],char branch[20])
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->phno,phno);
    strcpy(newnode->name,name);
    strcpy(newnode->usn,usn);
    strcpy(newnode->branch,branch);
    newnode->link=0;
    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->link=newnode;
        rear=newnode;
    }
}
void display()
{
   struct node*temp;
   temp=front;
   if(front==0)
   {
       printf("underflow\n");
   }
   else
   {
    printf("details of student are\n");
    while(temp!=NULL)
    {
       printf("\n phno=%s\n name=%s\n usn=%s\n branch=%s\n ",temp->phno,temp->name,temp->usn,temp->branch);
       temp=temp->link;
    }
    printf("\n");
   }
}
void dqueue()
{
struct node*temp;
temp=front;
if(temp==0)
{
    printf("underflow\n"); 
} 
else
{
    printf("deleted node are\n");
    while(temp!=NULL)
   {   
       printf("\n phno=%s\n name=%s\n usn=%s\n branch=%s\n ",temp->phno,temp->name,temp->usn,temp->branch);
       temp=temp->link;
       temp=rear->link;
       front=front->link;
       free(temp);
   }
}
}
void main()
{
    int i,choice,n;
    char phno[20];
    char usn[20];
    char branch[20];
    char name[20];
    while(1)
    {
        printf("\nmenu\n");
        printf("1->enqueue\n 2->display\n 3->dqueue\n 4->exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the no of nodes\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("enter the phoneno\n");
                scanf("%s",phno);
                printf("enter the name\n");
                scanf("%s",name);
                printf("enter the usn\n");
                scanf("%s",usn);
                printf("enter the branch\n");
                scanf("%s",branch);
                enqueue(phno,name,usn,branch);
            }
            break;
            case 2:display();
            break;
            case 3:dqueue();
            break;
            case 4:exit(0);
            break;
            default:printf("invalid input");
}
}
}

