#include<stdio.h>
#include<stdlib.h>
int a[10],pos,ele;
int n=0;
void create();
void insert();
void delete();
void display();
void main()
{
    int choice;
    while(1)
    {
        printf("\n\n~~ menu ~~\n\n");
        printf("1.create array of n integer\n");
        printf("2.insert element in the given array\n");
        printf("3.delete element in the given array\n" );
        printf("4.display array elements\n");
        printf("5.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
            break;
            case 2:insert();
            break;
            case 3:delete();
            break;
            case 4:display();
            break;
            case 5:exit(0);
            break;
            default:printf("invalid expression\n");
            
        }
    }
}
            void create()
            {
                int i;
                printf("enter the number of elements:");
                scanf("%d",&n);
                printf("enter the elements\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
            }
            void insert()
            {
                int i;
                printf("enter the elements to be inserted\n");
                scanf("%d",&ele);
                printf("enter the position\n");
                scanf("%d",&pos);
                for(i=n-1;i>=pos;i--)
                {
                    a[i+1]=a[i];
                }
                    a[pos]=ele;
                    n=n++;
                    printf("array after inserting\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t",a[i]);
                    }
                
                
                  
            }
                void delete()
                {
                    int i;
                    printf("enter the position of element to be deleted\n");
                    scanf("%d",&pos);
                    printf("enter the position\n");
                    for(i=pos-1;i<n;i++)
                
                     a[i]=a[i+1];
                     n--;
                   printf("array after deleting\n");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t",a[i]);
                    }
                }
                    void display()
                    {
                        int i;
                        printf("array elements are:\n");
                        for(i=0;i<n;i++)
                        {
                            printf("%d\t",a[i]);
                        }
                    }

                
                

