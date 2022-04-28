#include <stdio.h>
int main() {
	float numbers[5],total=0, avg;
	int j, p=0; 
	printf("entr the first number"); 
    scanf("%f", &numbers[0]);
    printf("enter the second number"); 
    scanf("%f", &numbers[1]);
    printf("enter the third number "); 
    scanf("%f", &numbers[2]);
	printf("enter the fourth number "); 
    scanf("%f", &numbers[3]);
    printf("enter the fifth number "); 
    scanf("%f", &numbers[4]);
	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			p++;
			total += numbers[j];
		}	
    }
    avg = total/p;
	printf("Number of positive numbers %d", p);
	printf("Average value of the said positive numbers %.2f", avg);
	printf("\n");
	return 0;
}
