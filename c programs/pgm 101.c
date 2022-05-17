#include<stdio.h>
int main()
{
    int a[5], i;
    printf("Enter 5 values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]==a[5-1])
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
