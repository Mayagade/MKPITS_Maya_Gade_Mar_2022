#include <stdio.h>
int main() 
{
	float  x, y, z, P, A;
    printf("enter the first number "); 
    scanf("%f", &x);
    printf("enter the second number ");
    scanf("%f", &y);
    printf("enter the third number ");
    scanf("%f", &z);

    if(x < (y+z) && y < (x+z) && z < (y+x)) 
     {  
	 P = x+y+z;
	 printf("Perimeter  = %.1f",P);	 
    }
    else
    {
    	printf("Not possible to create a triangle");
	}
}
