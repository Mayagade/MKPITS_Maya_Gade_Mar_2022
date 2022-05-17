#include<stdio.h>
int main()
{
   int a[5], i, even=0;
   printf("Enter values here:");
   for(i=0; i<5; i++)
   {
       scanf("%d", &a[i]);
   }
   
   for(i=0; i<5; i++)
   {
       if(a[i]%2==0)
       even=even+a[i];
   }
   printf("Sum of all even no. in an array is:%d",even);
}
