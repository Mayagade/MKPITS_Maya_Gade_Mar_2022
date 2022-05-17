#include<stdio.h>
int main()
{
   int a[3], b[3], c[6], i, j;
   printf("Enter values:");
   for(i=0;i<3;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter values:");
   for(i=0;i<3;i++)
   {
       scanf("%d",&b[i]);
   }
   
   c[0]=a[0];
    c[1]=a[1];
     c[2]=a[2];
      c[3]=b[0];
       c[4]=b[1];
        c[5]=b[2];
   
   for(j=0;j<=5;j++)
   {
       printf("c[%d]=%d\n", j, c[j]);
   }
}
