#include <stdio.h>
int main() 
   {
	double a1, b1, a2, b2, result;
    printf("Weight - Item1: ");
	scanf("%lf", &a1);
	printf("No. of item1: ");
	scanf("%lf", &b1);
	printf("Weight - Item2: ");
	scanf("%lf", &a2);
	printf("No. of item2: ");
	scanf("%lf", &b2);
	result = ((a1 * b1) + (a2 * b2)) / (a1 + b2);
	printf("Average Value = %f\n", result);
	return 0;
}
