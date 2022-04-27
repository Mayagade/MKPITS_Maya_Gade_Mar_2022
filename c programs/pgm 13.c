#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, result, max;
    printf("Input the first integer\n "); 
    scanf("%d", &x);
    printf("Input the second integer\n ");
    scanf("%d", &y);
    printf("Input the third integer\n ");
    scanf("%d", &z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    return 0;
}
