#include<stdio.h>
#include<conio.h>
int main()
{
   int n, i, f=0;
   printf("Enter size of array :\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter value :");
   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0; i<n; i++)
   {
       if(a[i]==5 && a[i+1]!=5 || a[i+2]==5)
       {
           f=f+1;
       }
   }
   if(f==4)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}
