#include <stdio.h>
#include <math.h>
void tower(int n, char beg, char aux, char end)
{
    if (n > 0)
    {
        tower(n - 1, beg, end, aux);
        printf("Move disc from %c to %c\n", beg, end);
        tower(n - 1, aux, beg, end);
    }
    
}
void main()
{
    int n, move;
    char a, b, c;
    printf("Enter the number of discs");
    scanf("%d", &n);
    move = pow(2, n) - 1;
    if (n >= 0)
    {
        printf("Number of moves = %d \n", move);}
        tower(n, 'a', 'b', 'c');
     if (n < 0)
    {
        printf("Invalid disc count");
    }
    else if(n==0)
    {
        printf("No disc to move\n");
}
}
