#include<stdio.h>
int main()
{
    int a[5], i,j, temp=0;
    printf("Enter values of a[i] :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
     temp=a[0];
     a[0]=a[4];
     a[4]=temp;

   for(i=0;i<5;i++){
   printf("after swapping: b[%d]=%d\n",i, a[i]);}
}

