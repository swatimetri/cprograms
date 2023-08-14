//progarmme to solve postfix expression
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int compute(char symbol,int  op1,int op2){
    int res=0;
    switch(symbol){
        case '+': res=op1+op2;
                  return res;
                  break;
        case '-': res=op1-op2;
                  return res;
                  break;
        case '*': res=op1*op2;
                  return res;
                  break;
        case '/': res=op1/op2;
                  return res;
                  break;
        case '%': res=op1%op2;
                  return res;
                  break;
        case '^': res=pow(op1,op2);
                  return res;
                  break;
        default : printf("INvalid operator present");
                  exit(0);
    }
}
int s[50],top=-1,symbol;
void main(){
    char expression[50];
    int i , res,op1,op2;
    printf("Enter the postfix expression");
    scanf("%s",expression);
    for(i=0;i<strlen(expression);i++){
        symbol=expression[i];
        if(isdigit(symbol)){
            s[++top]=symbol-'0';
        }
        else{
            symbol= expression[i];
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }
    }
    printf("Final result = %d",res);
}
