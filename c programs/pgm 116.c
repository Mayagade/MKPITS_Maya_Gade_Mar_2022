#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter values of a & b:");
    scanf("%f%f",&a,&b);
    float  sum, sub, mul, divi;
    
    sum=a+b;
    printf("Sum of a & b is: %f\n",sum);
    
    sub=a-b;
    printf("Substraction of a & b is: %f\n",sub);
    
    mul=a*b;
    printf("Multiplication of a & b is: %f\n", mul);
    
    divi=a/b;
    printf("Division of a & b is: %f", divi);
}
