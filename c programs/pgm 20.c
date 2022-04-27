#include <stdio.h>
#include <math.h>    
int main() {
	double a, b, c, pr1;  	
	printf("enter the first number(a)\n "); 
    scanf("%lf", &a);
    printf("enter the second number(b)\n "); 
    scanf("%lf", &b);
    printf("enter the third number(c)\n "); 
    scanf("%lf", &c);
    
	pr1 = (b*b) - (4*(a)*(c));
		
    if(pr1 > 0 && a != 0) {
		double x, y;
		pr1 = sqrt(pr1);
		x = (-b + pr1)/(2*a);
		y = (-b - pr1)/(2*a);
		printf("Root1 = %.5lf\n", x);
		printf("Root2 = %.5lf\n", y);
	} 
	else
	 {
		printf("Impossible to find the roots.\n");
	}
	
	return 0;
}
