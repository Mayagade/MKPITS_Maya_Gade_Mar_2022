#include<stdio.h>
#define N 10
int main()
{
int uabs(int), x, result;
printf("enter a negative value  \n");
scanf("%d", &x);
printf("Original value = %d", x);
result= uabs(x);
printf("\nAbsolute value = %d", result);
return 0;
}

abs_val(int y)
{
if(y<0)
return(y*-1);
else
return(y);
}
