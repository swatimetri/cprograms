#include<stdio.h>
#include<stdlib.h>
int top=-1,item,i,stack[50],max=5;
void push();
void pop();
void display();
void main()
{
    int choice;
    while(1)
    {
        printf("\n**menu**\n");
        printf("1:push\n");
        printf("2:pop\n");
        printf("3:display\n");
        printf("4:exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
            default:printf("invalid expression\n");
            break;
        }
    }
}
void push()
{
    if (top==max-1)
    {
        printf("stack is overflow\n");
        
    }
    else
    {
        printf("enter the item to be inserted\n");
        scanf("%d",&item);
        stack[++top]=item;
        
    }
    
}
  void pop()
  {
      if(top==-1)
      {
          printf("stackk is underflow\n");
          
      }
      else
      {
          item=stack[top--];
          printf("element has been deleted\n");
      }
  }
  void display()
  {
      if (top==-1)
      printf("the stack is empty\n");
      else
      {
          for(i=top;i>=0;i--)
          printf("%d\n",stack[i]);
          
      }
      
  }
  
       
    



