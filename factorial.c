#include <stdio.h>

int main()
{
	int num;
	int fact;
	printf("Enter a number: "); 
	scanf("%d", &num);  
	
	if(num<0)
	{
		printf("Factorial of negative number doesn't exists.\n");
		return 0;
	}
	
	fact = 1; 
	while(num>1) 
	{
		fact = fact * num;
		num--;
	}
	
	printf("Factorial is %d\n", fact);
}

