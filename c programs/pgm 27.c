#include <stdio.h>
int main() 
{
	float numbers[5];
	int j, pqrs=0, abcd=0;
	printf("enter the first number "); 
    scanf("%f", &numbers[0]);
    printf("enter the second number: "); 
    scanf("%f", &numbers[1]);
    printf("enter the third number: "); 
    scanf("%f", &numbers[2]);
	printf("enter the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("enter the fifth number: "); 
    scanf("%f", &numbers[4]);
	for(j = 0; j < 5; j++)
	 {
		if(numbers[j] > 0)
		{
			
			pqrs++;
		}
		else if(numbers[j] < 0)
		{
			abcd++;
		}
	}
	printf("\nNumber of positive numbers: %d", pqrs);
	printf("\nNumber of negative numbers: %d", abcd);
	printf("\n");
	return 0;
}
