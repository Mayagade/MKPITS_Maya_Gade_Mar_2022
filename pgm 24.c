#include <stdio.h>

int main() 
{
	int  a, b;
    printf("enter the first number: "); 
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
  
    if(a > b) 
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	
	if((b % a)== 0) 
	{
		printf("Multiplied!\n");
	} 
	else 
	{
		printf("Not Multiplied!\n");
	}
	
	return 0;
}
