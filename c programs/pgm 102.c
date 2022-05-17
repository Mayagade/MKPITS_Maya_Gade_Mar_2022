#include<stdio.h>
int main()
{
    int a[5],b[5], i, j;
    printf("Enter 5 values of a:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 5 values of b:");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    
    if(a[0]==b[0] || a[5-1]==b[5-1])
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
