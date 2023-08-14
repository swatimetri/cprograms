#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct node
{
    char id[10],name[10],branch[10],area[10];
    struct node*prev;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
void enqueue(char id[10],char name[10],char branch[10],char area[10])
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->id,id);
    strcpy(newnode->name,name);
    strcpy(newnode->branch,branch);
    strcpy(newnode->area,area);
    newnode->prev=0;
    newnode->next=0; 
    if(front==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        newnode->prev=rear;
        rear=newnode;
    }
}
void dequeue()
{
    struct node*temp;
    temp=front;
    if(front==0)
    {
    printf("queue is empty\n");
    }
    else
    {
        printf("deleted node is\n");
        printf("id=%s\n name=%s\n branch=%s\n area=%s\n",temp->id,temp->name,temp->branch,temp->area);
        front=temp->next;
        free(temp);
    }
}
void display()
{
    int count=0;
    struct node*temp;
    temp=front;
    if(front==0)
    {
    printf("queue is empty\n");
    }
    else
    {   
        printf("employee details\n");
        temp=front;
        while(temp!=NULL)
        {
        printf("id=%s\n name=%s\n branch=%s\n area=%s\n",temp->id,temp->name,temp->branch,temp->area);
        temp=temp->next;
        count++;
        }
        printf("\n count of node=%d\n",count);
    }
}
void main()
{
    int choice,i,size;
    char id[10],name[10],branch[10],area[10];
    while(1)
    {
        printf("\n menu\n");
        printf("1->enqueue\n 2->dequeue\n 3->display\n 4->exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("employee details\n");
            printf("enter id\n");
            scanf("%s",id);
            printf("enter name\n");
            scanf("%s",name);
            printf("enter branch\n");
            scanf("%s",branch);
            printf("enter area\n");
            scanf("%s",area);
            enqueue(id,name,branch,area);
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("invalid choice\n");
}
}
}
