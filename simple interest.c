#include <stdio.h>

int main()
{
    float p,t,r,si;
    printf("enter the principle amount(p)\n");
    scanf("%f",&p);
    printf("enter time in year(t)\n");
    scanf("%f",&t);
    printf("enter the rate of interest (r)\n");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("simple interest=%f\n",si);

    return 0;
}

