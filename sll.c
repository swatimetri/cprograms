#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *top;
void push(int ele){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->info=ele;
    newnode->link=top;
    top=newnode;
}

void pop(){
    struct node*temp;
    temp=top;
    if(temp==NULL){
        printf("Underflow condtion\n");
    }
    else{
        printf("Deleted element =%d",top->info);
        top=top->link;
        free(temp);
    }
}

void display(){
    struct node*temp;
    temp=top;
    if(temp==NULL){
        printf("Underflow condtion\n");
    }
    else{
        while(temp!=NULL){
        printf("%d \t",top->info);
        top=top->link;
       }
    }
}
void linear(){
    struct node*temp;
    int flag=0,i=1,key;
    printf("Enter the element to be searched");
    scanf("%d",&key);
    temp=top;
    while(top!=NULL){
        if(key==temp->info){
            flag=1;
            break;
        }
        temp=temp->link;
        i++;
    }
    if(flag==1){
        printf("Element %d found at postion %d ",key,i);
    }
    else{
        printf("Element not found");
    }
}

void cat(){
    int n,i;
    struct node*newnode1,*newnode2,*head1,*head2,*temp1,*temp2,*j;
    printf("enter the number of nodes of first linked list ");
    scanf("%d",&n);
    head1=NULL;
    if(n>0){
        printf("Enter the elements ");
        for(i=0;i<n;i++){
            newnode1=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&newnode1->info);
            newnode1->link=0;
            if(head1==0){
                head1=temp1=newnode1;
            }
            else{
                temp1->link=newnode1;
            }
            temp1=newnode1;
        }
    }
    else{
        printf("NO element inserted in first list\n");
    }
    printf("enter the number of nodes of second linked list ");
    scanf("%d",&n);
    head2=NULL;
    if(n>0){
        printf("Enter the elements ");
        for(i=0;i<n;i++){
            newnode2=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&newnode2->info);
            newnode2->link=0;
            if(head2==0){
                head2=temp2=newnode2;
            }
            else{
                temp2->link=newnode2;
            }
            temp2=newnode2;
        }
    }
    else{
        printf("NO element inserted in second list\n");
    }
    if(head1!=NULL){
        j=head1;
        while(j->link!=NULL){
            j=j->link;
        }
        j->link=head2;
    }
    else{
        j=head2;
    }
    printf("Elements afte concatination");
    if(head1==NULL){
        j=head2;
    }
    else{
        j=head1;
    }
    while(j!=NULL){
        printf("%d\t",j->info);
        j=j->link;
    }
    if(head1==NULL&&head2==NULL){
        printf("There is no element to concatinate");
    }
}

void main(){
    int choice,i,ele,n;
    printf("Menu\n");
    printf("1.push\n2.pop\n3.display\n4.linearsearch\n5.conactination\n6.exit\n");
    do{
        printf("Enter your choice");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("enter the value");
        scanf("%d",&n);
        push(n);
            break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: linear();
                    break;
            case 5: cat();
                    break;
            case 6: printf("Programme exited sucsefully");
                    exit(0);
                    break;
        
        default: printf("Invalid input");
            break;
        }
    }while(choice!=6);
}
