#include <stdio.h>
int main() {
	int j, numbers[5],total=0;
	printf("enter the first number"); 
    scanf("%d", &numbers[0]);
    printf("enter the second number "); 
    scanf("%d", &numbers[1]);
    printf("enter the third number "); 
    scanf("%d", &numbers[2]);
	printf("enter the fourth number "); 
    scanf("%d", &numbers[3]);
    printf("enter the fifth number "); 
    scanf("%d", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if((numbers[j]%2) != 0) 
		{
		   total += numbers[j];
		}	
    }
   	printf("Sum of all odd values: %d", total);
	printf("\n");
	return 0;
}
